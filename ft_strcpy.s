
global ft_strcpy

section .text

ft_strcpy:
    jmp .loop

.loop:
    cmp byte [rdi], 0
    jz  .done
    cmp byte [rsi], 0
    jz  .done
    mov al, [rsi]
    mov [rdi], al
    inc rdi
    inc rsi
    jmp .loop


.done:
    ret