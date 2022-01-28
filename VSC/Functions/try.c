#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int fnctn()
{
    int puan=0;
int life=2;
int x,y,nm,nm2,rght,ans;

    printf("*welcome to the game\n*you have 3 life\n\n");
    bas:
    srand(time(NULL));          
    nm=rand()%50+1;
    nm2=rand()%50+1;

    printf("%d+%d=?",nm,nm2);
    scanf("%d",&ans);

rght=nm+nm2;
    if(ans==rght)
    {
        printf("good job!!\n");
        goto bas;
    }
    else
    {
        printf("wrong answer\n");
        life--;
    if(life>=0)
    {
        goto bas;
    }
        
         else
        {
        printf("you lost");
        }
    }
}
int fnctn2()
{

    int a,z,bil;
    int puan=0,pcpuan=0;
    int i=1;

    do
    {
    bas:
    
    
    printf("*Sira Sizde! Zari Atmak Icin ENTER'a Basiniz\n\n");
    getch();

    
    srand(time(NULL));

    int nmb,nmb2,b;
    nmb=rand()%6+1;
    nmb2=rand()%6+1;
    b=nmb+nmb2;
    
    
    
    if(b==7||b==11)
    {
        puan+=b;
        printf("1. zar : %d\n2. zar : %d\nToplam : %d\nPuaniniz : %d\n\n",nmb,nmb2,b,puan);
    
    //  goto bas;
    }
    else
    {
        puan+=b;
        printf("1. zar : %d\n2. zar : %d\nToplam : %d\nPuaniniz : %d\n\n",nmb,nmb2,b,puan); 
    }
       
       
        printf("*Sira Bilgisayarda! Zari Atmak Icin ENTER'a Basiniz\n\n");
        getch();

    

    int nmb3,nmb4,c;
    nmb3=rand()%6+1;
    nmb4=rand()%6+1;
    c=nmb3+nmb4;
    
    
    
    if(b==7||b==11)
    {
        pcpuan+=c;
        printf("1. zar : %d\n2. zar : %d\nToplam : %d\nBilgisayarin Puani : %d\n\n",nmb3,nmb4,c,pcpuan);
        
    //  goto bas;
    }
    else
    {
        pcpuan+=c;
        printf("1. zar : %d\n2. zar : %d\nToplam : %d\nBilgisayarin Puani : %d\n\n\n",nmb3,nmb4,c,pcpuan);
    //goto bas;     //printf("puaniniz = %d\n enter'a basarak zari atin\n",b);
    }
    i++;
    }
   while(i<4);
    if(pcpuan>puan)
    {
        printf("sizin puaniniz : %d \nBilgisayarin puani : %d\n\n",puan,pcpuan);
        printf("bilgisayar kazandi");
    }
    else
    {
        printf("sizin puaniniz : %d \nBilgisayarin puani : %d\n\n",puan,pcpuan);
        printf("siz kazandiniz");
    }
}
int main()
{

    int secim;
    printf("Hosgeldiniz hangi oyunu oynamak istersiniz [1]-matematik\t[2]-Zar atma\n");
    scanf("%d",&secim);

    if(secim==1)
    {
        fnctn();
    }
    
    else if(secim==2)
    {
        fnctn2();
    }

    else
    {
        printf("please use valid statements");
    }

    return 0;
    
}