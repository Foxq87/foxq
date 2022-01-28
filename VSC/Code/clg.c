#include <stdio.h>
#include <conio.h>



int main(){

	char nm[30],snm[30];

	int stn,grd,v1,f1;

	float ort,ort1,ort2,ort3, tmp1 = 0, tmp2 = 0;

	

		printf("Adiniz : ");	scanf("%s",&nm);	

		printf("Soyadiniz : ");	scanf("%s",&snm);	

		printf("Ogrenic Numarasi : ");	scanf("%d",&stn);

		sinif:

		printf("Hosgeldin %s %s\n Kacinci Sinifsiniz : ",nm,snm); scanf("%d",&grd);

		switch(grd)

		{

			case 1:

				printf("vize puanini  ve final notunu gir\n");

				scanf("%d %d",&v1,&f1);

				if(v1>100)

				{

					printf("**lutfen 100 ya da 100'den kucuk bir sayi girin");

				}

				else{

					

					

					tmp1 = (float)v1;

					tmp2 = (float)f1;

					ort=((tmp1*5.0)/10.0)+((tmp2*5.0)/10.0);

					

					if(ort>=50){

				printf("gectiniz!\nNot Ortalamasi : %.2f\n",ort);}

				else{

				printf("kaldiniz\nNot ortalamasi : %.2f\n",ort);	}

				printf("Not Ortalamasi : %.2f\n",ort);

				}

			break;

			case 2:

				printf("vize puanini  ve final notunu gir\n");

				scanf("%d %d",&v1,&f1);

				if(v1>100)

				{

					printf("**lutfen 100 ya da 100'den kucuk bir sayi girin");

				}

				else{

					

					tmp1 = (float)v1;

					tmp2 = (float)f1;

					ort1=(((tmp1*40)/100)+((tmp2*60)/100));

					

					if(ort1>=50){

				printf("gectiniz!\nNot Ortalamasi : %.2f",ort1);}

				else{

				printf("kaldiniz\nNot ortalamasi : %.2f",ort1);	}

			

			}

			break;

			case 3:

				printf("vize puanini  ve final notunu gir\n");

				scanf("%d %d",&v1,&f1);

				if(v1>100)

				{

					printf("**lutfen 100 ya da 100'den kucuk bir sayi girin");

				}

				else{

					

					ort2=(v1*3)/10+(f1*7)/10;

					if(ort2>=50){

				printf("gectiniz!\nNot Ortalamasi : %.2f\n",ort2);}

				else{

				printf("kaldiniz\nNot ortalamasi : %.2f\n",ort2);	}

				

				}

			break;		

			case 4:

				printf("vize puanini  ve final notunu gir\n");

				scanf("%d %d",&v1,&f1);

				if(v1>100)

				{

					printf("**lutfen 100 ya da 100'den kucuk bir sayi girin");

				}

				else{

					

				ort3=(v1*2)/10+(f1*8)/10;

				if(ort3>=50){

				printf("gectiniz!\nNot Ortalamasi : %.2f\n",ort3);}

				else{

				printf("kaldiniz\nNot ortalamasi : %.2f\n",ort3);	}			

				}

			break;

			default:

				printf("**Siniflar 1'den 4'e kadardir. lutfen gecerli bir sinif giriniz**");

				goto sinif;

			break;

		}

	}	