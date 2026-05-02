#include<stdio.h>
#include<stdlib.h>  
#include<time.h>

int genraterandomnum(int p){
        srand(time(NULL));
        return rand()%p;
}

int main (){

       char name[20];                           // name of the player who want to play the game
       int t;                                  // the t is the number of turns the player want to play
       int p=3;                               // there are 3 steps in the game rock paper scissor so p=3
       int player1,player2;
       static int draw=0;
       static int playerwins=0;
       static int computerwins=0;
       printf("enter your name :");
       gets(name);
       getchar();
       printf("welcome *%s* to the game\n",name);
       getchar();
       printf("enter the number of turns you want to play :");
       scanf("%d",&t);
       getchar();
       printf("lets start the game \nthere are two players \nplayer 1:you \nplayer 2:computer\n");

    for ( int i=0;i<t;i++){

        printf("enter you %d step : \n1.rock \n2.paper \n3.scissor\n",i+1);
        scanf("%d",&player1);

        player2=genraterandomnum(p);
        printf("computer %d step is %d\n",i+1,player2);

        // decision of the game

        if (player1==player2){
            printf("draw\n");
            draw++;
        }
        else if ((player1==1 && player2==3) || (player1==2 && player2==1) || (player1==3 && player2==2)){
            printf("you win\n");
            playerwins++;
        }
        else {

            printf("computer wins\n");
            computerwins++;
        }

    }

    if (playerwins>computerwins){
        printf("congratulations %s you win the game\n",name);
    }
    else if (playerwins<computerwins){
        printf("sorry %s computer wins the game\n",name);
    }
    else {
        printf("the game is draw\n");
    } 
    
    printf("By the %d \n* total draw %d\n* turns you win %d times \n* computer wins %d times\n",t,draw,playerwins,computerwins);
     
    return 0;

}