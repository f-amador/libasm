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
