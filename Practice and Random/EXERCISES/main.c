#include <stdio.h>


int main(){
	float masa;
	float visina;
	scanf("%f%f" , &masa, &visina) ;
	visina/=100;
	float bmi;
	bmi=(masa/(visina*visina)) ;
	printf("%.2f", bmi);
	return 0;
}


int main(){
	int broj;
	scanf("%d", &broj);
	int a;
	a=broj/3600;
	int b;
	b=((broj-a*3600)/60);
	int c;
	c=broj%60;
	printf("%d sekundi se %d casovi, %d minuti i %d sekundi \n" , broj,a,b,c );
	return 0;
}
