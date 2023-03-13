	.data
num1: .word 1
num2: .word 0
	.text
	la $s0, num1
	la $s1, num2
	lw $s0, 0($s0)
	lw $s1, 0($s1)
	move $t0, $s0
	move $t1, $s1
	xor $t2, $t1, $t0
	xor $t3, $t2, $t1
	xor $t4, $t3, $t2
	xor $t5, $t4, $t3
	xor $t6, $t5, $t4
	xor $t7, $t6, $t5
	move $a0, $t7
	li $v0, 1
	syscall
	li   $v0, 10
      	syscall
