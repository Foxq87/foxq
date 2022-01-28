#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int chs1,chs2,chs3,nm1,nm2,nm3,nm4;
    int i=0;
    
    srand(time(NULL));
    nm1=rand()%50+1;
    nm2=rand()%50+1;          
    nm3=rand()%50+1;

    printf("\nhi i am idk i am a map... \nyes this makes no sense\nbut...\ni need your help\ni lost my owner!\nalso... i can change my looking!\nand now i am showing way to my owner...\nbut i cant walk so PLEASE take me to my owner...\ni hope someone finds me\n"); 
    printf("there is a mountain! Would you climb it or try to find another way?\n\n[1]-climb / [2]-find\n");
    

    scanf("%d",&chs1);
    
    
            switch(chs1)
            {
                case 2:
                    printf("while you were looking for other ways you stepped on a mine and blown up\n :(");   
                    printf("you lost\n");
                break; 
                
                case 1:
                    printf("wow! there is a village far away we should visit there for some info!\nBut Now there is a lake in front of you");
                    printf("and there is a note there is writing %d !\nWe should keep theese numbers! we'll use theese later...\nWould you swim",nm1);
                    printf("across it or just walk arount it?\n\n[1]-swim / [2]-walk\n");
                    scanf("%d",&chs2);
                    switch(chs2)
                    {   
                        case 2:
                            printf("While u are walking around the lake, a bear attacked and killed you\n :(");
                            printf("you lost\n");
                        break;
                        
                        case 1:
                            printf("you swimmed succesfully and found one more note! and this time the number is %d! But now there are cannibals!\n\n[1]-Fight with them [2]-Run away\n",nm2);
                            scanf("%d",&chs3);
                            switch(chs3)
                            {
                            case 1:
                                printf("");
                            break;

                            case 2:
                                printf("sonunu dusunen kahraman olamaz bro you lost");
                            break;
 
                            default:
                                printf("please use valid statements");
                            break;
                            }
                        break;
                    }
                break; 
                
                default:
                    printf("please use valid statements!");
                break;
            }  
}