section .text
	global _ft_strcpy

_ft_strcpy:
			mov	rax, rdi
			jmp	.loop

.loop:
			cmp	byte [rsi], 0
			je	.end
			mov	bh, byte [rsi]
			mov	byte [rdi], bh
			inc	rsi
			inc	rdi
			jmp	.loop

.end:
			mov byte [rdi], 0
			ret