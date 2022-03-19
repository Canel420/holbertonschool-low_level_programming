	global _start

	section .text
_star:
	mov rax, 0x1
	mov rdi, 0x1
	mov rsi, message
	mov rdx, 0x17
	syscall

	mov eax, 0x60
	xor rdi, rdi
	syscall

message:
	db "Hello, World", 10
