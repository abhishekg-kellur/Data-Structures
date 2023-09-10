#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void main() {
    struct node *p,*q,*start,*loc;
    int item,found=0,ele;
    char choice='y';
    start=NULL;
    while (choice=='y')
    {
        p=malloc(sizeof(struct node));
        printf("Enter the element");
        scanf("%d",&item);
        p->data=item;
        p->link=NULL;
        if(start==NULL) {
            start=p;
            q=p;
        }
        else {
            q->link=p;
            q=p;
        }
        printf("Enter another element(y/n)");
        getchar();
        choice=getchar();
    }
    printf("Searching in Sorted list\n");
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    printf("Linked list elements\n");
    p=start;
    while (p!=NULL)
    {
        printf("Item %d is at address %p\n",p->data,p);
        p=p->link;
    }
    p=start;
    loc=start;
    while (p!=NULL)
    {
        if(p->data!=ele)
            p=p->link;
        else if(p->data==ele) {
            loc=p;
            printf("Element %d found at %p\n",ele,loc);
            found=1;
            break;
        }
    }
    if(found==0) {
            printf("Element does not exist\n");
            loc->link=NULL;
    }
}