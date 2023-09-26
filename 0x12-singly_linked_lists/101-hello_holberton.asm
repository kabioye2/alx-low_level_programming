section .rodata
	format db "Hello, Holberton", 10, 0

section .text
	global main

	extern printf

main:
	sub rsp, 8
        lea rdi, [format]
        call printf
	add rsp, 8
	xor rdi, rdi
	ret
