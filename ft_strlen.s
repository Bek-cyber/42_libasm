section .text
	global _ft_strlen

_ft_strlen:
			push	rdi
			mov		rax, 0
			cmp		rdi, 0
			jz		.end

.loop:
			cmp		byte [rdi], 0
			jz		.end
			inc		rdi
			inc		rax
			jmp		.loop

.end:
			pop		rdi
			ret