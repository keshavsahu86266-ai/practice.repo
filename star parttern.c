#include <stdio.h>

void triangular_star_pattern(int n) {

    for (int i=1;i<n;i++){

        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
         for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");

    }

}
void revers_star(int n){
    for (int i=n-1;i>=1;i--){

        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
         for(int j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");

    }


}

int main (){

    int n;
    int u;
    printf ("enter the user disition: ");
    scanf("%d",&u);
    
if(u==0){
    printf ("enter the size of starseries: ");
    scanf("%d",&n);
    printf("\n");

    printf ("the pattern:\n");
    triangular_star_pattern(n);

     printf("\n");
    }
else if(u==1){
    printf ("enter the size of starseries: ");
    scanf("%d",&n);
    printf("\n");

    printf ("revers pattern:\n");
    revers_star(n);}
else if(u==2){
    printf ("enter the size of starseries: ");
    scanf("%d",&n);
    printf("\n");

    printf ("the  dimond pattern:\n");
    triangular_star_pattern(n);
    revers_star(n);

}
    return 0;

}

