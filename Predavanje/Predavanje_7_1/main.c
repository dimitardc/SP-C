#include <stdio.h>
#include <math.h>


/*
int MinP(int a[], int n);
int main(){
	int n, a[20], i;
	printf("Vnesi go n: ");
	scanf("%d",&n);
	for(i=0; i<n; i++) 
		scanf("%d", &a[i]);
	printf("%d \n", MinP(a, n-1));
	return 0;
}

int MinP(int a[], int n){
	if (n > 0){
		int pom = MinP(a,n-1);
		if (a[n]<pom) 
			return a[n];
		return pom;
		}
	else
		return a[n];
}

*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~AUD

/* 1.
int suma(int n){
	if (n==0)
		return 0;
	else
		return n+suma(n-1);
}

int faktoriel (int n){
	if(n==0)
		return 1;
	else
		return n*faktoriel(n-1);
}
int main(){
	int s,n,i,result=0;
	scanf("%d", &n);
	if(n>0){
		for(i=1;i<n;i++){
			s = suma(i);
			result += faktoriel(s);
			printf("%d! + ", s);
		}
		s = suma(n);
		result+=faktoriel(s);
		printf("%d! = %d", s,result);
	}
	else
		printf("wrong, bitch");
	
}
*/




/* 2.
int prostCheck(int n,int i){
	if(n<4) return 1;
	else if(n%i==0) return 0;
	else if(i*i>n) return 1;
	else return prostCheck(n,i+1);
}

int prvProst(int n){
	if(prostCheck(n+1,2))
		return n+1;
	else
		return prvProst(n+1);
}

int main(){
	int n,temp,pogolemProst=0;
	scanf("%d", &n);
	temp = n;
	pogolemProst = prvProst(n);
	printf("%d - %d = %d", pogolemProst,temp,pogolemProst-temp);
}

*/

/* 3.
float xnn(int n){
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return (n-1)*xnn(n-1) / n+xnn(n-2)/2;
	
}

int main(){
	int n;
	scanf("%d", &n);
	printf("xnn(%d) = %.2f\n",n,xnn(n));
}
*/

/* 4.
int funkcija(int n){
	if(n==0)
		return 0;
	return n%10 +funkcija(n/10);
}
*/

/* 5.
int count8(int n) {
	if (n == 0)
		return 0;
	if ((n / 10) % 10 == 8 && n % 10 == 8)
		return 2 + count8(n / 10);
	if (n % 10 == 8)
		return 1 + count8(n / 10);
	return count8(n / 10);

}

int main(){
	int n,temp=0;
	scanf("%d", &n);
	temp = count8(n);
	printf("%d", temp);
}
*/

/*
int NZD(int m,int n){
	if(!n)
		return m;
	return NZD(n,m%n);
}


#define MAX 100
int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	int nzd = NZD(a[0], a[1]);
	for(i=2;i<n;i++)
		nzd = NZD(nzd, a[i]);
	printf("NZD na elementite od nizata e %d", nzd);
}

*/

/*
int NZS(int m,int n){
	if(m%n==0)
		return m;
	return NZS(m*2,n);
}


#define MAX 100
int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	int nzs = NZS(a[0], a[1]);
	for(i=2;i<n;i++)
		nzs = NZS(nzs, a[i]);
	printf("NZS na elementite od nizata e %d ", nzs);
}

*/
/*

int zbir(int a[],int n){
	if(n==0)
		return a[n];
	return a[n] + zbir(a,n-1);
}

#define MAX 100
int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	int sum = zbir(a,n-1);
	printf("sumata e %d", sum);
}
*/

/* ~~~~~~~~~~~ 9 so rekurzija
#define MAX 100

int finder(int a[],int n){
	static int i=0,max=0;
	if(i<=n){
		if(max<a[i])
			max = a[i];
		i++;
		finder(a,n);
	}
	return max;
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	int biggest = finder(a,n-1);
	printf("najgolem e %d", biggest);
}

~~~~~~~~~~~~~~~~ 9. funkcija ama bez rekurzija 
int finder(int a[],int n){
	static int max=0;
	int i;
	for(i=0;i<=n;i++)
		if(max<a[i])
			max = a[i];
	return max;
}
*/