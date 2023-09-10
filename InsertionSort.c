#include<stdio.h>

void main() {
    int i,n,k,key,a[10];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(k=1;k<n;k++) {
        key=a[k];
        for(i=k-1;i>=0 && key<a[i];i--)
            a[i+1]=a[i];
        a[i+1]=key;
    }
    printf("Sorted list:");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
}