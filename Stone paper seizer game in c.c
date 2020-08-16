#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int decide[3];
int i,your_score=0,computer_score=0;
void set_default();
void result(int);
main(){
    int choice=0;
    printf("\n                                    -:CHILDHOOD GAME--STONE PAPER SIZER:-");
    printf("\n\n                                         -:PLAY AGAINST COMPUTER:-\n");
    set_default();
    while(1){
        printf("\n1.Stone 2.Paper 3.Sizer 4.Exit the game(Give choice by number): ");
              scanf("%d",&choice);
        switch(choice){
    case 1: case 2: case 3:
        result(choice);
        break;
    case 4:
        printf("\nComputer Score                           Your Score");
        printf("\n\n       %d                                     %d\n\n",computer_score,your_score);
        getch();
        exit(1);

    default:
        printf("\nNot recognised your choice");
        break;
        }

    }
}
void set_default(){
    for(i=0;i<=2;i++){
    decide[i]=0;
}
}

void result(int take){
    if(take==1 && decide[0]==0){
        printf("\nYour choice: Stone");
        printf("\nComputer choice: Paper");
        printf("\n                                      Result: Draw");
        decide[0]=1;
    }
    else if(take==1 && decide[0]==1){
        printf("\nYour choice: Stone");
        printf("\nComputer choice: Seizer");
        printf("\n                                      Result: You win");
        your_score++;
        decide[0]=2;
    }
    else if(take==1 && decide[0]==2){
        printf("\nYour choice: Stone");
        printf("\nComputer choice: Stone");
        printf("\n                                      Result: Draw");
        your_score++;
        decide[0]=0;
    }
    else if(take==2 && decide[1]==0){
        printf("\nYour choice: Paper");
        printf("\nComputer choice: Seizer");
        printf("\n                                      Result: Computer win");
        computer_score++;
        decide[1]=1;
    }
    else if(take==2 && decide[1]==1){
        printf("\nYour choice: Paper");
        printf("\nComputer choice: Stone");
        printf("\n                                      Result: Draw");
        decide[1]=2;
    }
    else if(take==2 && decide[1]==2){
        printf("\nYour choice: Paper");
        printf("\nComputer choice: Paper");
        printf("\n                                      Result: Draw");
        decide[1]=0;
    }
    else if(take==3 && decide[2]==0){
        printf("\nYour choice: Seizer");
        printf("\nComputer choice: Stone");
        printf("\n                                      Result: Computer win");
        computer_score++;
        decide[2]=1;
    }
    else if(take==3 && decide[2]==1){
        printf("\nYour choice: Seizer");
        printf("\nComputer choice: Paper");
        printf("\n                                      Result: You win");
        your_score++;
        decide[2]=2;
    }
    else if(take==3 && decide[2]==2){
        printf("\nYour choice: Seizer");
        printf("\nComputer choice: Seizer");
        printf("\n                                      Result: Draw");
        your_score++;
        decide[2]=0;
    }


}

