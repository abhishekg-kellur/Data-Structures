#include<stdio.h>

#define N 3
int front=-1,rear=-1;
int queue[N];
void cqinsert(int);
void cqdelete();
void display();

void main() {
    int item,ch;
    while(1) {
        printf("1.INSERT \n2.Display \n3.DELETE \n4.Exit \n");
        printf("Enter ur choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter element to insert:");
            scanf("%d",&item);
            cqinsert(item);
            break;
        case 2:
            display();
            break;
        case 3:
            cqdelete();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}

int cqfull() {
    if(front==(rear+1)%N)
        return 1;
    else
        return 0;
}

int cqempty() {
    if((front==-1) && (rear==-1))
        return 1;
    else
        return 0;
}

void cqinsert(int item) {
    if(cqfull()) {
        printf("Queue overflow\n");
        return;
    }
    else {
        if(front==-1)
            front=rear=0;
        else
            rear=(rear+1)%N;
        queue[rear]=item;
    }
}

void display() {
    int i;
    if(cqempty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements");
    if(front<=rear) {
        for(i=front;i<=rear;i++)
            printf("%3d",queue[i]);
    }
    if(front>rear) {
        for(i=front;i<N;i++)
            printf("%3d",queue[i]);
        for(i=0;i<=rear;i++)
            printf("%3d",queue[i]);
    }
    printf("\n");
}

void cqdelete() {
    int item;
    if(cqempty()) {
        printf("Queue underflow\n");
        return;
    }
    else {
        item=queue[front];
        printf("Element deleted %d",item);
        if(rear==front) {
            front=rear=-1;
            printf("Queue is empty");
        }
        else
            front=(front+1)%N;
    }
    printf("\n");
}