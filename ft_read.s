global ft_read
extern __errno_location


section .text

ft_read:
    mov eax, 0
    syscall
    cmp rax, 0
    jl .error
    ret

.error:
    neg rax
    push rax                ; Save error code
    call __errno_location wrt ..plt
    pop rdi                 ; Restore error code
    mov [rax], rdi
    mov rax, -1
    ret