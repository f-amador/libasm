1. Assembly Language Basics

    What is assembly language?

 What Is an Assembly Language?

An assembly language is a form of computer language that helps a computer understand what you want it to do for you. Computers are coded in 1s and 0s, which are hard for humans to understand. Assembly language helps us make it easier to control a computer at an easier level by using short words and symbols instead.1 So, rather than telling the computer 10101000, you'd say MOV A, 5. Programmers can use assembly language to control a computer's CPU, find out if it's working properly, and figure out where any problems lie. It can also be used to save space and improve processing speed. 
    

 Components of Assembly Language
Syntax

When writing any code in any program language, there is an observable, specific order of rules that must be followed to allow a compiler to execute the code without error.4 These rules are defined as the syntax, and they contain criteria such as the maximum number of allowable characters, what characters code lines must start with, or what certain symbols "i.e. a semi-colon" means.
Label

A label is a symbol that represents the address where an instruction or data is stored. It's purpose is to act as the destination when referenced in a statement. Labels can be used anywhere an address can be used in assembly languages.4 A symbolic label consists of an identifier followed by a colon, while numeric labels consist of a single digital followed by a colon.
Operators

Also referred to as commands, operators are logical expressions that occur after the label field. In addition, it must be preceded by at least one white-space character. Operators can either be opcode or directive. Opcode correspond directly to machine instructions, and the operation code includes any register name associated with the instruction. Alternatively, directive operation codes are instructions known by the assembler.4
Directive

Directives are instructions to the assembler that tell what actions must take place during the assembly process.1 Directives have the importance of declaring or reserving memory for variables; these variables can be recalled later in processes to perform more dynamic functions. Directives are also used to break programs into different sections.5
Macro

An assembly language macro is a template shoe format presents a series or pattern of statements. This sequence of assembly language statements might be common to multiple different programs. A macro facility is used to interpret macro definitions, while a macro call is inserted into the source code where "normal" assembly code would have gone instead of the macro set of statements.1 
    High‑level vs. low‑level languages

    Machine code, mnemonics, and opcodes

    The role of an assembler (NASM)

    64‑bit vs. 32‑bit assembly

2. x86‑64 Architecture Overview

    General‑purpose registers (RAX, RBX, RCX, RDX, RSI, RDI, RBP, RSP, R8–R15)

    Special‑purpose registers (RIP, RFLAGS)

    Memory addressing modes

    The stack: push, pop, and stack frames

    Endianness and data sizes (byte, word, dword, qword)

3. NASM Assembler

    NASM syntax vs. AT&T syntax

    Directives: global, section, align, db/dw/dd/dq

    Labels and relative addressing

    Including external symbols (extern)

    Compiling with nasm and linking with ld (or using gcc)

4. System V AMD64 Calling Convention (Linux / macOS)

    Function prologue and epilogue

    Register usage: arguments (RDI, RSI, RDX, RCX, R8, R9) and return value (RAX)

    Callee‑saved vs. caller‑saved registers

    Stack alignment (16‑byte before call)

    Passing structures and large arguments

5. System Calls in Linux

    What is a system call?

    The syscall instruction (x86‑64)

    System call numbers (e.g., read, write, exit)

    Arguments passing (RAX for number, RDI, RSI, RDX, R10, R8, R9)

    Return values and error handling (negative return indicates error)

6. Error Handling and errno

    The errno global variable

    The ___error() / errno_location() functions

    How to set errno from assembly (call the extern function)

    Checking for errors after syscalls (compare RAX with -1)

    Properly returning -1 and preserving errno

7. Memory Management (malloc)

    Using malloc from assembly (call extern malloc)

    Allocating memory for ft_strdup

    Handling allocation failure

    Freeing memory (for bonus functions)

8. Data Types and Structures (Bonus)

    The t_list structure in assembly

    Representing pointers and struct fields

    Accessing structure members (offsets)

    Pointer arithmetic and indirection

9. Mandatory Functions – Implementation Details

    ft_strlen – counting bytes

    ft_strcpy – copying bytes

    ft_strcmp – comparing bytes

    ft_write – wrapping the syscall

    ft_read – wrapping the syscall

    ft_strdup – using malloc

Each function should be studied for:

    Expected behaviour (man pages)

    Input parameters and return value

    Syscall or library call involved

    Error conditions and errno

10. Bonus Functions – Implementation Details

    ft_atoi_base – string to int with custom base

    ft_list_push_front – add node at head

    ft_list_size – count nodes

    ft_list_sort – sort list with comparator

    ft_list_remove_if – remove nodes with custom free

For each, study:

    Prototype and behaviour

    Linked list traversal and modification

    Use of function pointers (comparator, free)

    Handling edge cases (empty list, null pointers)

11. Makefile and Compilation

    Required rules: $(NAME), all, clean, fclean, re

    Bonus rule for separate bonus files

    Compiling .s files with NASM to object files

    Linking into libasm.a

    No -no-pie flag allowed

    Relinking only when necessary

12. Testing and Debugging

    Writing a main function to test your library

    Using gdb for debugging assembly

    Using strace to trace system calls

    Using objdump and nm to inspect object files

    Comparing your functions with libc versions

    Memory checks (Valgrind) for heap usage

13. Useful Tools and Resources

    Intel / AMD manuals

    NASM documentation

    System V ABI specification

    Man pages for functions (strlen, strcpy, write, etc.)

    Online references for syscall tables

    42 school resources (subject, forum)