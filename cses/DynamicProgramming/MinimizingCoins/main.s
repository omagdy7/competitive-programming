	.file	"main.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
#NO_APP
	.section	.text._ZNSt6vectorIiSaIiEED2Ev,"axG",@progbits,_ZNSt6vectorIiSaIiEED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIiSaIiEED2Ev
	.type	_ZNSt6vectorIiSaIiEED2Ev, @function
_ZNSt6vectorIiSaIiEED2Ev:
.LFB10637:
	.cfi_startproc
	movq	(%rdi), %rax
	testq	%rax, %rax
	je	.L1
	movq	16(%rdi), %rsi
	movq	%rax, %rdi
	subq	%rax, %rsi
	jmp	_ZdlPvm@PLT
	.p2align 4,,10
	.p2align 3
.L1:
	ret
	.cfi_endproc
.LFE10637:
	.size	_ZNSt6vectorIiSaIiEED2Ev, .-_ZNSt6vectorIiSaIiEED2Ev
	.weak	_ZNSt6vectorIiSaIiEED1Ev
	.set	_ZNSt6vectorIiSaIiEED1Ev,_ZNSt6vectorIiSaIiEED2Ev
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC0:
	.string	"cannot create std::vector larger than max_size()"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB1:
	.text
.LHOTB1:
	.p2align 4
	.globl	_Z3reci
	.type	_Z3reci, @function
_Z3reci:
.LFB9894:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9894
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	movl	%edi, %ebx
	subq	$8, %rsp
	.cfi_def_cfa_offset 48
	movzbl	_ZGVZ3reciE2sz(%rip), %eax
	testb	%al, %al
	je	.L47
.L6:
	movzbl	_ZGVZ3reciE5cache(%rip), %eax
	testb	%al, %al
	je	.L48
.L9:
	movq	_ZZ3reciE5cache(%rip), %rax
	testl	%ebx, %ebx
	je	.L49
	movslq	%ebx, %r12
	movl	_ZZ3reciE2sz(%rip), %r13d
	salq	$2, %r12
	addq	%r12, %rax
	movl	(%rax), %ecx
	cmpl	%r13d, %ecx
	je	.L50
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	movl	%ecx, %eax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L50:
	.cfi_restore_state
	movq	8+c(%rip), %rsi
	movq	c(%rip), %rdx
	cmpq	%rdx, %rsi
	je	.L19
	xorl	%ebp, %ebp
.L23:
	movl	%ebx, %edi
	subl	(%rdx,%rbp,4), %edi
	js	.L20
.LEHB0:
	call	_Z3reci
.LEHE0:
	movq	8+c(%rip), %rsi
	movq	c(%rip), %rdx
	addl	$1, %eax
	cmpl	%eax, %r13d
	cmovg	%eax, %r13d
.L20:
	movq	%rsi, %rax
	addq	$1, %rbp
	subq	%rdx, %rax
	sarq	$2, %rax
	cmpq	%rax, %rbp
	jb	.L23
	movq	_ZZ3reciE5cache(%rip), %rax
	movl	%r13d, %ecx
	addq	%r12, %rax
.L19:
	movl	%ecx, (%rax)
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	movl	%ecx, %eax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L49:
	.cfi_restore_state
	movl	$0, (%rax)
	xorl	%ecx, %ecx
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	popq	%rbx
	.cfi_def_cfa_offset 32
	movl	%ecx, %eax
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L48:
	.cfi_restore_state
	leaq	_ZGVZ3reciE5cache(%rip), %r12
	movq	%r12, %rdi
	call	__cxa_guard_acquire@PLT
	testl	%eax, %eax
	je	.L9
	leal	1(%rbx), %ebp
	movslq	%ebp, %rbp
	movq	%rbp, %rax
	shrq	$61, %rax
	jne	.L43
	movq	$0, 16+_ZZ3reciE5cache(%rip)
	pxor	%xmm0, %xmm0
	movaps	%xmm0, _ZZ3reciE5cache(%rip)
	testq	%rbp, %rbp
	je	.L51
	salq	$2, %rbp
	movq	%rbp, %rdi
.LEHB1:
	call	_Znwm@PLT
