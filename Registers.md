Arguments are passed in registers in this order:

    rdi - First argument rdi-> Register Destination Index
    rsi - Second argument rsi-> Register Source Index
    rdx - Third argument -> Register Data
    rcx - Fourth argument -> Register Counter
    r8 - Fifth argument
    r9 - Sixth argument
    Stack - Additional arguments (if more than 6)

    rbp -> Register Base Pointer
    rsp -> Register Stack Pointer
    

    GDB COMMANDS

    layout next -> displays assembly GUI
    layout reg -> displays registers in the GUI
    starti -> starts and breaks the program at entry
    si ->  steps and break

    syscall register

# Linux System Call Table (x86_32)

| %eax | Name | %ebx | %ecx | %edx | %esx | %edi |
|------|------|------|------|------|------|------|
| 1 | sys_exit | int | - | - | - | - |
| 2 | sys_fork | struct pt_regs | - | - | - | - |
| 3 | sys_read | unsigned int | char * | size_t | - | - |
| 4 | sys_write | unsigned int | const char * | size_t | - | - |
| 5 | sys_open | const char * | int | int | - | - |
| 6 | sys_close | unsigned int | - | - | - | - |
