#include<stdio.h>
#include<string.h>

void main() {
    char ch,stack[50],infix[50];
    int i,j,top=0;
    stack[0]='(';
    printf("Infix to Postfix expression\n");
    printf("Enter Infix expression:");
    gets(infix);
    fflush(stdin);
    j=strlen(infix);
    printf("Postfix expression:");
    for(i=0;i<j;i++) {
        ch=infix[i];
        if(((ch>='0')&&(ch<='9')) || ((ch>='a')&&(ch<='z')) || ((ch<='A')&&(ch>='Z'))) {
            printf("%c",ch);
        }
        if(ch=='(') 
            stack[++top]=ch;
        if(ch=='^') {
            while(stack[top]=='^')
                printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if((ch=='/') || (ch=='*')) {
            while((stack[top]=='^') || (stack[top]=='*') || (stack[top]=='/'))
                printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if((ch=='+') || (ch=='-')) {
            while((stack[top]=='^') || (stack[top]=='*') || (stack[top]=='/') || (stack[top]=='+') || (stack[top]=='-')) 
                printf("%c",stack[top--]);
            stack[++top]=ch;
        }
        if(ch==')') {
            while(stack[top]!='(')
                printf("%c",stack[top--]);
            top--;
        }
    }
    while(stack[top]!='(')
        printf("%c",stack[top--]);
    printf("\n");
}