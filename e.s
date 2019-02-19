.LC0:	.string	"e"
	.globl	main
main:
	pushq	%rbp
	movq	%rsp, %rbp
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	xor	%eax, %eax
	popq	%rbp
	ret
