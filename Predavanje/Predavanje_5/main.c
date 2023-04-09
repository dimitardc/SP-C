#include <stdio.h>
#include <math.h>

/*int main()
{
	int x=1000;
	int a,b,c,d;
	while (x<=9999){
		a=x%10;
		b=(x%100)/10;
		c=(x%1000)/100;
		d=x/1000;
		if(d==a+b+c)
			printf("%d\t", x);
		x++;
	}
	return 0;
}
*/
/*
int main() {
  int i, n, sum, first_digit, digit;
  i = 1000;
  while (i <= 9999) {
	first_digit = i / 1000; //4-tata cifra od 4-ficren broj
	n = i % 1000;           //drugite ostanati 3 cifri
	sum = 0;
	while (n > 0) {          
		digit = n % 10;     //prvata cifra od 3 cifreniot ostatok
		sum += digit;
		n /= 10;
	}
	if(sum == first_digit) 
		printf("%d\t", i);
	i++;
  }
  return 0;
}

*/

/*
int main(){
	int from,to,i,temp,op,digit;
	scanf("%d%d", &from, &to);
	for(i=from ; i<=to ; i++){   				//ova ni e loop za broenje od	do broevi sho sme vnele
		temp=i;
		op=0;									//op e =0 bidejki koga ke * prvpat so 10 treba da e 0 a ne 10
		while (temp > 0){						//ovoj loop proveruva dali brojot e mirrored
			digit = temp % 10;					//ja zima prvata cifra of brojot 
			op = op *10 + digit;				//vo op vsushnost se smestuva brojot sho ke sporedime
			temp/=10;							//odkako spe ja zele cifrata od temp, delime so 10 i vrti
		}
		if(op == i)
			printf("%d\t", i);
	}
	return 0;
}
*/

/*
int main(){
	int n,max,poz = 1, k = 1;
	if(scanf("%d", &max)){
		while(scanf("%d", &n)){
			k++
			if(max<n){
				max=n;
				poz = k;
			}
		}
		printf("%d i se naogja na %d", max, poz);
	}
	else
		printf("ne e vnesen broj");
	return 0;
}
*/

/*
int main(){
	int n,max;
	if(scanf("%d", &max)){
		while(scanf("%d", &n)){
			if(n>100) continue;
			if(max<n)
				max=n;
		}
		printf("%d", max);
	}
	else
		printf("ne e vnesen broj");
	return 0;
}
*/

/*
int main(){
	int n,max1,max2,temp;
	if(scanf("%d%d", &max1, &max2)==2){
		if(max2>max1){ 						//ovoj loop e za ako vneseme samo dve brojki i tolku
			temp=max1;
			max1=max2;
			max2=temp;
		}
		while(scanf("%d", &n)){				//dodeka ovoj loop e za ako vnesuvame povekje brojki
			if(n>max1){
				max2=max1;
				max1=n;
			}
			else if(n>max2)
				max2=n;
		}
		printf("Prviot najgolem broj e %d\n", max1);
		printf("vtoriot najgolem broj e %d\n", max2);
	}
	else
		printf("somethings fucked");
}

*/

/*
int main(){
	int n,i,razlika,sum1=0,sum2=0,number=0;		//sum1=parni
	scanf("%d", &n);
	for(i=1 ; i <= n ; i++){					//ako vneseme pr n=4, znaci ke treba da vneseme 4 brojki...
		scanf("%d", &number);
		if(i%2)
			sum1+=number;
		else
			sum2+=number;
	}
	razlika=sum1-sum2;
	if(razlika<10 && razlika > -10)
		printf("dvete sumi se slicni\n");
	else
		printf("dvete sumi mnogu se razlikuvaat\n");
	
	
	
}

*/

/*

#include <stdio.h>
int main() {
  int old_position, position, max_sum, sum, previous, next;
  scanf("%d%d", &previous, &next);
  old_position = position = 2;
  max_sum = sum = previous + next;
	while (1) {
		if (previous < 0 && next < 0) 							//ova e samo za izlez od loop
			break;
		sum = previous + next;
		if (sum > max_sum) {									//ovoj loop e za pogolemiot nov sum da se updejtira
			max_sum = sum;
			old_position = position;
		}
		previous = next; 										//narednoto stanuva predhodno
		scanf("%d", &next);										//potoa vnesuvame nov nareden broj	next
		position++;
	}
  if (position > 2)
	printf("Broevite se na pozicii %d i %d i nivnata suma e %d",old_position - 1, old_position, max_sum);
	return 0;
}
*/

/*

#include <stdio.h>
int main(){
	int broj1,broj2,reshenie=0;
	char znak;
	scanf("%d%c%d", &broj1, &znak, &broj2);
	switch(znak){
		case '+':
			reshenie = broj1 + broj2; break;
		case '-':
			reshenie = broj1 - broj2; break;
		case '*':
			reshenie = broj1 * broj2; break;
		case '/':
			if(broj2==0)
				printf("delenje so 0");
			else
				reshenie = broj1 / broj2;
		default:
			printf("nepoznat operator %c", znak);
	}
		printf("%d %c %d = %d", broj1, znak, broj2, reshenie);
}

*/

/*
#include <stdio.h>
int main() {
	int vrednost,izbor;
	printf("vnesi pocetna vrednost");
	scanf("%d", &vrednost);
	do{
		do{
		printf("Meni:\n");
		printf("1 - zgolemi\n");
		printf("2 - namali\n");
		printf("3 - dupliraj\n");
		printf("0 - kraj\n");
		printf("izbor : ");
		scanf("%d", &izbor);
		}
		while((izbor<0) || (izbor >3));						//ako vneseme megju 1-3, toa shto e vo while stanuva false i loopot prestanuva
	switch(izbor){											//bidejki loopot e prekinat nashiot izbor odi tuka
		case 1: vrednost++; break;
		case 2: vrednost--; break;
		case 3: vrednost*=2; break;
		case 0: printf("Kraj\n"); break;
		default: printf("Nevalidna vrednost");
		}
		printf("Vrednosta e = %d \n", vrednost);
	}
	while(izbor!=0);
  return 0;
}

*/



