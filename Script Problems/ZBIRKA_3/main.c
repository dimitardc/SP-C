#include <stdio.h>
#include <math.h>

/*
int faktoriel(int n){
	if(n==0)
		return 1;
	return n * faktoriel(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", faktoriel(n));
	return 0;
}
*/

/*
int stepen(int a,int n){
	if(n==0)
		return 1;
	return a*stepen(a,n-1);
}


int main(){
	int a,n;
	scanf("%d%d",&a, &n);
	stepen(a,n);
	printf("%d",stepen(a,n));
}
*/

/*
int zbir(int n){
	if(n==0)
		return n;
	return (n%10 + zbir(n/10));
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d", zbir(n));
}
*/
/*
int NZD(int m, int n){
	if(m==n)
		return m;
	else{
		if(m<n)
			return NZD(n-m,m);
		else
			return NZD(m-n,n);
	}
}

int main(){
	int n,m;
	scanf("%d%d", &m,&n);
	printf("NZD = %d\n",NZD(m,n));
	printf("NZS = %d\n",m*n/NZD(m,n));
}
*/

/*
int zbir(int n){
	int temp;
	temp = n%100 + n/100;
	return temp;
}


int main(){
	int i,temp,counter=0;
	for(i=1000;i<=9999;i++){
		temp = zbir(i);
		if(i%temp==0){
			printf("%d\n", i);
			counter++;
		}
	}
	printf("vk = %d\n", counter);
}

*/

/*
int prost(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 1;
	return 0;
}

int pogolem(int n){
	n++;
	while(prost(n))
		++n;
	return n;
}

int main(){
	int n,temp;
	scanf("%d", &n);
	temp = pogolem(n);
	printf("%d - %d = %d",temp,n,temp-n);
}

*/

/*
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
	for(i=2;i<=999;i++)
		if(isPrim(sumPrim(i))){
			printf("%d\t", i);
			counter++;
		}
	printf("\nvkupno : %d\n",counter);
}
*/

/*
int prosti(int n){
	int i;
	// ovaa verzija na primFinder ima i<n(a ne i<=n) bidejki ako samiot broj se podeli so sebesi stalno ke vrakja 0
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
/*
float stepen(float x, int n){
	if(n==0)
		return 1;
	else
		return x*stepen(x,n-1);
}


float funkcija(float x, int n){
	float vrednost;
	if(x<0)
		vrednost=-stepen(x,n-1)/(n-1)+stepen(x,n+1)/(n+1);
	else
		vrednost=x+stepen(x,n)/n-stepen(x,n+2)/(n+2);
	return vrednost;
}


int main(){
	float x;
	int n;
	scanf("%d", &n);
	for(x=-4;x<=4;x+=0.1){
		if((x==0) || (x==1) || (x==-1) || (x==-2))
			break;
		else
			printf("%.2f\t%.3f\n", x, funkcija(x,n));
	}
	return 0;
}

*/

/*
float izraz(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return (izraz(n-1)*(n-1)/n + izraz(n-2)/n);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("x_%d = %.3f",n,izraz(n));
}
*/

/*
int opagja(int n){
	int cifra,temp=n%10,vk=0;
	while(n/10){
		n/=10;
		cifra=n%10;
		if(temp<cifra){
			temp = cifra;
			vk++;
		}
		else
			return 0;
	}
	return vk;
}

int raste(int n){
	int cifra,temp=n%10,vk=0;
	while(n/10){
		n/=10;
		cifra=n%10;
		if(temp>cifra){
			temp = cifra;
			vk++;
		}
		else
			return 0;
	}
	return vk;
}

int main(){
	int n;
	scanf("%d", &n);
	if(raste(n))
		printf("brojot monotono raste\n");
	else{
		if(opagja(n))
			printf("brojot monotono opagja\n");
		else
			printf("brojot ne rasti i ne opagja\n");
	}
	return 0;
}

*/

