// Find Missing Number in Array
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
}

void missing_num(int n,int arr[]){
      
    // to find the missing number
    for(int i=0;i<n-1;i++){
        if (arr[i]!=(arr[i+1]-1)){
            printf("the missing number is :%d ",arr[i]+1);
            break;
        }
    }
}

int main (){
    int arr [100];
    int k;

    printf ("enter the size of the array:");
    scanf("%d",&k);

    printf ("enter the array elements :\n");
    for(int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }

    printf("the shorted array:");
    sequance(k,arr);

    printf("\n");
    missing_num(k,arr);

    return 0;
}
