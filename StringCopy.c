#include<stdio.h>

void main() {
    char s1[20],s2[20];
    printf("Enter a string:");
    scanf("%s",s1);
    copy(s2,s1);
    printf("String is %s\n",s1);
    printf("Copyed String is %s\n",s2);
}

void copy(char *s2, char *s1) {
    while(*s1!='\0') {
        *s2=*s1;
        s1++;
        s2++;
    }
    *s2='\0';
    return;
}