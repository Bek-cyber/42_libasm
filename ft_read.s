section .text
	global _ft_read
	extern ___error

_ft_read:
			push	r10
			mov		rax, 0x2000003
			syscall
			jc		_ft_error
			pop		r10
			ret

_ft_error:
			mov		r10, rax
			call	___error
			mov		[rax], r10
			mov		rax, -1
			pop		r10
			ret
