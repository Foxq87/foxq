#include <stdio.h>


int main()
{
   
    char b[2];
    char a,c,d,e,f,g,h,i;
    int wallet=0;
    int ttl=0;

    str:
    printf("Welcome!\nif you want to order something please answer the questions below\n[1]-Hamburger Menu\n[2]-Pizza Menu\n[3]-A Menu\n[4]-B Menu\n");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
            printf("Hamburger Menu is 8$ do you want to continue? y/n ");
            scanf("%c",&b);
            
            if(b=='y')
            {
                wallet+=8;
                hmb:

                printf("Your order has been received! Would you like to continue ordering? y/n ");
                scanf("%c",&f);

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
                    printf("please use valid statements");
                    goto hmb;
                }
                
            }

            else if(b=='n')
            {
                printf("your checkout has been cancelled");
                goto str;
            }

            else if(b!='y'||b!='n')
            {
                printf("please use valid statements");
                goto str;
            }

        break;

        case 2:
           
        break;

        case 3:
            
        break;

        case 4:
           
        break;

        default:
            
        break;
    }
    end:
    
    printf("Your checkout is %d",wallet);

    rend:
    return 0;
}