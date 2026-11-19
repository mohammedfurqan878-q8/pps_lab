#include<stdio.h>
 int main()
 {
     int arr[100],N,i,key,found = 0;
    printf("Enter the size of N elements:");
     scanf("%d",&N);

     printf("Enter %d values into array :\n",N);
     for(i = 0; i < N; i++){
        scanf("%d",&arr[i]);
     }
     printf("Array is: \n");
     for(i = 0; i < N; i++)
     {

         printf("%d",arr[i]);
     }
     printf("Enter key value to find:");
     scanf("%d",&key);
     for(i = 0; i < N; i++)
     {
         if(key == arr[i])
         {
             found = 1;
             printf("value found at %d position i+1");
             break;
         }
         }
     if(found == 0)
        printf("value not found \n");

     return 0;
 }
