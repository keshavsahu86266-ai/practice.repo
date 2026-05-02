#include <stdio.h>

void metrix_mul (int a[10][10], int b[10][10], int c[10][10], int r1, int c1, int c2){
    for (int i=0; i<r1; i++){               // loop for the row elemet of  the first matrix
        for (int j=0; j<r1; j++){           // loop for the multiplecation
            for (int k=0; k<c2; k++){       // help in the addition after the addition 
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
     
    printf("the the multiplayed matrix is :\n ");
    for (int i=0;i<r1;i++){
         for (int j=0;j<c1;j++){

           printf("%d ",c[i][j]);

        }
         printf("\n");
    }    
}

void red_the_matrix(int r1,int c1,int a[10][10]){

         for (int i=0;i<r1;i++){
            for (int j=0;j<c1;j++){          // thise function of the code read the matrix
                scanf("%d",&a[i][j]);
        }
    }
}

int main (){

    int a[10][10];
    int b[10][10];
    int c[10][10] ={{0}};
    int r1,r2,c1,c2;
       
    printf("enter the row of the first matrix : ");
    scanf("%d",&r1);
    printf("enter the column of the first matrix : ");
    scanf("%d",&c1);
    printf("enter the row of the second matrix : ");
    scanf("%d",&r2);
    printf("enter the column of the second matrix : "); 
    scanf("%d",&c2);

    if(c1!=r2){
          printf("the multiplecation of thise tow matrics is not possible ");    
    }
    else{

         printf("\n");
         printf("Enter the element of the first matrix:\n ");
           red_the_matrix( r1, c1,a);

         printf("\n");
         printf("Enter the element of the first matrix:\n ");
           red_the_matrix( r2, c2, b);

         printf("\n"); 
           metrix_mul ( a,b,c,r1,c1,c2); 
    } 

    return 0;
}