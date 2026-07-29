Here is a beginner-friendly, progressive list of exercises to help you build the skills needed for **Libasm**. I've organized them into stages and included recommended resources for each topic.

**Important:** Master each exercise fully before moving to the next. "Mastery" means you can explain *why* your code works, not just that it runs. Rely on the resources, not on copying solutions.

---

## 📚 Recommended Resources
Before starting the exercises, bookmark these references. They are your toolkit.

| Resource | Description |
| :--- | :--- |
| **NASM Tutorial** (CS.LMU) | Excellent step-by-step guide covering program structure, instructions, and calling conventions. |
| **asmlings** (GitHub) | 46 interactive exercises for fixing assembly code, with hints and auto-checking. A great way to learn by doing. |
| **Learning Assembly by Solving** (GitHub) | 20 small standalone programs from basic arithmetic to control structures. |
| **x86-64 Assembly Intro** (GitHub) | Introductory exercises with a focus on Intel syntax (NASM). |
| **x86-64 Assembly Learning Path** (GitHub) | A structured curriculum with clear examples and progressive difficulty. |

---

## 🏁 Stage 0: Environment Setup
**Goal:** Set up your assembly development environment.

**Exercises:**
1.  Install **NASM** and a linker (`ld` or `gcc`) on your system.
2.  Write and run the classic "Hello, World!" program using only system calls (no `printf`).
3.  Modify the program to print your name.
4.  Learn to assemble (`nasm -f elf64`) and link (`ld`) your program manually.

**Use these resources:**
- NASM Tutorial – "Your First Program"
- x86-64 Assembly Learning Path – "01-hello-world"

---

## 🧱 Stage 1: Registers, Data, and Basic Arithmetic
**Goal:** Understand registers, data sections, and fundamental arithmetic operations.

**Exercises:**
1.  Declare a variable in the `.data` section and move its value into a register.
2.  Perform addition and subtraction on two numbers and store the result.
3.  Add two numbers and print the result as a character (digit).
4.  Subtract two numbers and print the difference.
5.  Find the maximum of two numbers using comparison and conditional jumps.
6.  Check if a number is even or odd using bitwise operations.
7.  Swap two variables using a temporary register.

**Use these resources:**
- NASM Tutorial – "Your First Few Instructions" and "Defining Data"
- x86-64 Assembly Learning Path – "02-add-numbers"
- asmlings – "Basics (registers, arithmetic, logic)" exercises

---

## 🔀 Stage 2: Control Flow (Conditionals and Loops)
**Goal:** Master conditional jumps and loops to control program flow.

**Exercises:**
1.  Compare two numbers and print "Equal" if they are the same.
2.  Check if a number is positive or negative and print the result.
3.  Print "Positive", "Negative", or "Zero" for a given number.
4.  Use a loop to count from 1 to 5 and print each number on a new line.
5.  Sum the numbers from 1 to 10 using a loop and print the result.
6.  Print the first 5 even numbers (0, 2, 4, 6, 8).
7.  Check if a number is a multiple of 3.

**Use these resources:**
- x86-64 Assembly Learning Path – "03-conditionals" and "04-loops"
- asmlings – "Control flow (comparisons, jumps, loops)" exercises
- NASM Tutorial – "Conditional Instructions"

---

## 📦 Stage 3: Memory, Arrays, and Addressing
**Goal:** Work with memory, arrays, and different addressing modes.

**Exercises:**
1.  Store 5 numbers in memory (an array) and calculate their sum.
2.  Find the average of 3 numbers stored in memory.
3.  Find the maximum value in an array of integers.
4.  Reverse a 2-digit number (e.g., 42 → 24) by manipulating digits in memory.
5.  Store a string in `.data` and iterate through it character by character.

**Use these resources:**
- NASM Tutorial – "Instructions with two memory operands"
- asmlings – "Memory operations (load, store, addressing)" exercises

---

## 🧩 Stage 4: Functions and the Stack
**Goal:** Understand the calling convention, stack frames, and how to write functions.

**Exercises:**
1.  Write a simple function that adds two numbers and returns the result.
2.  Write a function that takes a string pointer and returns its length (like `ft_strlen`).
3.  Write a function that copies a string (like `ft_strcpy`).
4.  Write a recursive function to calculate factorial.
5.  Write a function that compares two strings (like `ft_strcmp`).

**Use these resources:**
- NASM Tutorial – "Understanding Calling Conventions" and "Mixing C and Assembly"
- x86-64 Assembly Learning Path – "05-functions"
- asmlings – "Stack and functions (leaf functions, recursion, stack frames, calling conventions)" exercises

---

## 🖥️ Stage 5: System Calls and Error Handling
**Goal:** Use system calls for I/O, handle errors, and set `errno`.

**Exercises:**
1.  Write a program that reads user input using the `read` syscall.
2.  Write a program that writes to a file using the `write` syscall.
3.  Handle a system call error (e.g., try to open a non-existent file).
4.  Simulate setting `errno` by calling `___error` or `errno_location`.

**Use these resources:**
- NASM Tutorial – "System Calls" (covered in the Hello World example)
- asmlings – "System I/O (read, write, files, arguments)" exercises
- Linux Syscall Table

---

## 🏗️ Stage 6: Dynamic Memory (malloc)
**Goal:** Use `malloc` to allocate memory dynamically.

**Exercises:**
1.  Write a program that calls `malloc` to allocate a block of memory.
2.  Write a program that duplicates a string using `malloc` (like `ft_strdup`).
3.  Write a program that frees the allocated memory using `free`.

**Use these resources:**
- NASM Tutorial – "Using a C Library"
- Understanding how to call external functions from assembly.

---

## 🔗 Stage 7: Data Structures (Linked Lists)
**Goal:** Work with structures and pointers to build and manipulate linked lists.

**Exercises:**
1.  Define a `t_list` structure in assembly (with `data` and `next` fields).
2.  Write a function to add an element to the front of a list (`ft_list_push_front`).
3.  Write a function to count the number of elements in a list (`ft_list_size`).
4.  Write a function to sort a list using a comparison function (`ft_list_sort`).
5.  Write a function to remove elements from a list based on a condition (`ft_list_remove_if`).

**Use these resources:**
- Understanding structure offsets and pointer manipulation.
- The resources from the previous stages on functions and the stack.

---

## 🎯 Stage 8: String and Base Conversion
**Goal:** Handle strings and implement conversions.

**Exercises:**
1.  Write a function that converts a string to an integer (`atoi`).
2.  Write a function that converts a string to an integer using a custom base (`ft_atoi_base`).
3.  Handle invalid bases (empty, one character, duplicates, invalid characters).

**Use these resources:**
- The subject's annex on `ft_atoi_base`.

---

## 🏆 Final Stage: Putting It All Together
**Goal:** Combine everything to complete the Libasm project.

**Exercises:**
1.  Implement all mandatory functions (`ft_strlen`, `ft_strcpy`, `ft_strcmp`, `ft_write`, `ft_read`, `ft_strdup`) in assembly.
2.  Ensure proper error handling and `errno` setting.
3.  Write a comprehensive test program (a `main` function) to verify all your functions.
4.  Implement the bonus functions (`ft_atoi_base`, `ft_list_push_front`, `ft_list_size`, `ft_list_sort`, `ft_list_remove_if`).
5.  Create a `Makefile` with the required rules (`all`, `clean`, `fclean`, `re`, `bonus`).

**Use these resources:**
- The Libasm subject.
- All the resources and exercises from previous stages.

---

**Remember:** The goal is understanding, not just completion. Take your time with each stage. Good luck!