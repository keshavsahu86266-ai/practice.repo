#include <stdio.h>

int main (){

    int c;
    int ki,ko;

    printf("\n");

    printf("1. km to m\n");
    printf("2. m to cm\n");
    printf("3. kg to g\n");
    printf("4. l to ml\n");

       printf("\n");

    printf("enter the case of convertion :");
    scanf("%d",&c);


    if(c==1){
           printf("enter the  kilometer :");
           scanf("%d",&ki);

             ko= ki*1000;   
    }
    
    if(c==2){

         printf("enter the meter :");
         scanf("%d",&ki);

         ko=ki*100;   
    }

    if(c==3){
        
         printf("enter the kilogram:");
         scanf("%d",&ki);

          ko= ki*1000;    
    }

    if(c==4){

         printf("enter the liter :");
         scanf("%d",&ki);

          ko= ki*1000;   
    }
       
          printf("\n");

      switch(c){


           case 1:  printf("%d kilometer = %d meter",ki,ko);
                            break;

           case 2:  printf("%d meter = %d centimeter",ki,ko);
                            break;


           case 3:  printf("%d kilogram = %d gram",ki,ko);
                            break;



           case 4:  printf("%d liter = %d mililiter ",ki,ko);
                            break;

           default : printf("the case is invalid");
                            break;
      }
              printf("\n");

    return 0;
}