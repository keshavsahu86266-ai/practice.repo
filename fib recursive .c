#include <stdio.h>

 int fib_recursive(int n){

    if (n==1||n==2){

        return n-1;
    }
    else {

       return fib_recursive(n-1) + fib_recursive(n-2);
    }
 }
  void fib_itrative(int n){

    int n1=0,n2=1;
    int n3;
    for (int i=0;i<=n;i++){
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        
    }
        
}

    int main (){

        int n;
        printf("enter the number :");
        scanf("%d",&n);


        printf("thefebonachi series recursive %d\n",fib_recursive(n));
        printf("thefebonachi series itrative: ");
        fib_itrative(n);

        return 0;
    }




