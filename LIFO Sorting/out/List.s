	.file	"main.c"
 # GNU C11 (MinGW.org GCC-6.3.0-1) version 6.3.0 (mingw32)
 #	compiled by GNU C version 6.3.0, GMP version 6.1.2, MPFR version 3.1.5, MPC version 1.0.3, isl version 0.15
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -I headers
 # -iprefix c:\mingw\bin\../lib/gcc/mingw32/6.3.0/ src/main.c
 # -mtune=generic -march=i586 -auxbase-strip out/List.s -Wall -Wextra
 # -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations
 # -fasynchronous-unwind-tables -fauto-inc-dec -fchkp-check-incomplete-type
 # -fchkp-check-read -fchkp-check-write -fchkp-instrument-calls
 # -fchkp-narrow-bounds -fchkp-optimize -fchkp-store-bounds
 # -fchkp-use-static-bounds -fchkp-use-static-const-bounds
 # -fchkp-use-wrappers -fcommon -fdelete-null-pointer-checks
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -ffunction-cse -fgcse-lm -fgnu-runtime -fgnu-unique -fident
 # -finline-atomics -fira-hoist-pressure -fira-share-save-slots
 # -fira-share-spill-slots -fivopts -fkeep-inline-dllexport
 # -fkeep-static-consts -fleading-underscore -flifetime-dse
 # -flto-odr-type-merging -fmath-errno -fmerge-debug-strings -fpeephole
 # -fplt -fprefetch-loop-arrays -freg-struct-return
 # -fsched-critical-path-heuristic -fsched-dep-count-heuristic
 # -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
 # -fsched-rank-heuristic -fsched-spec -fsched-spec-insn-heuristic
 # -fsched-stalled-insns-dep -fschedule-fusion -fsemantic-interposition
 # -fset-stack-executable -fshow-column -fsigned-zeros
 # -fsplit-ivs-in-unroller -fssa-backprop -fstdarg-opt
 # -fstrict-volatile-bitfields -fsync-libcalls -ftrapping-math
 # -ftree-cselim -ftree-forwprop -ftree-loop-if-convert -ftree-loop-im
 # -ftree-loop-ivcanon -ftree-loop-optimize -ftree-parallelize-loops=
 # -ftree-phiprop -ftree-reassoc -ftree-scev-cprop -funit-at-a-time
 # -funwind-tables -fverbose-asm -fzero-initialized-in-bss -m32 -m80387
 # -m96bit-long-double -maccumulate-outgoing-args -malign-double
 # -malign-stringops -mavx256-split-unaligned-load
 # -mavx256-split-unaligned-store -mfancy-math-387 -mfp-ret-in-387
 # -mieee-fp -mlong-double-80 -mms-bitfields -mno-red-zone -mno-sse4
 # -mpush-args -msahf -mstack-arg-probe -mstv -mvzeroupper

	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Stack: \0"
LC1:
	.ascii "%s\0"
LC2:
	.ascii "\12Stack after 2 pops: \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	andl	$-16, %esp	 #,
	subl	$32, %esp	 #,
	call	___main	 #
	movl	$0, 28(%esp)	 #, stack
	movl	$10, 4(%esp)	 #,
	leal	28(%esp), %eax	 #, tmp89
	movl	%eax, (%esp)	 # tmp89,
	call	_push	 #
	movl	$20, 4(%esp)	 #,
	leal	28(%esp), %eax	 #, tmp90
	movl	%eax, (%esp)	 # tmp90,
	call	_push	 #
	movl	$30, 4(%esp)	 #,
	leal	28(%esp), %eax	 #, tmp91
	movl	%eax, (%esp)	 # tmp91,
	call	_push	 #
	movl	$40, 4(%esp)	 #,
	leal	28(%esp), %eax	 #, tmp92
	movl	%eax, (%esp)	 # tmp92,
	call	_push	 #
	movl	$50, 4(%esp)	 #,
	leal	28(%esp), %eax	 #, tmp93
	movl	%eax, (%esp)	 # tmp93,
	call	_push	 #
	movl	$LC0, 4(%esp)	 #,
	movl	$LC1, (%esp)	 #,
	call	_printf	 #
	leal	28(%esp), %eax	 #, tmp94
	movl	%eax, (%esp)	 # tmp94,
	call	_printStack	 #
	leal	28(%esp), %eax	 #, tmp95
	movl	%eax, (%esp)	 # tmp95,
	call	_pop	 #
	leal	28(%esp), %eax	 #, tmp96
	movl	%eax, (%esp)	 # tmp96,
	call	_pop	 #
	movl	$LC2, 4(%esp)	 #,
	movl	$LC1, (%esp)	 #,
	call	_printf	 #
	leal	28(%esp), %eax	 #, tmp97
	movl	%eax, (%esp)	 # tmp97,
	call	_printStack	 #
	movl	$0, %eax	 #, _14
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.globl	_createNode
	.def	_createNode;	.scl	2;	.type	32;	.endef
