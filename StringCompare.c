#include<stdio.h>

int compare(char *s1,char *s2) {
    while (*s1 == *s2)
    {
        if(*s1=='\0')
            return 0;
        s1++;
        s2++;
    }
    return *s1-*s2;
}

void main() {
    char s1[20],s2[20];
    int res;
    printf("Enter a string:");
    scanf("%s",s1);
    printf("Enter another string:");
    scanf("%s",s2);
    res = compare(s1,s2);
    if(res==0)
        printf("Strings are identical\n");
    else   
        printf("Strings are not identical\n");
    return;
}