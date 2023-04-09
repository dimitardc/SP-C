#include <stdio.h>

/*
//Да се напише програма која ќе го пресмета просекот на 10 броеви внесени од тастатура.
//За секој број дасе отпечати дали е под или над просекот.
int main(){
	int broj[10],n;
	float prosek = 0;
	printf("vnesuvaj broevi\n");
	for(n=0 ; n<10 ; n++)					//ciklus za vnesuvanje 10 broevi
		scanf("%d", &broj[n]);
	for(n=0 ; n<10 ; n++)
		prosek+=broj[n];
	prosek/=n;
	printf("Srednata vrednost na vrednostite e %f\n", prosek);
	for(n=0 ; n<10 ; n++)
		if(broj[n] >prosek)
			printf("%d > %.2f\n", broj[n], prosek);
		else
			printf("%d < %.2f\n", broj[n], prosek);
}

*/


/*

#define SIZE 10
int main(){
	int n [SIZE]= { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
	int i,j;
	printf("%s%13s%17s\n", "Element", "Value", "Histogram");
	for(i=0;i<SIZE;++i){
		printf("%7d%13d        ", i,n[i]);
		for(j=1;j<=n[i];j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

*/

/*
#include <ctype.h>
#define SIZE 91
int main () {
	int m, fC[SIZE]={0};
	char ch, index;
	while ( (ch = getchar()) != EOF ){				//toa !=EOF ni e samo uslov za izlez od loop,dont get confused
		if ( ch >= 'A' && ch <= 'Z' ){	//pr:when input A fC[ch] go cita fC[65] i toa shto e na 65-ta poz ke go incrementira
			fC[ch]++;
			}
		}
	printf("Tekstot sodrzi\n");
	printf("Bukva    Broj na pojavi\n");
	for( index = 'A'; index <= 'Z'; index++ )
		printf("%c\t %d\n", index, fC[index]);//prvo printa bukva starting od A i kolku pati se pojavila fC[A] 
												//t.e kolku pati e incrementiran brojot na 65-ta pozicija
												 //
return 0;
}

*/


/*
int main(){
	int day_tab[2][13] ={ {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31} }; //prvo ide red pa kolona
	int i, prest, den, mesec, godina;
	printf("Vnesi datum");
	scanf("%d%d%d", &den, &mesec, &godina);
	prest = godina%4==0 && godina%100!=0 || godina%400==0; //ova mu dava na prest vrednost ili 1 ili 0
	for(i=1; i < mesec; i++) 
		den+=day_tab[prest][i]; //
	printf ("Datumot e %d - iot den vo godinata", den);
	return 0;
}

*/


/*
#define size 8
int main(){
	int board[size][size];
	int i,j;
	for(i=0;i<size;i++)
		for(j=0;j<size;j++)
			board[i][j] = (i+j)%2;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++)
			printf("%d",board[i][j]);
		printf("\n");
	}
		
	return 0;
}

*/
/*

Да се напише програма која за две низи кои се внесуваат од тастатура ќе
провери дали се еднакви или не. На екран да се испачати резултатот од
споредбата. Максимална големина на низите е 100.
#define max 100

int main(){
	int n1,n2,i;	
	int a[max],b[max];//alocirame maksimum 100 available spaces za dvete nizi
	printf("Golemina na prva niza: ");
	scanf("%d", &n1);
	printf("Golemina na vtora niza: ");
	scanf("%d", &n2);
	if(n1!=n2)
		printf("Nizite ne se ednakvi");
	//vnesuvanje na vrednosti na dvete nizi
	else{
		printf("elementi na prvata niza: \n");
		for(i=0;i<n1;i++){
			printf("a[%d] = ", i);
			scanf("%d", &a[i]);	
		}
		printf("elementi na vtora niza: \n");
		for(i=0;i<n2;i++){
			printf("b[%d] = ", i);
			scanf("%d", &b[i]);
		}
		//proverka dali nizite se ednavki
		for(i=0 ;i<n1; ++i)
			if(a[i]!=b[i])
				break;
		if(i==n1)
			printf("Nizite se ednakvi");
		else
			printf("Nizite ne se ednakvi");
	}
}

*/

/*Да се напише програма која за низа чии елементи се внесуваат од тестатура, ќе
го пресмета збирот на парните елементи, збирот на непарните елементи, како
и односот помеѓу бројот на парни и непарни елементи. Резултатот да се
испечати на екран.
#define max 100
int main(){
	int n,i,a[max],brNep=0,brPar=0,sumNep=0,sumPar=0;
	scanf("%d", &n);//n=goleminata na nizata
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			brPar++;
			sumPar+=a[i];
		}
		else{
			brNep++;
			sumNep+=a[i];
		}
	}
	printf("Suma parni %d \n Suma neparni %d", sumPar, sumNep);
	printf("Odnos %.2f", (float) brPar/brNep);
	return 0;
}

*/


/*Да се напише програма која ќе го пресмета скаларниот производ на два
вектори со по n координати. Бројот на координати n, како и координатите на
векторите се внесуваат од стандарден влез. Резултатот да се испечати на екран.
#define max 100

int main(){
	int n,i,a[max],b[max],scalar=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		scanf("%d", &b[i]);
	for(i=0;i<n;i++)
		scalar*=a[i]+b[i];
	printf("skalarniot proizvod e %d", scalar);
}

*/

