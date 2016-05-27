        .globl  maxofthree
        .globl  adding
        .globl  multy
        .globl  mulvec

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
        cmovl   %rdx, %rax
        ret

mulvec:
        movups (%edi), %xmm0
        movups (%esi), %xmm1
        mulps %xmm1, %xmm0
        movups %xmm0, (%edi)