/*
float stepen(float a,int x){
	if(x==0)
		return 1;
	else
		return a*stepen(a,x-1);
}

int faktoriel(int a){
	if(a==0)
		return 1;
	return a*faktoriel(a-1);
}

float konverzija(int a){
	return (a*3.14)/180;
}


float izraz(int n){
	int i;
	float zbir=0.0;
	for(i=1;i<=15;i++)
		//prviot mnozitel ni e samo za znakot/vtoriot za imenitelot/tretiot za broitelot
		zbir+=stepen(-1.0,i-1)*stepen(konverzija(n),2*i-1)/faktoriel(2*i-1);
	return zbir;
}

int main(){
	int agol;
	scanf("%d", &agol);
	printf("\nsin(%d)= %.4f",agol, izraz(agol));
}

*/
/*
int proverka(int n){
	int i,razlika=n,vk=0;
	for(i=1;i<=n;i+=2){
		razlika-=i;
		vk++;
		if(razlika<=0)
			break;
	}
	if(razlika==0)
		return vk;
	return 0;
}


int main(){
	int n;
	scanf("%d", &n);
	if(proverka(n))
		printf("e poln kvardat");
	else
		printf("ne e poln kvadrat");
}
*/

/*
int prevrten(int n){
	int cifra,broj=0;
	while(n){
		cifra=n%10;
		n/=10;
		broj=10*broj+cifra;
	}
	return broj;
}

int main(){
	int n,broj=0;
	scanf("%d", &n);
	broj = n+prevrten(n);
	if(broj==prevrten(broj))
		printf("brojot e nice");
	else
		printf("brojot ne e nice");
		
}
*/

/*
int prevrten(int n, int prev){
	prev+=n%10;
	n/=10;
	if(n!=0)
		prev = prevrten(n,prev*10);
	return prev;
}

int main(){
	int n,broj=0;
	scanf("%d", &n);
	broj = n+prevrten(n,0);
	if(broj==prevrten(broj,0))
		printf("brojot e nice\n");
	else
		printf("brojot ne e nice\n");
}
*/

/*
int broj(int n){
	if (n<10) 
		return 1;
	else 
		return 1+broj(n/10);
}

int main (){
	int n;
	while(scanf("%d",&n)){
		if(broj(n)%2==0) 
			printf("\t%d\n",n);
	}
	return 0;
}
*/

/*
#define MAX 100

int maks(int a[],int n){
	int next,max = a[n];
	if(n==1)
		return a[1];
	else{
		next = maks(a,n-1);
		if(next>max)
			return next;
		else
			return max;
	}
}

int main(){
	int n,i, a[MAX];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	printf("maks e %d", maks(a,n));
	return 0;
}
*/

/*
#define MAX 100

float izraz(int a[], int n){
	int i,zbir=0;
	float SV,z=0; // SV=sredna vrednost
	for(i=0;i<n;i++)
		zbir+=a[i];
	SV=(float) zbir/n;
	for(i=0;i<n;i++)
		z+=(a[i]-SV)*(a[i]-SV);
	return sqrt(z/n);
}

int main(){
	int i,n,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("standartna devijacija e %.5f", izraz(a,n));
}
*/
/*
int faktoriel(int i){
	if(i==0)
		return 1;
	return i*faktoriel(i-1);
}

int stepen(int a ,int n){
	if(n==0)
		return 1;
	else
		return a*stepen(a,n-1);
}

int main(){
	int a,i,n;
	float suma=0,z;
	scanf("%d", &a);//vrednost
	scanf("%d", &n);//granica
	for(i=1;i<=n;i++){
		z=0;
		z=(float)stepen(a,n)/faktoriel(i);
		suma+=z;
	}
	printf("sumata e %f", suma);
}
*/

/*
int prva(int n){
	if(n<10)
		return n;
	return prva(n/10);
}

int main(){
	int n;
	scanf("%d", &n);
	if(n%(prva(n)-n%10)==0)
		printf("%d", n);
}
*/
/*
int izraz(int poz){
	if(poz==0)
		return 1;
	return 10*izraz(poz-1);
}

int main(){
	int n,poz;
	scanf("%d", &n);
	scanf("%d", &poz);
	printf("%d", (n%izraz(poz)/izraz(poz-1)));
}
*/

/*~~~~~~~~~~~~~~~~~my version of the one above
int izraz(int n,int poz){
	int temp=n%10;
	if(poz==1)
		return temp;
	return izraz(n/10,poz-1);
}

int main(){
	int n,poz;
	scanf("%d", &n);
	scanf("%d", &poz);
	printf("%d", izraz(n,poz));
}

*/
/*
int izraz(int n){
	if(n<10)
		return 0;
	return n%10 + izraz(n/100)
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", izraz(n));
}
*/