/* moja verzija na zadaca 
#define max 100
int main(){
	int i,n,a[max],temp1,temp2,rast=0,opag=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		//while(i+1<=n){
		temp1=a[i];
		temp2=a[i+1];
		if(temp1>temp2)
			opag++;
		else if(temp1<temp2)
			rast++;
		else
			break;
	//	}
	}
	if(opag == n-1)
		printf("nizata e opagjacka");
	else if (rast == n-1)
		printf("nizata e rastecka");
	else
		printf("Ni opagjacka ni rastecka");
}
*/

/*
Да се напише програма која ќе провери дали дадена низа од n елементи која се
чита од стандарден влез е строго растечка, строго опаѓачка или ниту строго
растечка ниту строго опаѓачка. Резултатот да се испечати на екран.

#define max 100
int main(){
	int n,i,a[max],rastecka=1,opagjacka=1;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		if(a[i]>=a[i+1]){ // ako prviot e pogolem nego li sledniot togash e opagjacka i "rastecka" stanuva 0.Se proveruva samo ednash
			rastecka = 0;
			break;
		}
	}
	for(i=0;i<n-1;i++){
		if(a[i]<=a[i+1]){
			opagjacka=0;
			break;
		}
	}
	if(!rastecka && !opagjacka)
		printf("nizata ne e nitu opagjacka nitu rastecka\n");
	else if(opagjacka)
		printf("Nizata e opagjacka\n");
	else if(rastecka)
		printf("nizata e rastecka\n");
}

*/


/*
Да се напише програма за ротирање на елементите на една низа за едно место
во десно. На крај, да се испечати на екран ротираната низа. Елементите од
низата се читаат од стандарден влез.

#define max 100

int main(){
	int i,n,temp,a[max];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	temp = a[n-1];	//posledniot clen odi vo temp
					//sledniot ciklus go vrshi rotiranjeto.
	for(i=n-1;i>0;i--)
		a[i]=a[i-1];
	a[0] = temp;
	for(i=0;i<n;i++)//ovoj ciklus e samo za printanje na krajot
		printf("%d", a[i]);
}

*/

/*Да се напише програма за ротирање на елементите на една низа за m местa во
десно. На крај, да се испечати на екран ротираната низа. Елементите од низата
и бројот на ротирања се читаат од стандарден влез.

#define max 100
int main(){
	int i,n,a[max],temp,j,m;
	printf("Golemina na niza");
	scanf("%d", &n);
	printf("broj na rotiranja");
	scanf("%d", &m);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)
		printf("%d", a[i]);
	for(j=0;j<m;j++){
		temp=a[n-1];
		for(i=n-1;i>0;i--)
			a[i]=a[i-1];
		a[0]=temp;
		
	}
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d", a[i]);
}

*/

/*Да се напише програма која што ќе ги избрише дупликатите од една низа. На
крај, да се испечати на екран новодобиената низа. Елементите од низата се
читаат од стандарден влез.

#define max 100
int main(){
	int k,j,i,n,a[max],izbrishani=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n-izbrishani;i++)
		for(j=i+1;j<n-izbrishani;j++)
			if(a[i]==a[j]){
				for(k=j;k<n-1-izbrishani;k++)
					a[k]=a[k+1];
				izbrishani++;
				j--;
			}
	n-=izbrishani;
	for(i=0;i<n;i++)
		printf("%d\t", a[i]);
	
}

//~~~~~~~~~~~~~~~~~~MATRICI~~~~~~~~~~~~~~~~

*/
/*
Да се напише програма која за матрица внесена од тастатура ќе ја пресмета
разликата на збирот на елементите на непарните колони и збирот на
елементите на парните редици. Матрицата не мора да биде квадратна.
#define max 100
int main(){
	int i,j,n,m, a[max][max],sumRed=0,sumKol=0,odg;
	scanf("%d%d", &n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(j%2)
				sumKol+=a[i][j];
			if(i%2==0) 
				sumRed+=a[i][j];
				
		}
		odg = sumKol-sumRed;
		printf("%d" ,odg);
		return 0;
}

*/


/*Да се напише програма која за матрица внесена од тастатура ќе ги замени елементите од главната дијагонала со разликата од максималниот и
минималниот елемент во матрицата. Резултантната матрица да се испечати
на екран.
#define max 100
int main(){
	int i,j,m,n,a[max][max],tempMax,tempMin,raz=0;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	tempMax = a[0][0];
	tempMin = a[0][0];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(a[i][j]>tempMax)
				tempMax=a[i][j];
			if(a[i][j]<tempMin)
				tempMin=a[i][j];
		}
	raz = tempMax - tempMin;
	for(i=0;i<n;i++)
		a[i][i] = raz;
	for(i=0;i<n;i++){
		printf("\n");
		for(j=0;j<m;j++)
			printf("%d\t", a[i][j]);
			printf("\n");
	}
	return 0;
}

*/


/*
#define max 100
int main(){
	int i,j,n,a[max][max],simetricna = 1;
	printf("vnesete golemina na kvadratna matrica\n");
	scanf("%d", &n);
	printf("vnesete elemeti\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i][j]!=a[j][i]){
				simetricna = 0;
				break;
			}
	if(simetricna)
		printf("e simetricna\n");
	else
		printf("ne e simetricna\n");
}

*/