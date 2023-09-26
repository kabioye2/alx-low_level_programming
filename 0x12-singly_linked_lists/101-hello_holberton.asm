section .rodata
	format db "Hello, Holberton", 10, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp
        lea rdi, [format]
        call printf
	mov eax, 0
	pop rbp
	ret
