global ft_strcmp

section .text

ft_strcmp:
    xor rcx, rcx                    ; set counter to 0
    jmp .loop                       ; begin loop

.loop:
    movzx rax, byte [rdi + rcx]     ; save byte from first argument
    movzx rbx, byte [rsi + rcx]     ; save byte from second argument
    cmp al, bl                      ; compare bytes
    jne .done                       ; jump if not equal
    test al, al                     ; check for null character
    jz .done                        ; jump if zero
    inc rcx                         ; increment counter
    jmp .loop                       ; continues lopp

.done:
    sub rax, rbx                    ; saves difference in the rax for return
    ret