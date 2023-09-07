#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int rollno;
    char name[20];
    struct node *link;
};

struct node *start = NULL;
struct node *p, *q, *prev;
int regno, rollno, pos;
char str[20];

void create();
void display();
void ins_beg();
void del_item(int regno);
void search(int rollno);

int main() {
    int ch, i;
    while (1)
    {
        printf("1.Create a linked list \n2.Insertion of node in front \n3.Deletion of node based on rollno \n4.Searching node based on Rollno \n5.Display linked list \n6.EXIT\n"); // Added '\n' for formatting
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            printf("Linked list before insertion:\n");
            display();
            ins_beg();
            printf("After insertion:\n");
            display();
            break;
        case 3:
            printf("Enter item to delete:");
            scanf("%d", &regno);
            del_item(regno);
            printf("After deletion:\n");
            display();
            break;
        case 4:
            printf("Searching node based on Rollno:");
            scanf("%d", &rollno);
            search(rollno);
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

void create() {
    char choice = 'y';
    q = start;
    while (choice == 'y')
    {
        p = malloc(sizeof(struct node));
        printf("Enter register no.:");
        scanf("%d", &regno);
        printf("Enter student name:");
        scanf("%s", str);
        p->rollno = regno;
        strcpy(p->name, str);
        p->link = NULL;
        if (start == NULL) {
            start = p;
            q = p;
        }
        else {
            q->link = p;
            q = p;
        }
        printf("Do you want to create another node? (y/n): ");
        scanf(" %c", &choice);
    }
    return;
}

void display() {
    printf("Elements are:\n");
    p = start;
    while (p != NULL) {
        printf("Register number: %d\n", p->rollno); 
        printf("Name: %s\n", p->name);
        p = p->link;
    }
    return;
}

void ins_beg() {
    printf("Enter register number:");
    scanf("%d", &regno);
    printf("Enter student name:");
    scanf("%s", str);
    p = malloc(sizeof(struct node));
    p->rollno = regno;
    strcpy(p->name, str);
    p->link = start;
    start = p;
    return;
}

void del_item(int regno) {
    p = start;
    prev = NULL;
    if (start == NULL) {
        printf("Linked list is empty\n");
        return;
    }
    if (start->rollno == regno) {
        start = start->link;
        free(p);
        return;
    }
    while ((p != NULL) && (p->rollno != regno))
    {
        prev = p;
        p = p->link;
    }
    if (p == NULL)
        printf("Register number %d is not found in the linked list\n", regno);
    else {
        prev->link = p->link;
        free(p);
    }
}

void search(int rollno) {
    int i = 0;
    p = start;
    while (p != NULL)
    {
        if (rollno == p->rollno) {
            i++;
            printf("Node found at position %d\n", i); 
            printf("Register number: %d\n", p->rollno); 
            printf("Name: %s\n", p->name);
            return;
        }
        else {
            p = p->link;
            i++;
        }
    }
    printf("Node with register number %d does not exist\n", rollno);
}
