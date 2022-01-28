#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int a,z,bil;
    int puan=0,pcpuan=0;
    int i=1;

int main(){


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
