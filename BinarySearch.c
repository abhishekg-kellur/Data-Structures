#include<stdio.h>

binsearch(int,int[],int);

void main() {
    int a[10],i,item,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter elements of the array:\n");
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    binsearch(n,a,item);
}

binsearch(int n, int a[], int item) {
    int beg=1,end=n,mid;
    while (beg<=end)
    {
        mid = (beg+end)/2;
        if(item==a[mid]) {
            printf("Item %d is found at position %d\n",item,mid+1);
            return;
        }
        if(item>a[mid]) 
            beg = mid+1;
        else
            end = mid-1;
    }
    printf("Item %d is not found\n",item);
    return;
}