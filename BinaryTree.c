#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *left;
    int info;
    struct node *right;
};

void insert(struct node **, int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);

void main() {
    struct node *ptr;
    int n,i,item,ch;
    ptr=NULL;
    while (1)
    {
        printf("\nBinary Search Tree\n");
        printf("1.Creation of BST \n2.Preorder traversal \n3.Inorder traversal \n4.Postorder traversal \n5.Exit\n");
        printf("Enter ur choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter no. of item to tree");
            scanf("%d",&n);
            for(i=0;i<n;i++) {
                printf("Enter element:");
                scanf("%d",&item);
                insert(&ptr,item);
            }
            break;
        case 2:
            printf("Preorder traversal:");
            preorder(ptr);
            break;
        case 3:
            printf("Inorder traversal:");
            inorder(ptr);
            break;
        case 4:
            printf("Postorder traversal:");
            postorder(ptr);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }   
}

void insert(struct node **p, int item) {
    if(*p==NULL) {
        printf("node created\n");
        *p=malloc(sizeof(struct node));
        (*p)->left = NULL;
        (*p)->right = NULL;
        (*p)->info=item;
        return;
    }
    else if(item<(*p)->info) {
        printf("Directed to left link\n");
        insert(&((*p)->left),item);
    }
    else if(item==(*p)->info) {
        printf("Duplicate key!! value rejected\n");
        return;
    }
    else {
        printf("Directed to right link\n");
        insert(&((*p)->right),item);
    }
    return;
}

void preorder(struct node *p) {
    if(p!=NULL) {
        printf("\t%d",p->info);
        preorder(p->left);
        preorder(p->right);
    }
    else
        return;
}

void inorder(struct node *p) {
    if(p!=NULL) {
        inorder(p->left);
        printf("\t%d",p->info);
        inorder(p->right);
    }
    else
        return;
}

void postorder(struct node *p) {
    if(p!=NULL) {
        postorder(p->left);
        postorder(p->right);
        printf("\t%d",p->info);
    }
    else
        return;
}