.LEHE1:
	leaq	(%rax,%rbp), %rdi
	movq	%rbp, %r9
	leaq	-4(%rbp), %rdx
	movq	%rax, %rcx
	movq	%rax, _ZZ3reciE5cache(%rip)
	movd	_ZZ3reciE2sz(%rip), %xmm1
	shrq	$2, %r9
	movq	%rdi, 16+_ZZ3reciE5cache(%rip)
	cmpq	$8, %rdx
	jbe	.L14
	movq	%rbp, %r8
	movq	%rax, %rdx
	pshufd	$0, %xmm1, %xmm0
	andq	$-16, %r8
	leaq	(%r8,%rax), %rsi
	andl	$16, %r8d
	je	.L15
	leaq	16(%rax), %rdx
	movups	%xmm0, (%rax)
	cmpq	%rsi, %rdx
	je	.L45
	.p2align 4,,10
	.p2align 3
.L15:
	movups	%xmm0, (%rdx)
	addq	$32, %rdx
	movups	%xmm0, -16(%rdx)
	cmpq	%rsi, %rdx
	jne	.L15
.L45:
	movq	%r9, %rdx
	andq	$-4, %rdx
	andl	$3, %r9d
	leaq	(%rax,%rdx,4), %rax
	je	.L16
.L14:
	leaq	4(%rax), %rdx
	movd	%xmm1, (%rax)
	cmpq	%rdx, %rdi
	je	.L16
	leaq	8(%rax), %rdx
	movd	%xmm1, 4(%rax)
	cmpq	%rdx, %rdi
	je	.L16
	movd	%xmm1, 8(%rax)
.L16:
	leaq	0(%rbp,%rcx), %rax
.L13:
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZZ3reciE5cache(%rip), %rsi
	movq	%rax, 8+_ZZ3reciE5cache(%rip)
	leaq	_ZNSt6vectorIiSaIiEED1Ev(%rip), %rdi
	call	__cxa_atexit@PLT
	movq	%r12, %rdi
	call	__cxa_guard_release@PLT
	jmp	.L9
	.p2align 4,,10
	.p2align 3
.L47:
	leaq	_ZGVZ3reciE2sz(%rip), %rbp
	movq	%rbp, %rdi
	call	__cxa_guard_acquire@PLT
	testl	%eax, %eax
	je	.L6
	leal	1(%rbx), %eax
	movq	%rbp, %rdi
	movl	%eax, _ZZ3reciE2sz(%rip)
	call	__cxa_guard_release@PLT
	jmp	.L6
	.p2align 4,,10
	.p2align 3
.L51:
	movq	$0, _ZZ3reciE5cache(%rip)
	xorl	%eax, %eax
	movq	$0, 16+_ZZ3reciE5cache(%rip)
	jmp	.L13
.L41:
	jmp	.L42
	.section	.gcc_except_table,"a",@progbits
.LLSDA9894:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9894-.LLSDACSB9894
.LLSDACSB9894:
	.uleb128 .LEHB0-.LFB9894
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB9894
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L41-.LFB9894
	.uleb128 0
.LLSDACSE9894:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC9894
	.type	_Z3reci.cold, @function
_Z3reci.cold:
.LFSB9894:
.L43:
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -40
	.cfi_offset 6, -32
	.cfi_offset 12, -24
	.cfi_offset 13, -16
	leaq	.LC0(%rip), %rdi
.LEHB2:
	call	_ZSt20__throw_length_errorPKc@PLT
.LEHE2:
.L26:
.L42:
	movq	%rax, %rbx
	movq	%r12, %rdi
	call	__cxa_guard_abort@PLT
	movq	%rbx, %rdi
.LEHB3:
	call	_Unwind_Resume@PLT
.LEHE3:
	.cfi_endproc
.LFE9894:
	.section	.gcc_except_table
.LLSDAC9894:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC9894-.LLSDACSBC9894
.LLSDACSBC9894:
	.uleb128 .LEHB2-.LCOLDB1
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L26-.LCOLDB1
	.uleb128 0
	.uleb128 .LEHB3-.LCOLDB1
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSEC9894:
	.section	.text.unlikely
	.text
	.size	_Z3reci, .-_Z3reci
	.section	.text.unlikely
	.size	_Z3reci.cold, .-_Z3reci.cold
