#include <stdio.h>
#include <conio.h>

int main()
{
    int chs1,chs2,a,b,c,d;
    float ans,tmp1=0,tmp2=0;
    home:
    printf("hangi islemi yapacaksiniz\n[1]-Toplama\t[2]-Cikarma\t[3]-carpma\t[4]-bolme\n");
    scanf("%d",&chs1);

    switch(chs1)
    {  
        case 1: 
            printf("birinci sayiyi giriniz :");
            scanf("%d",&a);
            printf("ikinci sayiyi giriniz :");
            scanf("%d",&b);
            printf("cevap = %d + %d = %d\n",a,b,a+b);
            goto home;
        break;

        case 2: 
       		bida:
            printf("\nbirinci sayiyi giriniz :");
            scanf("%d",&a);
            printf("ikinci sayiyi giriniz :");
            scanf("%d",&b);
            if(a<b)
            {
            	printf("lutfen ilk sayiya buyuk deger veriniz");
            	goto bida;
			}
            else
        	{
            	printf("cevap = %d - %d = %d\n",a,b,a-b);
           		goto home;
			}
        break;

        case 3:
            printf("birinci sayiyi giriniz :");
            scanf("%d",&a);
            printf("ikinci sayiyi giriniz :");
            scanf("%d",&b);
            	printf("cevap = %d * %d = %d\n",a,b,a*b);
            	goto home;
			
        break; 

        case 4:
            printf("birinci sayiyi giriniz :");
            scanf("%d",&c);
            printf("ikinci sayiyi giriniz :");
            scanf("%d",&d);
            if(c<d)
            {
            	printf("lutfen ilk sayiya buyuk deger veriniz");
            	goto bida;
			}
            else
			{
			tmp1 = (float)c;
			tmp2 = (float)d;
				ans = tmp1/tmp2;
            	printf("cevap = %d / %d = %.2f\n",c,d,ans);
            	goto home;
			}
        break; 

        default:
            printf("please use valid statements");
            goto home;
        break;

    }
return main();
}