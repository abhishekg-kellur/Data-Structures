#include<stdio.h>

void towers(int,char,char,char);

void main() {
    int n;
    printf("Enter number of disks:");
    scanf("%d",&n);
    towers(n,'S','D','T');
}

void towers(int n, char source, char dest, char aux) {
    if(n==1) {
        printf("Moved Disk 1 from %c to %c\n",source,dest);
        return;
    }
    towers(n-1,source,aux,dest);
    printf("Moved Disk %d from %c to %c\n",n,source,dest);
    towers(n-1,aux,dest,source);
}