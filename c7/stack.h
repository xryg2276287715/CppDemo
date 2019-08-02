//
// Created by Administrator on 2019/8/2.
//

#ifndef CPPDEMO_STACK_H
#define CPPDEMO_STACK_H

typedef struct Frame {
    struct Frame *pre;//指向上一个栈帧
    int local1;
    int local2;
    short local3;
} frame;

typedef struct Stack {
    frame *base;//栈底
    frame *top;//栈顶
    int size;//堆栈大小
} stack;

void initStack(stack *stk);
void push(stack *stk, frame *nextFrm);
void pop(stack *stk);
void iterate(stack *stk);

int testStack();

#endif //CPPDEMO_STACK_H
