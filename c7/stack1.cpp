#include <stdio.h>
#include <stdlib.h>

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

int testStack() {
//TODO
}

void initStack(stack *stk) {
    stk->base = null;
    stk->top = null;
    stk->size = null;
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
    frame *pt=stk->top; //指针遍历
    int size=stk->size;//堆栈大小
    printf("***当前堆栈共%d个栈帧*****",size)

    while(size>0){


        size--;
    }

}