#include<stdio.h>

void main() {
    int i,n,j,a[30],temp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of the list:\n");
    for(i=0;i<n;i++) 
        scanf("%d",&a[i]);
    printf("Elements in list:");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    for(i=1;i<n;i++) {
        for(j=0;j<n-i;j++) {
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted order:");
    for(i=0;i<n;i++) 
        printf("%3d",a[i]);
}