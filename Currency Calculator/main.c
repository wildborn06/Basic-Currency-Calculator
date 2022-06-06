#include <stdio.h>

// Doviz Hesaplama Araci 
// 2.06.22 Güncel kurlarýna göre hesaplandý


float dollartotl(float dollar)
{
	float tl;
	tl = dollar*16.50;
	return tl;
}
float dollartosterlin(float dollar)
{
	float sterlin;
	sterlin = dollar-0.25;
	return sterlin; 
}
float dollartoeuro(float dollar)
{
	float euro;
	euro = dollar-0.07;
	return euro;
}
float dollartomanat(float dollar)
{
	float manat;
	manat = dollar*1.70;
	return manat;
}
float dollartoruble(float dollar)
{
	float ruble;
	ruble = dollar/0.016;
	return ruble;
}
float dollartojaponyeni(float dollar)
{
	float japonyeni;
	japonyeni = dollar/0.0077;
	return japonyeni;
}
float dollartocinyuani(float dollar)
{
	float cinyuani;
	cinyuani = dollar/0.15;
	return cinyuani;
}
float dollartoleva(float dollar)
{
	float leva;
	leva = dollar/0.55;
	return leva;
}
float dollartokron(float dollar)
{
	float kron;
	kron = dollar/0.14;
	return kron;
}
float dollartofrank(float dollar)
{
	float frank;
	frank = dollar*1.04;
	return frank;
}


int main()
{
	int islem;
	printf("Islemler: \n 1: TL Hesaplama\n 2: Sterlin Hesaplama\n 3: Euro Hesaplama:\n 4: Manat Hesaplama\n 5: Ruble Hesaplama\n 6: Japon Yeni Hesaplama\n 7: Cin Yuani Hesaplama\n 8: Leva Hesaplama\n 9: Danimarka Kronu Hesaplama\n 10: Isvec Frangi Hesaplama\n\n" );
	printf("Isleminizi Seciniz:");
	scanf("%d",&islem);
	
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10;
	float j1,j2,j3,j4,j5,j6,j7,j8,j9,j10;
	switch(islem){
		case 1:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i1);
			j1=dollartotl(i1);
			printf("TL karsiligi: %.2f",j1);
			break;
	
		case 2:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i2);
			j2=dollartosterlin(i2);
			printf("Sterlin karsiligi: %.2f",j2);
			break;
		
		case 3:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i3);
			j3=dollartoeuro(i3);
			printf("Euro karsiligi: %.2f",j3);
			break;
		case 4:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i4);
			j4=dollartomanat(i4);
			printf("Euro karsiligi: %.2f",j4);
			break;
		case 5:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i5);
			j5=dollartoruble(i5);
			printf("Ruble Karsiligi: %.2f",j5);
			break;
		case 6:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i6);
			j6=dollartojaponyeni(i6);
			printf("Japon Yeni Karsiligi: %.2f",j6);
			break;
		case 7:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i7);
			j7=dollartocinyuani(i7);
			printf("Cin Yuani Karsiligi: %.2f",j7);
			break;
		case 8:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i8);
			j8=dollartoleva(i8);
			printf("Leva Karsiligi: %.2f",j8);
			break;
		case 9:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i9);
			j9=dollartokron(i9);
			printf("Danimarka Kronu Karsiligi: %.2f",j9);
			break;
		case 10:
			printf("Dolar Miktarinizi Giriniz: ");
			scanf("%d",&i10);
			j10=dollartofrank(i10);
			printf("Isvicre Frangi Karsiligi: %.2f",j10);
			break;

	
		default:
			printf("Bilinmeyen Islem..");
			break;

	}

	return 0;
}
