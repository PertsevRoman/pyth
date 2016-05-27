        .globl  maxofthree
        .globl  adding
        .globl  multy

        .text

maxofthree:
        mov     %rdi, %rax
        cmp     %rsi, %rax
        cmovl   %rsi, %rax
        cmp     %rdx, %rax
        cmovl   %rdx, %rax
        ret

adding:
        mov     %rdi, %rax
        add     %rsi, %rax
        cmovl   %rdx, %rax
        ret

multy:
        mov     %rdi, %rax
        mul     %rsi
        #cmovl   %rdx, %rax
        ret