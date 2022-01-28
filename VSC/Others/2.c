#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <time.h>





int main()

{



int i=1;

int a;









srand(time(NULL));

printf("zar kac kere atilsin?");

scanf("%d",&a);

while(i<=a)

{

int rastgele; 

rastgele=rand()%6+1;



printf("%d\n",rastgele);

i++;

}

return 0;

getch();



}