_createNode:
LFB15:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
	movl	$8, (%esp)	 #,
	call	_malloc	 #
	movl	%eax, -12(%ebp)	 # tmp89, newNode
	cmpl	$0, -12(%ebp)	 #, newNode
	jne	L4	 #,
	movl	$0, %eax	 #, _1
	jmp	L5	 #
L4:
	movl	-12(%ebp), %eax	 # newNode, tmp90
	movl	8(%ebp), %edx	 # data, tmp91
	movl	%edx, (%eax)	 # tmp91, newNode_5->data
	movl	-12(%ebp), %eax	 # newNode, tmp92
	movl	$0, 4(%eax)	 #, newNode_5->next
	movl	-12(%ebp), %eax	 # newNode, _1
L5:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE15:
	.globl	_insertBeforeHead
	.def	_insertBeforeHead;	.scl	2;	.type	32;	.endef
_insertBeforeHead:
LFB16:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
	movl	12(%ebp), %eax	 # data, tmp91
	movl	%eax, (%esp)	 # tmp91,
	call	_createNode	 #
	movl	%eax, -12(%ebp)	 # tmp92, newNode
	cmpl	$0, -12(%ebp)	 #, newNode
	jne	L7	 #,
	movl	$-1, %eax	 #, _1
	jmp	L8	 #
L7:
	movl	8(%ebp), %eax	 # head, tmp93
	movl	(%eax), %eax	 # *head_8(D), _9
	testl	%eax, %eax	 # _9
	jne	L9	 #,
	movl	8(%ebp), %eax	 # head, tmp94
	movl	-12(%ebp), %edx	 # newNode, tmp95
	movl	%edx, (%eax)	 # tmp95, *head_8(D)
	movl	$0, %eax	 #, _1
	jmp	L8	 #
L9:
	movl	8(%ebp), %eax	 # head, tmp96
	movl	(%eax), %edx	 # *head_8(D), _12
	movl	-12(%ebp), %eax	 # newNode, tmp97
	movl	%edx, 4(%eax)	 # _12, newNode_6->next
	movl	8(%ebp), %eax	 # head, tmp98
	movl	-12(%ebp), %edx	 # newNode, tmp99
	movl	%edx, (%eax)	 # tmp99, *head_8(D)
	movl	$0, %eax	 #, _1
L8:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE16:
	.globl	_deleteHead
	.def	_deleteHead;	.scl	2;	.type	32;	.endef
_deleteHead:
LFB17:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
	movl	8(%ebp), %eax	 # head, tmp91
	movl	(%eax), %eax	 # *head_2(D), tmp92
	movl	%eax, -12(%ebp)	 # tmp92, tmp
	movl	8(%ebp), %eax	 # head, tmp93
	movl	(%eax), %eax	 # *head_2(D), _4
	movl	4(%eax), %edx	 # _4->next, _5
	movl	8(%ebp), %eax	 # head, tmp94
	movl	%edx, (%eax)	 # _5, *head_2(D)
	movl	-12(%ebp), %eax	 # tmp, tmp95
	movl	%eax, (%esp)	 # tmp95,
	call	_free	 #
	movl	$0, %eax	 #, _8
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE17:
	.globl	_isEmpty
	.def	_isEmpty;	.scl	2;	.type	32;	.endef