/*
#define MAX 100

int izraz(int a[],int n){
	int i,parni=0,neparni=0;
	for(i=n;i>0;i--){
		if(i%2==0)
			parni+=a[i];
		else
			neparni+=a[i];
	}
	if(neparni>parni)
		return 1;
	else
		return 0;
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	if(izraz(a,n))
		printf("uslovot e ispolnet");
	else
		printf("uslovot ne eispolet");
}
*/
/*
#define MAX 100

int izraz(int a[],int n){
	int i;
	float SV,suma=0,najblizok=0,min;
	for(i=0;i<n;i++)
		suma+=a[i];
	SV=(float)suma/n;
	najblizok=a[0];
	min = abs(SV-a[0]);
	for(i=1;i<n;i++){
		if(abs(SV-a[i])<min){
			min = abs(SV-a[i]);
			najblizok = a[i];
		}
	}
	return najblizok;
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("najblizok do srednata vrednost e %d", izraz(a,n));
}
*/
/*
#define MAX 100

void promena(int a[],int n){
	int i,d=(n+1)/2,temp;
	for(i=1;i<=n/2;i++){
		temp = a[i];
		a[i]=a[d+i];
		a[d+i]=temp;
	}
	for(i=1;i<=n;i++) 
		printf("%d",a[i]);
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n;i++) 
		printf("%d",a[i]);
	printf("\n");
	promena(a,n);
}
*/
/*
#define MAX 100
int proverka(int a[],int n){
	int i;
	for(i=0;i<n/2;i++)
		if(a[i]!=a[n-i-1])
			return 0;
	return 1;
}


int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	if(proverka(a,n))
		printf("uslovot e ispolnet");
	else
		printf("wack");
}
*/
/*
#define MAX 100

void podredi(int a[MAX][MAX] , int n, int m){
	int i,j,p,q,temp;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			for(p=0; p<n; p++)
				for(q=0; q<m; q++)
					if(a[i][j]<a[p][q]){
						temp = a[i][j];
						a[i][j]=a[p][q];
						a[p][q] = temp;
					}
	for (i=0; i<n; i++){
		for (j=0; j<m; j++)
			printf("%d\t",a[i][j]);
		printf("\n\n");
	}
}

int main(){
	int m,n,i,j,a[MAX][MAX];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for (i=0; i<n; i++){
		for (j=0; j<m; j++)
			printf("%d\t",a[i][j]);
		printf("\n\n");
	}
	printf("\n\n");
	podredi(a,n,m);
	return 0;
}
*/
/*
int cifra(int n, int r){
	int digit;
	while(n>r){
		digit=n%10;
		n/=10;
	}
	return digit;
}


int main (){
	int n;
	while (scanf("%d",&n)){
		if ((cifra(n,0)+n%10) == (cifra(n,10)+(n/10)%10)) 
			printf("%d\n",n);
	}
return 0;
}
*/
/*~~~~~~~~~~~~my version of the one above
int izraz(int n){
	int cifra=0;
	static int first = 1;
	if(first){
		while(n>0){
			cifra = n%10;
			n/=10;
		}
		first = 0;
	}
	else{
		while(n>10){
			cifra = n%10;
			n/=10;
		}
		first = 1;
	}
	return cifra;
}

int main (){
	int n;
	while (scanf("%d",&n))
		if(izraz(n) + n%10 == izraz(n) + (n/10)%10)
			printf("%d\n", n);
	return 0;
}
*/
/*
#define MAX 100
float proverka(int a[],int n){
	if(n==1)
		return a[1];
	else{
		float max = fabs(a[n]-a[n-1]);
		float next = proverka(a,n-1);
		if(fabs(a[n-1]-next)>max)
			return fabs(a[n-1]-next);
		return max;
	}
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	printf("%f", proverka(a,n));
}
*/
/*
int prime(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main(){
	int i,q,start,end,counter=0;
	scanf("%d%d", &start, &end);
	for(i = start ; i<=end;i++){
		q = (i%10)*((i/10)%10);
		if(prime(i) && prime(q) && q){
			printf("%d\n", i);
			counter++;
		}
	}
	printf("vk = %d", counter);
}
*/
/*
int broj(int n){
	if(n<100)
		return n;
	return broj(n/10);
}

int main (){
	int n;
	printf("n = "); 
	scanf("%d",&n);
	if (n<1000) 
		printf("Nevaliden broj.\n");
	else{
		if (broj(n) == (n%100)) 
			printf("DA.\n");
		else printf("NE.\n");
	}
return 0;
}
*/
/*
int faktoriel(int n){
	if(n==0)
		return 1;
	return n*faktoriel(n-1);
}


int zbir(int n){
	if(n==1)
		return 1;
	return faktoriel(n)+zbir(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", zbir(n));
}
*/

