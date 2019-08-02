#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int testStack() {
    stack *st = (stack *) malloc(sizeof(struct Stack));
    printf("sizeof(struct Frame)=%lu\n", sizeof(struct Frame));
    initStack(st);
    frame *frm = nullptr;
    for (int i = 0; i < 3; i++) {
        frm = (frame *) malloc(sizeof(struct Frame));
        printf("当前栈帧起始地址 %p\n", frm);
        frm->local1 = i * 2 + 1;
        frm->local2 = i * 2 + 2;
        frm->local3 = i * 2 + 3;
        push(st, frm);
    }
    iterate(st);
    for (int i = 0; i < 3; i++) {
        pop(st);
        iterate(st);
    }
    pop(st);
    return 0;
}

void initStack(stack *stk) {
    stk->base = nullptr;
    stk->top = nullptr;
    stk->size = 0;
}

void push(stack *stk, frame *nextFrm) {
    if (stk->size == 0) {
        stk->base = nextFrm;
        stk->top = nextFrm;
    }
    nextFrm->pre = stk->top; //当前栈帧的上一个栈帧是栈顶
    stk->top = nextFrm;//栈顶更为当前栈帧
    stk->size++;//堆栈数+1
}

void pop(stack *stk) {
    if (stk->size == 0) {
        printf("%s\n", "当前堆栈为空");
        return;
    }
    frame *currentFrm = stk->top; //得到当前栈帧
    stk->top = currentFrm->pre; //栈顶指向前一个栈帧
    free(currentFrm);//因为frame是通过malloc得到
    stk->size--;
    printf("%s\n", "已成功弹出一个栈顶");
}

void iterate(stack *stk) { //降序遍历，从top开始
    if (stk->size == 0) {
        printf("%s\n", "堆栈已空，无需遍历");
        return;
    }
    frame *pt = stk->top; //指针遍历
    int size = stk->size;//堆栈大小
    printf("***当前堆栈共%d个栈帧*****", size);

    while (size > 0) {
        printf("当前是第%d个栈帧\n", size);
        printf("local1=%d,local2=%d,local3=%d\n", pt->local1, pt->local2, pt->local3);
        pt = pt->pre;
        size--;
    }

}