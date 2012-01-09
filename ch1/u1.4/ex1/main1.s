	.file	"main.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%c %c\n"
	.text
	.p2align 4,,15
	.globl	_Z5solvejccc
	.type	_Z5solvejccc, @function
_Z5solvejccc:
.LFB1259:
	.cfi_startproc
	movq	%r13, -16(%rsp)
	movq	%rbx, -40(%rsp)
	movl	%edi, %r13d
	.cfi_offset 3, -48
	.cfi_offset 13, -24
	movq	%rbp, -32(%rsp)
	movq	%r12, -24(%rsp)
	movq	%r14, -8(%rsp)
	subq	$40, %rsp
	.cfi_def_cfa_offset 48
	.cfi_offset 14, -16
	.cfi_offset 12, -32
	.cfi_offset 6, -40
	testl	%edi, %edi
	je	.L11
	cmpl	$1, %edi
	movsbl	%dl, %ebp
	movsbl	%cl, %r12d
	movsbl	%sil, %ebx
	je	.L8
	cmpl	$2, %edi
	je	.L12
	cmpl	$3, %edi
	je	.L13
	leal	-4(%r13), %r14d
	movl	%r12d, %ecx
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %ecx
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %ecx
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %ecx
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %ecx
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %ecx
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %ecx
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %ecx
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %ecx
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%r14d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	testl	%r14d, %r14d
	je	.L9
	subl	$5, %r13d
	movl	%ebx, %ecx
	movl	%ebp, %edx
	movl	%r12d, %esi
	movl	%r13d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %ecx
	movl	%ebx, %edx
	movl	%ebp, %esi
	movl	%r13d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %ecx
	movl	%r12d, %edx
	movl	%ebx, %esi
	movl	%r13d, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %ecx
	movl	%ebp, %r8d
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %ecx
	movl	%ebp, %edx
	movl	%r12d, %esi
	movl	%r13d, %edi
	movq	(%rsp), %rbx
	movq	8(%rsp), %rbp
	movq	16(%rsp), %r12
	movq	24(%rsp), %r13
	movq	32(%rsp), %r14
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	jmp	_Z5solvejccc
	.p2align 4,,10
	.p2align 3
.L13:
	.cfi_restore_state
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
.L8:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %r8d
	movl	%r12d, %ecx
.L7:
	movq	outFile(%rip), %rdi
	movq	(%rsp), %rbx
	movl	$.LC0, %edx
	movq	8(%rsp), %rbp
	movq	16(%rsp), %r12
	movl	$1, %esi
	movq	24(%rsp), %r13
	movq	32(%rsp), %r14
	xorl	%eax, %eax
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 8
	jmp	__fprintf_chk
	.p2align 4,,10
	.p2align 3
.L11:
	.cfi_restore_state
	movsbl	%sil, %ecx
	movsbl	%dl, %r8d
	jmp	.L7
	.p2align 4,,10
	.p2align 3
.L12:
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
.L9:
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	jmp	.L7
	.cfi_endproc
.LFE1259:
	.size	_Z5solvejccc, .-_Z5solvejccc
	.section	.rodata.str1.1
.LC1:
	.string	"r"
.LC2:
	.string	"qubits.in"
.LC3:
	.string	"w"
.LC4:
	.string	"qubits.out"
.LC5:
	.string	"main::fopen[in]"
.LC6:
	.string	"main::fopen[out])"
.LC7:
	.string	"%u"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1258:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	$.LC1, %esi
	movl	$.LC2, %edi
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	call	fopen
	movl	$.LC3, %esi
	movq	%rax, %rbx
	movl	$.LC4, %edi
	call	fopen
	testq	%rbx, %rbx
	movq	%rax, outFile(%rip)
	je	.L18
	testq	%rax, %rax
	je	.L19
	leaq	12(%rsp), %rdx
	movl	$.LC7, %esi
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	fscanf
	movq	%rbx, %rdi
	call	fclose
	movl	12(%rsp), %edi
	movl	$66, %ecx
	movl	$67, %edx
	movl	$65, %esi
	subl	$1, %edi
	call	_Z5solvejccc
	movq	outFile(%rip), %rdi
	call	fclose
	addq	$16, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L18:
	.cfi_restore_state
	movl	$.LC5, %esi
.L17:
	movl	$_ZSt4cerr, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	movl	$1, %edi
	call	exit
.L19:
	movl	$.LC6, %esi
	jmp	.L17
	.cfi_endproc
.LFE1258:
	.size	main, .-main
	.p2align 4,,15
	.type	_GLOBAL__sub_I_outFile, @function
_GLOBAL__sub_I_outFile:
.LFB1269:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit
	.cfi_endproc
.LFE1269:
	.size	_GLOBAL__sub_I_outFile, .-_GLOBAL__sub_I_outFile
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_outFile
	.globl	outFile
	.bss
	.align 8
	.type	outFile, @object
	.size	outFile, 8
outFile:
	.zero	8
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.ident	"GCC: (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1"
	.section	.note.GNU-stack,"",@progbits
