#include<stdio.h>

void main() {
    int a[20],i,n,item,pos;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the element in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the item and its position\n");
    scanf("%d%d",&item,&pos);
    for(i=n;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=item;
    printf("Array after insertion:");
    for(i=0;i<=n;i++)
        printf("%3d",a[i]);
}