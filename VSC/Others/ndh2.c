#include <stdio.h>


int main()
{
int a;
    char ba,f;
    char c,d,e,g,h,i,j;
    int wallet=0;
    int ttl=0;

    
    printf("\nWelcome!");
    str:
    printf("\nif you want to order something please answer the questions below\n[1]-Hamburger Menu\n[2]-Pizza Menu\n[3]-A Menu\n[4]-B Menu\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1: printf("Hamburger Menu is 8$ do you want to continue? y/n");
            scanf(" %c",&ba);
           
            
            
            if(ba=='y')
            {
                wallet+=8;
                hmb:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf(" %c",&f);

                if(f=='y')
                {
                    goto str;
                }

                else if(f=='n')
                {
                    goto end;
                }

                else 
                {
                    printf("please use valid statements\n\n");
                    goto hmb;
                }
                
            }

            else if(ba=='n')
            {
                printf("your checkout has been cancelled\n\n");
                goto str;
            }

            else if(ba!='y'||ba!='n')
            {
                printf("please use valid statements\n\n");
            }
            else{
                printf("please\n\n");
            }
    
        break;

        case 2:
           printf("pizza Menu is 10$ do you want to continue? y/n");
            scanf(" %c",&c);
           
            
            
            if(c=='y')
            {
                wallet+=10;
                pza:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf(" %c",&d);

                if(d=='y')
                {
                    goto str;
                }

                else if(d=='n')
                {
                    goto end;
                }

                else 
                {
                    printf("please use valid statements\n\n");
                    goto pza;
                }
                
            }

            else if(c=='n')
            {
                printf("your checkout has been cancelled\n\n");
                goto str;
            }

            else if(c!='y'||c!='n')
            {
                printf("please use valid statements\n\n");
            }
            else{
                printf("please\n\n");
            }
        break;

        case 3:
            printf("A Menu is 7$ do you want to continue? y/n");
            scanf(" %c",&h);
           
            
            
            if(h=='y')
            {
                wallet+=7;
                amenu:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf(" %c",&g);

                if(g=='y')
                {
                    goto str;
                }

                else if(g=='n')
                {
                    goto end;
                }

                else 
                {
                    printf("please use valid statements\n\n");
                    goto amenu;
                }
                
            }

            else if(h=='n')
            {
                printf("your checkout has been cancelled\n\n");
                goto str;
            }

            else if(h!='y'||h!='n')
            {
                printf("please use valid statements\n\n");
            }
            else{
                printf("please\n\n");
            }
        break;

        case 4:
            printf("B Menu is 6$ do you want to continue? y/n");
            scanf(" %c",&i);
           
            
            
            if(i=='y')
            {
                wallet+=6;
                bmenu:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf(" %c",&j);

                if(j=='y')
                {
                    goto str;
                }

                else if(j=='n')
                {
                    goto end;
                }

                else 
                {
                    printf("please use valid statements\n\n");
                    goto bmenu;
                }
                
            }

            else if(i=='n')
            {
                printf("your checkout has been cancelled\n\n");
                goto str;
            }

            else if(i!='y'||i!='n')
            {
                printf("please use valid statements\n\n");
            }
            else{
                printf("please\n\n");
            }
        break;

        default:
            
        break;
    }
    end:
    
    printf("Your checkout is %d $",wallet);

    rend:
    return 0;
}