section .data
    hello db "Hello, Holberton", 10  ; 10 is ASCII for newline
    hello_len equ $ - hello

section .text
    global _start

_start:
    ; Prepare arguments to call write
    mov rax, 1         ; syscall number for sys_write
    mov rdi, 1         ; file descriptor 1: stdout
    mov rsi, hello     ; pointer to the string
    mov rdx, hello_len ; length of the string
    syscall            ; Call the kernel

    ; Exit the program
    mov eax, 60        ; syscall number for exit
    xor edi, edi       ; status = 0
    syscall            ; Call the kernel

