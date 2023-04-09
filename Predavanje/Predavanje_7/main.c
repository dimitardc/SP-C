#include <stdio.h>
#include <math.h>
/*
int Ploshtina (int l, int w){
	return l * w;
	}

int main(){
	int a=7, b=5;
	printf("%d",Ploshtina(a,b));
	return 0;
}
*/

/*
void kvadrati(){
	int i;
	for(i=1; i<10; i++)
	printf("%d\n",i*i);
}

int main(){
	kvadrati();
	return 0;
}
*/

/*

void calcFaktoriel(int n){
	int i,faktoriel=1;
	for(i=1;i<=n;i++)
		faktoriel*=i;
	printf("faktoriel od %d e %d", n,faktoriel);
}


int main(){
	int broj;
	printf("vnesi broj");
	scanf("%d", &broj);
	calcFaktoriel (broj);
	return 0;
}
*/

/*
float triangle(float width, float heigth){
	float area;
	area  = (width * heigth)/2.0;
	return area;
}


int main(){
	float size;
	printf("triagolnik #1 %.2f\n", size = triangle(1.3,8.3));
	printf("triagolnik #2 %.2f\n", size = triangle(4.8,9.8));
	printf("triagolnik #3 %.2f\n", size = triangle(1.2,2.0));
}

*/

/*

float square (float x) {
	x*=x;
	return (x);
}

int main () {
	float a, b;
	printf("\n Vnesi broj ");
	scanf("%f", &a );
	b = square (a);
	printf ("Kvadratot na %f e %f", a, b);
	return 0;
} 

*/
/*
#include <stdio.h>
int value1, value2, value3;
int add_numbers() {
	int result;
	result = value1 + value2 + value3;
	return result;
}
	
	
int main() {
	int result;
	value1 = 10;
	value2 = 20;
	value3 = 30;
	result = add_numbers();
	printf("%d + %d + %d = %d\n", value1, value2, value3,result);
return 0;
}
*/

/*
void prikazi();
int x = 20;
int main(){
	int x =10;
	printf("%d vo glavnata programa\n",x);
	prikazi();
	return 0;
}

void prikazi() {
	printf("%d vo funkcija\n", x);
}
*/

/*
int a = 20;
 
int main () {
  int a = 10;
  int b = 20;
  int c = 0;
  printf ("value of a in main() = %d\n",  a);
  c = sum(b);
  printf ("value of c in main() = %d\n",  c);
  return 0;
}


int sum(int b) {
   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);
   return a + b;
}

*/

//~~~~~~~~~~~~~~~~~~~~~~~~~AUD

/*
#define PI 3.14

float ploshtina(float radius){
	return radius *radius *PI;
}

float perimetar (float radius){
	return 2*radius*PI;
}

float dijametar (float radius){
	return 2*radius;
}

int main(){
	float radius,D,L,P;
	scanf("%f", &radius);
	D = dijametar(radius);
	L = perimetar(radius);
	P = ploshtina(radius);
	printf("dijametarot e %f", D);
	printf("perimetarot e %f", L);
	printf("ploshtinata e %f", P);
}

*/






/*
int check(int n){
	return n/100 + n%100;
}

int main(){
	int i,count = 0;
	for(i=1000;i<=9999;i++)
		if(i % check(i) == 0){
			printf("%d\n", i);
			count++;
		}
	printf("%d", count);
}
*/



/*~~~~~~~~~~~~~~~~ 3 moja verzija bez funkcii
int main(){
	int broj,i,counter=0,temp,temp2,flag = 1;
	scanf("%d", &broj);
	temp2 = broj ;
	while(flag){
		temp = ++broj;
		counter = 0;
		for(i=2;i<=temp;i++){
			if(temp%i==0)
				counter++;
		}
		if(counter<2)
			flag = 0;
	}
	printf("%d - %d = %d\n", temp,temp2,temp-temp2);
}

*/

/* 3
int prost(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 1;
	return 0;
}

int prvPogolemProst(int n){
	n++;
	while(prost(n))
		++n;
	return n;
}

int main(){
	int n,pogolemProst;
	scanf("%d", &n);
	pogolemProst = prvPogolemProst(n);
	printf("%d - %d = %d", pogolemProst,n,pogolemProst-n);
}
*/

/*~~~~~~~~~~~~~ 4. my version

int isPrim(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int sumPrim(int n){
	int sum,temp,cifra;
	sum = 0;
	temp = n;
	while(temp>0){
		cifra = temp%10;
		sum+=cifra;
		temp/=10;
	}
	return sum;
}

int main(){
	int i,counter=0;
	for(i=2;i<9999;i++)
		if(isPrim(i) && isPrim(sumPrim(i))){
			printf("%d\t", i);
			counter++;
		}
	printf("\nvkupno : %d\n",counter);
}

*/


/*~~~~~~~~~~~~~~~~~~~~ 4.
int isPrim(int n){
	int i;
	if(n<4)
		return 1;
	else{
		if(n%2==0)
			return 0;
		else{
			for(i=3;i*i<=n;i+=2)
				if(n%i==0)
					return 0;
			}
	}
	return 1;
}

int sumPrim(int n){
	int sum = 0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int i,counter=0;
	for(i=2;i<9999;i++)
		if(isPrim(i) && isPrim(sumPrim(i))){
			printf("%d\t", i);
			counter++;
		}
	printf("\nvkupno : %d\n",counter);
}
*/

/*~~~~~~~~~~~~~~~~~~~~~ 5.
int prosti(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}


int main(){
	int i,counter=0;
	for(i=2;i<1000;i++){
		if(prosti(i) && prosti(i+2)){
			printf("%d %d\n", i, i+2);
			counter++;
		}
	}
	printf("vkupno %d\n", counter);
	return 0;
}
*/


/*~~~~~~~~~~~~  6
int sum(int n){
	int i,s=0;
	for(i=1;i<=n;i++)
		s+=i;
	return s;
}

int faktoriel (int n){
	int result=1,i;
	for(i=1;i<=n;i++)
		result*=i;
	return result;
}

int main(){
	int n,i,result=0,s;
	scanf("%d", &n);
	if(n>0){
		for(i=1;i<n;i++){
			s = sum(i);
			result+=faktoriel(s);
			printf("%d! + ", s);
		}
		s = sum(n);
		result+=faktoriel(s);
		printf("%d! = %d\n", s,result);
	}
	else
		printf("nevalidna vrednost");
}
*/
