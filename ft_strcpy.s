
global ft_strcpy

section .text

ft_strcpy:
    jmp .loop               ; initiates the loop

.loop:
    cmp byte [rsi], 0       ; checks if source string is empty
    jz  .done               ; if it is jumps to exit
    mov al, [rsi]           ; moves the source into al register
    mov [rdi], al           ; moves al into destination register
    inc rdi                 ; increments destination register
    inc rsi                 ; increments source register
    jmp .loop               ; continues loop


.done:
    mov byte [rdi], 0       ; puts the null character at the end of the string in destination
    ret                     ; returns