_isEmpty:
LFB18:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	movl	8(%ebp), %eax	 # stack, tmp91
	movl	(%eax), %eax	 # *stack_2(D), _3
	testl	%eax, %eax	 # _3
	sete	%al	 #, _4
	movzbl	%al, %eax	 # _4, _5
	popl	%ebp	 #
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE18:
	.section .rdata,"dr"
LC3:
	.ascii "Stack Overflow!\0"
	.text
	.globl	_push
	.def	_push;	.scl	2;	.type	32;	.endef
_push:
LFB19:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
	movl	12(%ebp), %eax	 # data, tmp88
	movl	%eax, 4(%esp)	 # tmp88,
	movl	8(%ebp), %eax	 # stack, tmp89
	movl	%eax, (%esp)	 # tmp89,
	call	_insertBeforeHead	 #
	testl	%eax, %eax	 # _6
	je	L16	 #,
	movl	$LC3, (%esp)	 #,
	call	_puts	 #
L16:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE19:
	.section .rdata,"dr"
LC4:
	.ascii "Stack Underflow!\0"
	.text
	.globl	_pop
	.def	_pop;	.scl	2;	.type	32;	.endef
_pop:
LFB20:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$24, %esp	 #,
	movl	8(%ebp), %eax	 # stack, tmp90
	movl	%eax, (%esp)	 # tmp90,
	call	_isEmpty	 #
	testl	%eax, %eax	 # _6
	je	L18	 #,
	movl	$LC4, (%esp)	 #,
	call	_puts	 #
	movl	$-1, %eax	 #, _1
	jmp	L19	 #
L18:
	movl	8(%ebp), %eax	 # stack, tmp91
	movl	%eax, (%esp)	 # tmp91,
	call	_deleteHead	 #
	movl	$1, %eax	 #, _1
L19:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE20:
	.globl	_peek
	.def	_peek;	.scl	2;	.type	32;	.endef
_peek:
LFB21:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$4, %esp	 #,
	movl	8(%ebp), %eax	 # stack, tmp91
	movl	%eax, (%esp)	 # tmp91,
	call	_isEmpty	 #
	testl	%eax, %eax	 # _5
	jne	L21	 #,
	movl	8(%ebp), %eax	 # stack, tmp92
	movl	(%eax), %eax	 # *stack_3(D), _6
	movl	(%eax), %eax	 # _6->data, _1
	jmp	L22	 #
L21:
	movl	$-1, %eax	 #, _1
L22:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE21:
	.section .rdata,"dr"
LC5:
	.ascii "%d-> \0"
LC6:
	.ascii "\0"
	.text
	.globl	_printStack
	.def	_printStack;	.scl	2;	.type	32;	.endef
_printStack:
LFB22:
	.cfi_startproc
	pushl	%ebp	 #
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp	 #,
	.cfi_def_cfa_register 5
	subl	$40, %esp	 #,
	movl	8(%ebp), %eax	 # stack, tmp88
	movl	(%eax), %eax	 # *stack_4(D), tmp89
	movl	%eax, -12(%ebp)	 # tmp89, tmp
	jmp	L24	 #
L25:
	movl	-12(%ebp), %eax	 # tmp, tmp90
	movl	(%eax), %eax	 # tmp_1->data, _6
	movl	%eax, 4(%esp)	 # _6,
	movl	$LC5, (%esp)	 #,
	call	_printf	 #
	movl	-12(%ebp), %eax	 # tmp, tmp91
	movl	4(%eax), %eax	 # tmp_1->next, tmp92
	movl	%eax, -12(%ebp)	 # tmp92, tmp
L24:
	cmpl	$0, -12(%ebp)	 #, tmp
	jne	L25	 #,
	movl	$LC6, (%esp)	 #,
	call	_puts	 #
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE22:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_malloc;	.scl	2;	.type	32;	.endef
	.def	_free;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
