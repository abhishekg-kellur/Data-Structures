#include<stdio.h>

void main() {
    int a[10],i,n,ele,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter position to delete the element:");
    scanf("%d",&pos);
    ele=a[pos-1];
    for(i=pos-1;i<n;i++)
        a[i]=a[i+1];
    printf("Array after deletion\n");
    for(i=0;i<n-1;i++)
        printf("%3d",a[i]);
    printf("\n");
}