#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    system("COLOR 4")
    int chs1,chspc;
bas:
    printf("[1]-Tas\n[2]-Kagit\n[3]-Makas\n");
    scanf("%d",&chs1);

    if(chs1>3 && chs1<1)
    {
        printf("lutfen 1 ile 3 arasinda bir sayi girin");
    }

    srand(time(NULL));
    chspc=rand()%3+1;
    
    else if(chs1 == 1 && chspc == 1)
    {
        printf("Berabere");
        goto bas;
    }
    
    else if(chs1 == 2 && chspc == 2)
    {
        printf("Berabere");
        goto bas;
    }

    else if(chs1 == 3 && chspc == 3)
    {
        printf("Berabere");
        goto bas;
    }

    else if(chs1 == 1 && chspc == 2)
    {
        printf("Bilgisayar kazandi");
        goto bas;
    }

    else if(chs1 == 1 && chspc == 3)
    {
        printf("Siz kazandiniz");
        goto bas;
    }

    else if(chs1 == 2 && chspc == 1)
    {
        printf("Siz kazandiniz");
        goto bas;
    }

    else if(chs1 == 2 && chspc == 3)
    {
        printf("Bilgisayar kazandi");
        goto bas;
    }

    else if(chs1 == 3 && chspc == 1)
    {
        printf("Bilgisayar kazandi");
        goto bas;
    }

    else if(chs1 == 3 && chspc == 2)
    {
        printf("Siz kazandiniz");
        goto bas;
    }

}