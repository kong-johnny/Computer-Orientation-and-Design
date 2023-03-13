.data
n: .word  3  # 声明一个word类型变量，给它分配空间并赋值3
.text
main: 
        la  $t5, n  # 加载n的地址
        lw   $t5, 0($t5)  # 加载n
        add $a0,$zero,$t5  # 让$a0=n
        jal fact  # 跳转到求阶乘函数fact，link到下一条指令（addi $ra, $pc, 8）
        add $a0,$zero,$v0  # 函数运行结果移到$a0中，准备调用系统输出
        li $v0,1  # 输出整数功能调用码
        syscall  # 系统调用，在终端输出
        li $v0,10  # 退出程序调用码
        syscall  # 系统调用，退出程序
fact:
	addi $sp, $sp, -8  # 栈顶移动两个字，压栈
	sw $ra,4($sp)  # 将寄存器$ra内容写入栈
	sw $a0,0($sp)  # 将寄存器$a0内容写入栈
	slti $t0,$a0,1  # 如果$a0为0则$t0设置为1，后续不跳转到L1，否则$t0设置为0，后续进行跳转
	beq $t0, $zero,L1  # 判断$t0是否为0
	addi $v0, $zero, 1  # $v0 = 0 + 1，便于之后进行阶乘操作
	addi $sp,$sp,8  # 栈顶移动2个字，出栈
	jr $ra  # 跳转到$ra储存的地址
L1:     addi $a0,$a0,-1  # $a0减一
        jal fact  # jump到fact，link到下一条指令（addi $ra, $pc, 8）
        lw $a0,0($sp)  # 从栈中取出阶乘乘数到$a0
        lw $ra,4($sp)  # 从栈中取出上一次link到$ra的地址，可能为上一条指令地址或第9行指令地址
        addi $sp,$sp,8  # 移动栈顶2个字，出栈
        mul $v0,$a0,$v0  # 乘法操作：$v0 = $v0 * $a0
        jr $ra # 跳转到$ra中储存的地址
