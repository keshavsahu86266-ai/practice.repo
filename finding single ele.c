#include <stdio.h>

int main ()
{
            int n ;
            int arr [100];
            int temp;
            int i,j;
            // for input
           printf("enter the size of array:");
           scanf("%d",&n);


           printf ("enter the array element :");
         for(i=0;i<n;i++)
     {
           scanf("%d",&arr[i]);
     }

            //for shorting
         for(i=0;i<n-1;i++)
     {
             for( j=1;j<n-1-i;j++)
         {
                if (arr[j]>arr[j+1]) 
             {                
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
             }
        }
     }     
     
                       printf("\n");
                       printf("shorted array :");
             for (i=0;i<n;i++)
    {
              printf("%d ",arr[i]);
    }
                       printf("\n"); 
                        printf("\n");
         //for finding single elements when other elements are dobule

         for( i=0;i<n;i++)
    {
            if(arr[i]!=arr[i+1])
        {
                 printf("the single element in arr is '%d' at index: %d",arr[i],i);
                         printf("\n");                  
         }
            else if(arr[i]==arr[i+1])
         {                
                      i=i+1;             
         }        
    }

    return 0;
}