#include <stdio.h>

int main()

{
    int sm,tplm,not;
    int i = 0;

    printf("sinifiniz kac kisidir\n");
    scanf("%d",&sm);

    do
    {
        printf("herhangi ogrenci ortalamasini girin\n");
        scanf("%d",&not);

        toplam+=not;
        i++;
    }
    while(i<sm);
    printf("sinif not ortalamasi = %d",toplam/sm);
    

}