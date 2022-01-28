#include <stdio.h>
int main()
{
    int a,bb,ob,yb,bb2;

    printf("basamaklari bulunacak sayiyi giriniz(3 basmakli) : ");
    scanf("%d",&a);

    bb=((a%100)%10);
    ob=(a%100-bb)/10;
    yb=((a%1000)-bb+10*ob)/100;
    bb2=(a-(yb*100+ob*10+bb))/1000;
    printf("birler:%d\nonlar:%d\nyuzler :%d\nbinler : %d",bb,ob,yb,bb2);
}