/*
int proverka(int p, int n){
	if(n%p==0)
		return 1;
	return 0;
}

int main(){
	int n,p;
	scanf("%d", &n);
	p = n;
	while(scanf("%d", &n)){
		if(proverka(n,p))
			printf("%d", n);
		p = n;
	}
}

*/

/*
int prost(int n){
	int i;
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

int palin(int n){
	int broj=0;
	while(n>0){
		broj=broj*10+n%10;
		n/=10;
	}
	return broj;
}

int proverka(int n){
	if(palin(n)==n && prost(n))
		return 1;
	return 0;
}

int main(){
	int n;
	for(n=2;n<1000;n++){
		if(proverka(n))
			printf("%d", n);
	}
	return 0;
}
*/
/*
#define MAX 100
int faktoriel(int n){
	if(n==0)
		return 1;
	return n*faktoriel(n-1);
}

float stepen(int n,int i){
	if(n==0)
		return 1;
	return a*stepen(a,n-1)
}

int main (){
	int suma,z,i,n,a
	scanf("%d%d", &n, &a);
	for(i=0;i<n;i++){
		z=0;
		z = stepen(a,i)/faktoriel(i);
		suma+=z;
	}
}
*/
/*
int funk(int broj, int n){
	if(n==1)
		return broj%10;
	return funk(broj/10,n-=1);
}


int main(){
	int n, broj;
	scanf("%d%d", &broj, &n);
	printf("%d", funk(broj,n));
}
*/
/*
#define MAX 100


void promena(int a[],int n){
	int i,d=(n+1)/2,temp;
	for(i=1;i<=n/2;i++){
		a[i]=a[n/2+1+i];
	}
	for(i=1;i<=n;i++) 
		printf("%d",a[i]);
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=n;i++) 
		printf("%d",a[i]);
	printf("\n");
	promena(a,n);
}
*/
/*
#define MAX 100

int proverka(int a[], int n){
	int i;
	for(i=0;i<n/2;i++){
		if(a[i]!=a[n-1-i])
			return 0;
		else
			return 1;
	}
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	if(proverka(a,n))
		printf("uslovot e zadovolen")
	else
		printf("nahh nigga");
}
*/
/*
int proverka(int n){
	if(n<10)
		return 0;
	if(n<100)
		return n%10;
	return proverka(n/10);
}


int main(){
	int n;
	while(scanf("%d", &n)){
		if(proverka(n)%2==0)
			printf("%d\t", n);
		else
			printf("nahh\n");
	}
}
*/

/*
#define MAX 100

void funk(int a[MAX][MAX], int n ,int m){
	int temp,i,j;
	for(i=0;i<n/2;i++)
		for(j=0;j<m;j++){
			temp = a[i][j];
			a[i][j] = a[n-1-i][j];
			a[n-1-i][j] = temp;
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

int main(){
	int n,i,j,m,a[MAX][MAX];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	funk(a,n,m);
}
*/

/*
int funk(int n){
	if(n<10)
		return n;
	return funk(n/10);
}

int main(){
	int n;
	while(scanf("%d", &n)){
		if((n%10)%2==0 && funk(n)%2==0)
			printf("%d\n", n);
		else
			printf("nope\n");
	}
	
}
*/
/*
int broj (int n){
	if(n<100)
		return n;
	return broj(n/10);
}
int main (){
	int n;
	scanf("%d",&n);
	if (n<1000) 
		printf("Nevaliden broj.\n");
	else{
		if (broj(n) == (n%100)) 
			printf("DA.\n");
		else 
			printf("NE.\n");
	}
return 0;
}
*/