.LCOLDE1:
	.text
.LHOTE1:
	.section	.rodata._ZNSt6vectorIiSaIiEE17_M_default_appendEm.str1.1,"aMS",@progbits,1
.LC2:
	.string	"vector::_M_default_append"
	.section	.text._ZNSt6vectorIiSaIiEE17_M_default_appendEm,"axG",@progbits,_ZNSt6vectorIiSaIiEE17_M_default_appendEm,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIiSaIiEE17_M_default_appendEm
	.type	_ZNSt6vectorIiSaIiEE17_M_default_appendEm, @function
_ZNSt6vectorIiSaIiEE17_M_default_appendEm:
.LFB11077:
	.cfi_startproc
	testq	%rsi, %rsi
	je	.L74
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movq	%rsi, %rbx
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	movq	8(%rdi), %rdx
	movq	16(%rdi), %rax
	subq	%rdx, %rax
	sarq	$2, %rax
	cmpq	%rsi, %rax
	jnb	.L77
	movq	(%rdi), %rax
	subq	%rax, %rdx
	movq	%rax, 8(%rsp)
	movabsq	$2305843009213693951, %rax
	movq	%rdx, %r14
	movq	%rdx, %r15
	sarq	$2, %r14
	subq	%r14, %rax
	cmpq	%rsi, %rax
	jb	.L78
	movabsq	$2305843009213693951, %rax
	cmpq	%r14, %rsi
	movq	%r14, %r13
	cmovnb	%rsi, %r13
	addq	%r14, %r13
	cmpq	%rax, %r13
	cmova	%rax, %r13
	salq	$2, %r13
	movq	%r13, %rdi
	call	_Znwm@PLT
	movq	%rbx, %rdx
	movq	%rax, %rbp
	leaq	(%rax,%r15), %rax
	movl	$0, (%rax)
	subq	$1, %rdx
	je	.L57
	leaq	4(%rax), %rdi
	leaq	0(,%rdx,4), %rdx
	xorl	%esi, %esi
	call	memset@PLT
.L57:
	testq	%r15, %r15
	jne	.L79
	cmpq	$0, 8(%rsp)
	jne	.L80
.L60:
	addq	%r14, %rbx
	movq	%rbp, (%r12)
	leaq	0(%rbp,%rbx,4), %rax
	addq	%r13, %rbp
	movq	%rax, 8(%r12)
	movq	%rbp, 16(%r12)
	addq	$24, %rsp
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L74:
	.cfi_restore 3
	.cfi_restore 6
	.cfi_restore 12
	.cfi_restore 13
	.cfi_restore 14
	.cfi_restore 15
	ret
	.p2align 4,,10
	.p2align 3
.L77:
	.cfi_def_cfa_offset 80
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movl	$0, (%rdx)
	leaq	4(%rdx), %rdi
	subq	$1, %rbx
	je	.L55
	leaq	(%rdi,%rbx,4), %rbx
	xorl	%esi, %esi
	movq	%rbx, %rax
	subq	%rdx, %rax
	leaq	-4(%rax), %rdx
	call	memset@PLT
	movq	%rbx, %rdi
.L55:
	movq	%rdi, 8(%r12)
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L79:
	.cfi_restore_state
	movq	%r15, %rdx
	movq	8(%rsp), %r15
	movq	%rbp, %rdi
	movq	%r15, %rsi
	call	memcpy@PLT
	movq	16(%r12), %rax
	subq	%r15, %rax
	movq	%rax, %rsi
.L59:
	movq	8(%rsp), %rdi
	call	_ZdlPvm@PLT
	jmp	.L60
	.p2align 4,,10
	.p2align 3
.L80:
	movq	16(%r12), %rsi
	movq	8(%rsp), %rax
	subq	%rax, %rsi
	jmp	.L59
.L78:
	leaq	.LC2(%rip), %rdi
	call	_ZSt20__throw_length_errorPKc@PLT
	.cfi_endproc
.LFE11077:
	.size	_ZNSt6vectorIiSaIiEE17_M_default_appendEm, .-_ZNSt6vectorIiSaIiEE17_M_default_appendEm
	.text
	.p2align 4
	.globl	_Z5solvev
	.type	_Z5solvev, @function
