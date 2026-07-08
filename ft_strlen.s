

global ft_strlen

section .text

ft_strlen:
    xor rax, rax
;    test rdi,rdi   ; tests if string is null
;    jz .null_return    ; jumps to return

.loop_start:
;    cmp byte[rdi + rax], 0
;    je .done
;    inc rax





    mov bl, [rdi]        ;moves the strings first postion to the register
    cmp byte bl, 0            ;checks for the null terminator
;    cmp byte [rdi], 0
    jz .done             ; breaks the loop
    inc rax             ; increments counter
    inc rdi             ; increments the strings position
    jmp .loop_start      ; back to begining of loop

.done:
    ret                


;.null_return
;    xor rax, rax
;    ret

;.test: 
;    mov rdi, test     ; load string to register     
;    call ft_strlen         ; calls strlen
;    mov rdi, rax        ; loads string length into exit code
;    mov rax, 60         ; loads sys_exit
;    syscall             ; calls exit syscall


section .data
    test: db "Hellao",0 ; Null-terminated string
