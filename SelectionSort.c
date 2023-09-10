#include<stdio.h>

void main() {
    int i,j,n,a[10];
    printf("Selection Sort");
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++) {
        int small=a[i];
        int loc=i;
        for(j=i+1;j<n;j++)
            if(a[j]<small) {
                small=a[j];
                loc=j;
            }
        a[loc]=a[i];
        a[i]=small;
    }
    printf("Sorted array:");
    for(i=0;i<n;i++)
        printf("%3d",a[i]);
    printf("\n");
}