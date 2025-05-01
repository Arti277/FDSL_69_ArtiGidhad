#include <stdio.h>
 
 int main()
 {
     int i,n,a[20],j;
     printf("Enter the size of array:\n");
     scanf("%d",&n);
     printf("Enter array elements:\n");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
         printf("\nfor pass %d:",i+1);
         for(j=0;j<n-1-i;j++)
         {
             if(a[j]>a[j+1])
             {
             int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
             }
         }
         for(j=0;j<n;j++)
         {
             printf("%d ",a[j]);
         }
     }
     printf("\nAfter sorting the array:\n");
     for(i=0;i<n;i++)
     {
         printf("%d ",a[i]);
     }
 
  return 0;
 }
