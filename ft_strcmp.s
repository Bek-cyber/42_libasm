section .text
	global _ft_strcmp

_ft_strcmp:
			mov		r10, 0
			mov		r11, 0
.loop:
			cmp		byte [rdi], 0
			je		.compare
			cmp		byte [rsi], 0
			je		.compare
			movzx		r11, byte [rsi]
			movzx		r10, byte [rdi]
			cmp		r10, r11
			jne		.compare
			inc		rdi;
			inc		rsi;
			jmp		.loop

.compare:
			movzx	r11, byte [rsi]
            movzx	r10, byte [rdi]
            cmp		r10, r11
            je		.equal
            jl		.less
            jg		.more

.equal:
			mov		rax, 0
			jmp		.end

.less:
			mov		rax, -1
			jmp		.end

.more:
			mov		rax, 1
			jmp		.end

.end:
			ret