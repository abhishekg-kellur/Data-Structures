#include<stdio.h>
#include<stdlib.h>

int len(char *s);
void concat(char *s1, char *s2);
void reverse(char *s);

int main() {
    char s1[20],s2[20];
    int ch,length;
    while (1)
    {
        printf("\n 1.String length \n 2.String concatenation \n 3.String reverse \n 4.Exit");
        printf("\n Enter ur choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter a string: ");
            scanf("%s",s1);
            length = len(s1);
            printf("Length of %s is %d",s1,length);
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s",s1);
            printf("Enter second string: ");
            scanf("%s",s2);
            concat(s1,s2);
            printf("Concatenated string is %s", s1);
            break;
        case 3:
            printf("Enter a string: ");
            scanf("%s",s1);
            reverse(s1);
            printf("Reversed string is %s",s1);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }
    }
    return 0;   
}
int len(char *s) {
    int length = 0;
    while (*s != '\0')
    {
        s++;
        length++;
    }
    return(length);
}

void concat(char *s1, char *s2) {
    while (*s1 != '\0')
    {
        s1++;
    }
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
}

void reverse(char *s1) {
    int length,i;
    char *begin, *end, temp;
    length = len(s1);
    begin = s1;
    end = s1;
    for(i=0;i<length-1;i++) 
        end++;
    for(i=0;i<length/2;i++) {
        temp = *end;
        *end = *begin;
        *begin = temp;
        begin++;
        end--;
    }
}