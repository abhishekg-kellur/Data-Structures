#include<stdio.h>

int gcd(int,int);

void main() {
    int m,n;
    printf("Enter 2 numbers m and n:");
    scanf("%d %d",&m,&n);
    printf("GCD of %d and %d is %d\n",m,n,gcd(m,n));
}

int gcd(int x,int y) {
    if(y==0)
        return(x);
    else 
        if(y>x)
            return gcd(y,x);
        else
            return gcd(y,x%y);
}