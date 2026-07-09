global ft_strcmp

section .text

ft_strcmp:
    jmp .loop

.loop:
    cmp [rsi], [rdi]
    jne .done
    cmp byte [rdi], 0
    jz .done
    cmp byte [rsi], 0
    jz .done
    inc rdi
    inc rsi
    jmp .loop

.done:
    mov byte rax, [rdi]
    mov byte rbx, [rsi]
    sub rax, rbx
    ret