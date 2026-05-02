#include <stdio.h>

void sequance( int n, int array[]){
    int temp=0;
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    printf ("the smalest num is %d \n",array[0]);
    printf ("the largest  num is %d \n",array[n-1]);


}

int main (){
    int arr[100];
    int k;
  

    printf("enter the size of the array:");
    scanf("%d",&k);
    printf ("enter the number of array:\n");
     for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
     }
      sequance(k,arr);

    
     return 0;

}
