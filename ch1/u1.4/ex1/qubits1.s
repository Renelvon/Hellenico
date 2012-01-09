	.file	"qubits.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%c %c\n"
	.text
	.p2align 4,,15
	.globl	_Z5solveccc
	.type	_Z5solveccc, @function
_Z5solveccc:
.LFB1054:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movl	depth(%rip), %eax
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	testl	%eax, %eax
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	je	.L32
	leal	-1(%rax), %ecx
	movsbl	%sil, %ebp
	movsbl	%dl, %r12d
	movsbl	%dil, %ebx
	testl	%ecx, %ecx
	movl	%ecx, depth(%rip)
	je	.L33
	leal	-2(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L34
	leal	-3(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L35
	subl	$4, %eax
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	call	_Z5solveccc
	addl	$1, depth(%rip)
.L8:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L36
	subl	$1, %eax
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r12d, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	call	_Z5solveccc
	movl	depth(%rip), %eax
	addl	$1, %eax
.L10:
	addl	$1, %eax
	movl	%eax, depth(%rip)
.L6:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L37
	leal	-1(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L38
	subl	$2, %eax
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r12d, %edi
	call	_Z5solveccc
	addl	$1, depth(%rip)
.L14:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%r12d, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L39
	subl	$1, %eax
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	call	_Z5solveccc
	movl	depth(%rip), %eax
	addl	$1, %eax
.L16:
	addl	$1, %eax
.L12:
	addl	$1, %eax
	movl	%eax, depth(%rip)
	jmp	.L4
	.p2align 4,,10
	.p2align 3
.L33:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
.L4:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L40
	leal	-1(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L41
	leal	-2(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L42
	subl	$3, %eax
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r12d, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	call	_Z5solveccc
	addl	$1, depth(%rip)
.L22:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L43
	subl	$1, %eax
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r12d, %edi
	call	_Z5solveccc
	movl	depth(%rip), %eax
	addl	$1, %eax
.L24:
	addl	$1, %eax
	movl	%eax, depth(%rip)
.L20:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L44
	leal	-1(%rax), %edx
	testl	%edx, %edx
	movl	%edx, depth(%rip)
	je	.L45
	subl	$2, %eax
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%ebx, %edx
	movl	%r12d, %esi
	movl	%ebp, %edi
	call	_Z5solveccc
	addl	$1, depth(%rip)
.L28:
	movq	outFile(%rip), %rdi
	xorl	%eax, %eax
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	testl	%eax, %eax
	je	.L46
	subl	$1, %eax
	movl	%ebp, %edx
	movl	%ebx, %esi
	movl	%r12d, %edi
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	movl	%r12d, %edx
	movl	%ebp, %esi
	movl	%ebx, %edi
	call	_Z5solveccc
	movl	depth(%rip), %eax
	addl	$1, %eax
.L30:
	addl	$1, %eax
.L26:
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	addl	$1, %eax
	addl	$1, %eax
	popq	%rbp
	.cfi_def_cfa_offset 16
	movl	%eax, depth(%rip)
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L32:
	.cfi_restore_state
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	movsbl	%dil, %ecx
	movq	outFile(%rip), %rdi
	movsbl	%sil, %r8d
	movl	$.LC0, %edx
	movl	$1, %esi
	jmp	__fprintf_chk
	.p2align 4,,10
	.p2align 3
.L40:
	.cfi_restore_state
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	addl	$1, %eax
	movl	%eax, depth(%rip)
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L42:
	.cfi_restore_state
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L22
	.p2align 4,,10
	.p2align 3
.L35:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L8
	.p2align 4,,10
	.p2align 3
.L41:
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L20
	.p2align 4,,10
	.p2align 3
.L34:
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L6
	.p2align 4,,10
	.p2align 3
.L44:
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L26
	.p2align 4,,10
	.p2align 3
.L37:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L12
	.p2align 4,,10
	.p2align 3
.L46:
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L30
	.p2align 4,,10
	.p2align 3
.L45:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L28
	.p2align 4,,10
	.p2align 3
.L43:
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L24
	.p2align 4,,10
	.p2align 3
.L36:
	movq	outFile(%rip), %rdi
	movl	%ebp, %r8d
	movl	%r12d, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L10
	.p2align 4,,10
	.p2align 3
.L39:
	movq	outFile(%rip), %rdi
	movl	%r12d, %r8d
	movl	%ebx, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	call	__fprintf_chk
	movl	depth(%rip), %eax
	jmp	.L16
	.p2align 4,,10
	.p2align 3
.L38:
	movq	outFile(%rip), %rdi
	movl	%ebx, %r8d
	movl	%ebp, %ecx
	movl	$.LC0, %edx
	movl	$1, %esi
	xorl	%eax, %eax
	call	__fprintf_chk
	jmp	.L14
	.cfi_endproc
.LFE1054:
	.size	_Z5solveccc, .-_Z5solveccc
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
.LFB1053:
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
	je	.L51
	testq	%rax, %rax
	je	.L52
	leaq	12(%rsp), %rdx
	movl	$.LC7, %esi
	movq	%rbx, %rdi
	xorl	%eax, %eax
	call	fscanf
	movq	%rbx, %rdi
	call	fclose
	movl	12(%rsp), %eax
	movl	$66, %edx
	movl	$67, %esi
	movl	$65, %edi
	subl	$1, %eax
	movl	%eax, depth(%rip)
	call	_Z5solveccc
	movq	outFile(%rip), %rdi
	call	fclose
	addq	$16, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
.L51:
	.cfi_restore_state
	movl	$.LC5, %esi
.L50:
	movl	$_ZSt4cerr, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	movl	$1, %edi
	call	exit
.L52:
	movl	$.LC6, %esi
	jmp	.L50
	.cfi_endproc
.LFE1053:
	.size	main, .-main
	.p2align 4,,15
	.type	_GLOBAL__sub_I_outFile, @function
_GLOBAL__sub_I_outFile:
.LFB1064:
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
.LFE1064:
	.size	_GLOBAL__sub_I_outFile, .-_GLOBAL__sub_I_outFile
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_outFile
	.globl	depth
	.bss
	.align 16
	.type	depth, @object
	.size	depth, 4
depth:
	.zero	4
	.globl	outFile
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
