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

Here's the system call table in Markdown format:

## Linux x86-64 System Calls

| System Call Number | System Call | Argument 1 | Argument 2 | Argument 3 | Argument 4 | Argument 5 | Argument 6 |
|-------------------|-------------|------------|------------|------------|------------|------------|------------|
| 0 | sys_read | unsigned int fd (rdi) | char *buf (rsi) | size_t count (rdx) | | | |
| 1 | sys_write | unsigned int fd (rdi) | const char *buf (rsi) | size_t count (rdx) | | | |
| 2 | sys_open | const char *filename (rdi) | int flags (rsi) | int mode (rdx) | | | |
| 3 | sys_close | unsigned int fd (rdi) | | | | | |

**Register Usage for System Calls:**
- System call number → `%rax`
- Argument 1 → `%rdi`
- Argument 2 → `%rsi`
- Argument 3 → `%rdx`
- Argument 4 → `%r10`
- Argument 5 → `%r8`
- Argument 6 → `%r9`

**Note:** After a system call, the return value is stored in `%rax`.

Here are the tables in Markdown format for easier reading:

## x86-64 Register Usage

| 64-bit | 32-bit | 16-bit | 8-bit | Special Purpose | When Calling a Function | When Writing a Function |
|--------|--------|--------|-------|-----------------|------------------------|------------------------|
| rax | eax | ax | ah,al | Return Value | Might be changed | Use freely |
| rbx | ebx | bx | bh,bl | | Will not be changed | Save before using! |
| rcx | ecx | cx | ch,cl | 4th integer argument | Might be changed | Use freely |
| rdx | edx | dx | dh,dl | 3rd integer argument | Might be changed | Use freely |
| rsi | esi | si | sil | 2nd integer argument | Might be changed | Use freely |
| rdi | edi | di | dil | 1st integer argument | Might be changed | Use freely |
| rbp | ebp | bp | bpl | Frame Pointer | Maybe Be Careful | Maybe Be Careful |
| rsp | esp | sp | spl | Stack Pointer | Be Very Careful! | Be Very Careful! |
| r8 | r8d | r8w | r8b | 5th integer argument | Might be changed | Use freely |
| r9 | r9d | r9w | r9b | 6th integer argument | Might be changed | Use freely |
| r10 | r10d | r10w | r10b | | Might be changed | Use freely |
| r11 | r11d | r11w | r11b | | Might be changed | Use freely |
| r12 | r12d | r12w | r12b | | Will not be changed | Save before using! |
| r13 | r13d | r13w | r13b | | Will not be changed | Save before using! |
| r14 | r14d | r14w | r14b | | Will not be changed | Save before using! |
| r15 | r15d | r15w | r15b | | Will not be changed | Save before using! |

**Note:** "Might be changed" = "Caller saved"; "Will not be changed" = "Callee saved".

**Floating Point Arguments:** The first 8 floating point arguments are passed in registers xmm0 to xmm7.

---

## Basic x86-64 Instructions

### Arithmetic

| Instruction | Description |
|-------------|-------------|
| `add ⟨dest⟩ ⟨src⟩` | Add |
| `sub ⟨dest⟩ ⟨src⟩` | Subtract |
| `inc ⟨dest⟩` | Increment |
| `dec ⟨dest⟩` | Decrement |
| `imul ⟨dest⟩ ⟨src⟩` | Signed multiply |
| `div ⟨dest⟩` | Divide |

### Logic

| Instruction | Description |
|-------------|-------------|
| `and ⟨dest⟩ ⟨src⟩` | Bitwise AND |
| `or ⟨dest⟩ ⟨src⟩` | Bitwise OR |
| `not ⟨dest⟩` | Bitwise NOT |
| `shr ⟨dest⟩, ⟨imm⟩` | Shift right (immediate) |
| `shr ⟨dest⟩, cl` | Shift right (by CL) |
| `shl ⟨dest⟩, ⟨imm⟩` | Shift left (immediate) |
| `shl ⟨dest⟩, cl` | Shift left (by CL) |
| `sar ⟨dest⟩, ⟨imm⟩` | Shift arithmetic right (immediate) |
| `sar ⟨dest⟩, cl` | Shift arithmetic right (by CL) |

### Jumps & Comparisons

| Instruction | Description |
|-------------|-------------|
| `jmp ⟨label⟩` | Unconditional jump |
| `cmp ⟨dest⟩ ⟨src⟩` | Compare |
| `je ⟨label⟩` | Jump if equal |
| `jne ⟨label⟩` | Jump if not equal |
| `jg ⟨label⟩` | Jump if greater (signed) |
| `jge ⟨label⟩` | Jump if greater or equal (signed) |
| `jl ⟨label⟩` | Jump if less (signed) |
| `jle ⟨label⟩` | Jump if less or equal (signed) |

### Stack Operations

| Instruction | Description |
|-------------|-------------|
| `call ⟨label⟩` | Call function |
| `ret` | Return from function |
| `push ⟨src⟩` | Push onto stack |
| `pop ⟨dest⟩` | Pop from stack |

---

**Notes:**
- `⟨dest⟩` is register or memory
- `⟨src⟩` is register or memory or immediate
- `⟨imm⟩` is immediate (byte only)