	global _start

	section .text
_star:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	syscall

	mov eax, 60
	xor rdi, rdi
	syscall

message:
	db "Hello, World", 10
