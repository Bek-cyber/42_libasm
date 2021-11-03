section .text
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
			push rdi
			call _ft_strlen
			cmp rax, 0
			je .error
			inc rax
			mov rdi, rax
			call _malloc
			cmp rax, 0
			je .error
			pop rdi
			mov rsi, rdi
			mov rdi, rax
			call _ft_strcpy
			ret

.error:
			pop rdi
			mov rax, rdi
			ret