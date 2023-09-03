#define MAXSTK 4
#include<stdio.h>

int top=-1, stack[MAXSTK];

void main() {
    void push(int);
    void pop();
    void display();
    int item, ch;
    while (1)
    {
        printf("\nStack operation\n");
        printf("1.PUSH \n2.POP \n3.Display \n4.Exit\n");
        printf("Enter ur choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to insert:");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            printf("Elements in stack:");
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    }   
}
void push(int item) {
    if(isfull()) {
        printf("Stack overflow");
        return;
    }
    else {
        top++;
        stack[top]=item;
        if(top==MAXSTK-1)
            printf("Stack is full");
    }
    return;
}

void display() {
    int p;
    p=top;
    if(p==-1) {
        printf("Stack is empty");
        return;
    }
    else {
        while (p!= -1)
        {
            printf("\n%d",stack[p]);
            p--;
        }
        return;
    }
}

void pop() {
    int item;
    if(isempty()) {
        printf("Stack is empty");
        return;
    }
    else {
        item=stack[top];
        top--;
        printf("Top elements popped:%d",item);
        if(top == -1)
            printf("Stack is empty");
    }
    return;
}

int isempty() {
    if(top == -1)
        return 1;
    else   
        return 0;
}

int isfull() {
    if(top == MAXSTK-1)
        return 1;
    else
        return 0;
}