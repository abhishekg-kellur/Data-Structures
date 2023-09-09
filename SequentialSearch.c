#include<stdio.h>

void main() {
    int a[10],i,n,item,loc=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    for (i = 0; i < n; i++)
    {
        if(a[i]==item) {
            loc = i+1;
            break;
        }
    }
    if(loc==0)
        printf("Element not found\n");
    else
        printf("Element found at %d location\n",loc);
}