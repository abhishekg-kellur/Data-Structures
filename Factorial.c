#include<stdio.h>

long fact(int n) {
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}

void main() {
    int n;
    long int f;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<0) {
        printf("Negative number entered\n");
        exit(0);
    }
    f=fact(n);
    printf("Factorial of %d is %ld\n",n,f);
}