	.file	"calculator.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter number followed by symbols(+,-,*,/)"
.LC1:
	.string	"%d %c %d %c"
.LC2:
	.string	"clear"
.LC3:
	.string	"%d %c "
.LC4:
	.string	" %d %c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, -16(%rbp)
	movl	$2, -12(%rbp)
	movb	$42, -17(%rbp)
	leaq	-17(%rbp), %rsi
	leaq	-12(%rbp), %rcx
	leaq	-17(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rsi, %r8
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	jmp	.L2
.L7:
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movzbl	-17(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$47, %eax
	je	.L3
	cmpl	$47, %eax
	jg	.L4
	cmpl	$45, %eax
	je	.L5
	cmpl	$45, %eax
	jg	.L4
	cmpl	$42, %eax
	je	.L6
	cmpl	$43, %eax
	jne	.L4
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	movzbl	-17(%rbp), %eax
	movsbl	%al, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L4
.L5:
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, -16(%rbp)
	movzbl	-17(%rbp), %eax
	movsbl	%al, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L4
.L6:
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	imull	%edx, %eax
	movl	%eax, -16(%rbp)
	movzbl	-17(%rbp), %eax
	movsbl	%al, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L4
.L3:
	movl	-16(%rbp), %eax
	movl	-12(%rbp), %ecx
	cltd
	idivl	%ecx
	movl	%eax, -16(%rbp)
	movzbl	-17(%rbp), %eax
	movsbl	%al, %edx
	movl	-16(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
.L4:
	leaq	-17(%rbp), %rdx
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
.L2:
	movzbl	-17(%rbp), %eax
	cmpb	$61, %al
	jne	.L7
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 13.2.0-9ubuntu1) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
