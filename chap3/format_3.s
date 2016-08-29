	.file	"format_3.c"
	.section	.rodata
.LC0:
	.string	"the a %x the b %x the c %x\n"
.LC1:
	.string	"%s"
.LC2:
	.string	"a =  %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	addq	$-128, %rsp
	movl	$12, -116(%rbp)
	movl	$2, -120(%rbp)
	movl	$1819043176, -128(%rbp)
	movw	$111, -124(%rbp)
	leaq	-128(%rbp), %rcx
	leaq	-120(%rbp), %rdx
	leaq	-116(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	leaq	-112(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-112(%rbp), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	-116(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.9.2 20150212 (Red Hat 4.9.2-6)"
	.section	.note.GNU-stack,"",@progbits
