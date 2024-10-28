/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void playGame()
{
    int p1pos=0,p2pos=0;
    int flag=1;
    while(p1pos<100&&p2pos<100)
    {
    int diceno=(int)(rand()%6)+1;
    if(flag==1)
    {
        printf("player 1's turn\n");
        printf("rolled the dice with %d\n",diceno);
        if(p1pos+diceno<=100)
        {
            p1pos=p1pos+diceno;
            
        }
        flag=2;
    }
        else
        {
             printf("player 2's turn\n");
        printf("rolled the dice with %d\n",diceno);
        
    
        
        if(p2pos+diceno<=100)
        
            p2pos=p1pos+diceno;
            
        
        printf(" player 1 moved to new position:%d\n",p2pos);
        flag=1;
    }
        
    }
}

int main()
{
    srand(time(0));
    printf("welcome to snake and ladder game");
    playGame();
    
    printf("%d",((int)(rand()%6))+1);
    return 0;
    
}