_Z5solvev:
.LFB9895:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	leaq	_ZSt3cin(%rip), %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	movq	%r12, %rdi
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$32, %rsp
	.cfi_def_cfa_offset 64
	movq	%fs:40, %rsi
	movq	%rsi, 24(%rsp)
	leaq	16(%rsp), %rsi
	call	_ZNSirsERi@PLT
	leaq	20(%rsp), %rsi
	movq	%rax, %rdi
	call	_ZNSirsERi@PLT
	movq	8+c(%rip), %rbp
	movslq	16(%rsp), %rsi
	movq	c(%rip), %rbx
	movq	%rbp, %rax
	subq	%rbx, %rax
	sarq	$2, %rax
	cmpq	%rsi, %rax
	jb	.L99
	cmpq	%rax, %rsi
	jnb	.L98
	leaq	(%rbx,%rsi,4), %rax
	cmpq	%rax, %rbp
	je	.L85
	movq	%rax, 8+c(%rip)
.L85:
	movq	%rax, %rbp
	cmpq	%rbx, %rbp
	je	.L100
	.p2align 4,,10
	.p2align 3
.L88:
	movq	%rbx, %rsi
	movq	%r12, %rdi
	addq	$4, %rbx
	call	_ZNSirsERi@PLT
.L98:
	cmpq	%rbx, %rbp
	jne	.L88
.L100:
	movl	20(%rsp), %edi
	call	_Z3reci
	leaq	_ZSt4cout(%rip), %rdi
	movl	%eax, %esi
	movl	20(%rsp), %eax
	addl	$1, %eax
	cmpl	%esi, %eax
	movl	$-1, %eax
	cmove	%eax, %esi
	call	_ZNSolsEi@PLT
	movb	$10, 15(%rsp)
	movq	%rax, %rdi
	movq	(%rax), %rax
	movq	-24(%rax), %rax
	cmpq	$0, 16(%rdi,%rax)
	je	.L90
	leaq	15(%rsp), %rsi
	movl	$1, %edx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.L81:
	movq	24(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L101
	addq	$32, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L90:
	.cfi_restore_state
	movl	$10, %esi
	call	_ZNSo3putEc@PLT
	jmp	.L81
	.p2align 4,,10
	.p2align 3
.L99:
	subq	%rax, %rsi
	leaq	c(%rip), %rdi
	call	_ZNSt6vectorIiSaIiEE17_M_default_appendEm
	movq	8+c(%rip), %rbp
	movq	c(%rip), %rbx
	jmp	.L98
.L101:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE9895:
	.size	_Z5solvev, .-_Z5solvev
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB9896:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	xorl	%edi, %edi
	call	_ZNSt8ios_base15sync_with_stdioEb@PLT
	movq	$0, 232+_ZSt3cin(%rip)
	call	_Z5solvev
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE9896:
	.size	main, .-main
	.p2align 4
	.type	_GLOBAL__sub_I_c, @function
_GLOBAL__sub_I_c:
.LFB11733:
	.cfi_startproc
	pxor	%xmm0, %xmm0
	leaq	__dso_handle(%rip), %rdx
	leaq	c(%rip), %rsi
	movq	$0, 16+c(%rip)
	leaq	_ZNSt6vectorIiSaIiEED1Ev(%rip), %rdi
	movaps	%xmm0, c(%rip)
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE11733:
	.size	_GLOBAL__sub_I_c, .-_GLOBAL__sub_I_c
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_c
	.local	_ZGVZ3reciE5cache
	.comm	_ZGVZ3reciE5cache,8,8
	.local	_ZZ3reciE5cache
	.comm	_ZZ3reciE5cache,24,16
	.local	_ZGVZ3reciE2sz
	.comm	_ZGVZ3reciE2sz,8,8
	.local	_ZZ3reciE2sz
	.comm	_ZZ3reciE2sz,4,4
	.globl	c
	.bss
	.align 16
	.type	c, @object
	.size	c, 24
c:
	.zero	24
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.globl	__gxx_personality_v0
	.ident	"GCC: (GNU) 14.1.1 20240522"
	.section	.note.GNU-stack,"",@progbits
