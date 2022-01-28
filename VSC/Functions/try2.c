#include <stdlib.h>
#include <stdio.h>

int main(){
    char a;

    printf("y/n");
    scanf("%c",&a);
    if(a=='y'){
        printf("\nabc");
    }else if(a=='n'){
        printf("\ncba");
    }else{
        printf("lutfen");
    }
}