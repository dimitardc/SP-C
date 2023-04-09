#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
/*								1
int func(char *a){
	int i,x=0;
	for(i=0;i<strlen(a);i++){
		if((isdigit(*(a+i))) || ((*(a+i))=='-') || ((*(a+i))=='+'))
			x++;
		else
			break;
	}
	if(x && (*a=='+') && (*(a+4) =='-') && (*(a+7)=='-'))
		return 1;
	else
		return 0;
}

int main(){
	char a[MAX];
	gets(a);
	if((strlen(a))==14 && (func(a)==1))
		printf("validen\n");
	else
		printf("nevaliden\n");	
}
*/
/*								2
#define MAX 100

#define MAX 100

void func(char *a, int n){
	int i,d = (n+1)/2;
	for( i=0 ; i<n/2; i++){
		*(a+d+i) = *(a+i);
	}
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a,strlen(a));
}
*/
/*								3
#define MAX 100
void func(char *a){
	int i,j,k;
	for(i=0 ; a[i]!='\0' ; i++){
		for(j=i+1 ; a[j]!='\0' ; j++ ){
			if(a[j] == a[i]){
				for(k=j ; a[k]!='\0' ; k++)
					a[k] = a[k+1];
			}
		}
	}
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*								4
#define MAX 100
void func(char *a){
	int i,j=0,r=strlen(a);
	char ch;
	for(i=0; *(a+i) != '\0' ;i++){
		ch = a[i];
		if(isspace(ch))
			while(isspace(a[i+1]) && i<r)
				i++;
		a[j] = ch;
		j++;
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*								5
int func(char *a){
	int i,j;
	char ch;
	for(i=0;i<strlen(a);i++){
		ch = a[i];
		if(isdigit(ch)==0){
			a[j] = ch;
			j++;
		}
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*								6
#define MAX 100
void func(char *a){
	int i,j=0;
	char ch;
	for(i=0;i<strlen(a);i++){
		ch = a[i];
		if(isdigit(ch)==0){
			if(isupper(ch))
				ch = tolower(ch);
			else if(islower(ch))
				ch = toupper(ch);
			a[j] = ch;
			j++;
		}
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*								7
int func(char *a, char*b){
	int i,a1=strlen(a),b1=strlen(b),counter=0;;
	if(a1!=b1)
		return -1;
	else{
		for(i=0;i<strlen(a);i++){
			if(a[i]!=b[i])
				counter++;
		}
	}
	if(counter!=0)
		return counter;
	else return  0;
}

int main(){
	char a[MAX],b[MAX];
	gets(a);
	gets(b);
	if(func(a,b)==-1)
		printf("Nizite ne se so ista dolzina.\n");
	if(func(a,b)==0)
		printf("Nizite se identicni.\n");
	if(func(a,b))
		printf("Nizite se razlikuvaat vo %d elementi.\n",func(a,b));
}
*/
/*										8
#define MAX 100

int func(char *a, char *b){
	int i, j, r=strlen(a), q=strlen(b), k=0, x; 
	for(i=0;i<r;i++){
		x=0;
		for(j=0;j<q;j++)
			if(a[i]==b[j])
				x++;
		if(x==0){
			a[k] =a[i];
			k++;
		}
	}
	a[k] = '\0';
	return r - k;
}

int main(){
	char a[MAX],b[MAX];
	gets(a);
	gets(b);
	printf("\n%d isfrleni znaci.\n",func(a,b));
	puts(a);
	return 0;
}
*/
/*								9
int main(){
	char c;
	while((c=getchar()) != EOF){
		if(c == '.')
			break;
		else if(isdigit(c))
			printf("%c", c);
	}
	printf("\n");
}
*/
/*								10
#define MAX 100
int func(char *a, int n){
	int i,d = n/2;
	for(i=0;i<d;i++){
		if(a[i]!=a[n-i-1])
			return 0;
		else
			return 1;
	}
}

int main(){
	char a[MAX];
	gets(a);
	if(func(a,strlen(a)))
		printf("uslovot e zadovolen");
	else
		printf("uslovot ne e zadovolen");
}
*/
/*								11
#define MAX 100
int func(char *a, int n){
	int i,zbirPar=0,zbirNep=0;
	for(i=0;i<n;i++){
		if(i%2==0)
			zbirPar+=a[i];
		else
			zbirNep+=a[i];
	}
	if(zbirPar>zbirNep)
		return 1;
	else
		return 0;
}

int main(){
	char a[MAX];
	gets(a);
	if(func(a,strlen(a)))
		printf("uslovot e zadovolen");
	else
		printf("uslovot ne e zadovolen");
}
*/
/*									12
#define MAX 100

void func(char *a, int n){
	int i,d = (n+1)/2;
	for( i=0 ; i<n/2; i++){
		*(a+i) = *(a+d+i);
	}
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a,strlen(a));
}
*/
/*									13
void func(char *a, int n){
	int i;
	for(i=0;i<n/2;i++)
		a[i]+=a[n-1-i];
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a,strlen(a));
}
*/
/*									14
#define MAX 100

int search(char *a){
	int i, n=strlen(a), x=0;
	for (i=0; i<n; i++){
		if (*(a+i)=='0') 
			return x;
		x++;
	}
	return 0;
}

int main(){
	char niza[MAX];
	printf("Vnesi niza: \n");
	gets(niza);
	printf("Do prvata pojava, %d elementi se razlikuvat od 0.\n",search(niza));
}
*/
/*									15
#define MAX 100

void func(char *a, int n){
	int i,j=0;
	char ch;
	for(i=0;i<n;i++){
		ch = a[i];
		if(isdigit(ch)){
			while(a[i+1]==ch && i<n-1)
				i++;
			a[j] = ch;
			j++;
		}
		else{
			a[j] = ch;
			j++;
		}
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a,strlen(a));
}
*/
/*									16
#define MAX 100

int func(char *a, char c1, char c2){
	int vk=0,i,n=strlen(a);
	for(i=0;i<n;i++)
		if(toupper(a[i])==c1 && toupper(a[i+1]==c2))
			vk++;
	return vk;
}

int main(){
	char a[MAX],c1,c2;
	scanf(" %c", &c1);
	scanf(" %c", &c2);
	gets(a);
	printf("%d pojavi.\n",func(a,c1,c2));
}
*/
/*									17
#define MAX 100

void func(char *a, char c1, char c2){
	int i,n=strlen(a);
	//char ch;
	for(i=0;i<n;i++){
		if(a[i] == c1)
			a[i] = c2;
	}
	puts(a);
}

int main(){
	char a[MAX],c1,c2;
	gets(a);
	scanf("%c %c", &c1, &c2);
	//scanf("%c", &c2);
	func(a,c1,c2);
}
*/
/*									18 my version
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a);
	char posleden;
	for(i=0;i<n;i++){
		if(isspace(a[i+1])){
			posleden = a[i];
			if(posleden == 'i' || posleden == 'I')
				counter++;
		}
	}
	printf("%d", counter);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}	
*/
/*										19
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a),posledna,vozbor=0;
	for(i=0;i<n;i++){
		if(isalnum(a[i])){
			if(!(vozbor))
				vozbor=1;
			posledna=a[i];
		}
		else if(vozbor){
			if(toupper(posledna)=='I')
				counter++;
			vozbor = 0;
		}
	}
	printf("%d", counter);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/

/*									20
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a),flag=0;
	for(i=0;i<n;i++){
		if(isalnum(a[i])){
			if(!flag){
				flag=1;
				if(a[i] == 'a' || a[i] == 'A')
					counter++;
			}
		}
		else if(flag)
				flag = 0;
	}
	printf("%d", counter); 
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/

/*									20 my version
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a);
	for(i=0;i<n;i++)
		if(isspace(a[i]) && isalnum(a[i+1]))
			counter++;
	printf("%d", counter+1); 
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*									21
#define MAX 100
void func( char *a, char *b, char *c, int br){
	int a1=strlen(a),b1=strlen(b),i,j;
	for(i=0;i<br;i++){
		c[j] = a[i];
		j++;
	}
	for(i=0;i<b1;i++){
		c[j] = b[i];
		j++;
	}
	for(i=br;i<a1;i++){
		c[j] = a[i];
		j++;
	}
	c[j] = '\0';
	puts(c);
}

int main(){
	char a[MAX],b[MAX],c[MAX];
	int n;
	gets(a);
	gets(b);
	gets(c);
	scanf("%d", &n);
	func(a,b,c,n);
}
*/
/*									22
#define MAX 100

void func(char *a, char *b, int k, int n){
	int i,j=0,len=strlen(a);
	for(i=0;i<len;i++){
		if(i==k-1)
			while(i<n+k-1)
				i++;
		b[j] = a[i];
		j++;
	}
	b[j] = '\0';
	puts(b);
}

int main(){
	char a[MAX],b[MAX];
	int n,k;
	gets(a);
	scanf("%d", &n);
	scanf("%d", &k);
	func(a,b,n,k);
}
*/
/*
#define MAX 100									25

void func(char *a,int n, int k){
	int i,j=0;
	for(i=k-1;i<n+k-1;i++){
		a[j] = a[i];
		j++;
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	int n,k;
	gets(a);
	scanf("%d", &n);
	scanf("%d", &k);
	func(a,n,k);
}
*/
//																		revision
/*												3
#define MAX 100

void func(char *a){
	int i,j,k,n=strlen(a);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				for(k=j;k<n;k++)
					a[k] = a[k+1];
	a[k] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	return 0;
}
*/

/*												4
#define MAX 100
void func(char *a){
	int i,j=0,d = strlen(a);
	char ch;
	for(i=0;i<d;i++){
		ch = a[i];
		if(isspace(ch))
			while( (isspace(a[i+1])) && i<d)
				i++;
		a[j] = ch;
		j++;
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	return 0;
}
*/
/*											space remover
#define MAX 100
void func(char *a){
	int i,j=0,d = strlen(a);
	for(i=0;i<d;i++)
		if(!isspace(a[i])){
			a[j] = a[i];
			j++;
		}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	return 0;
}
*/
/*											5
#define MAX 100
void func(char *a){
	int i,j=0,d = strlen(a);
	for(i=0;i<d;i++)
		if(!isdigit(a[i])){
			a[j] = a[i];
			j++;
		}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	return 0;
}
*/
/*												6
#define MAX 100
void func(char *a){
	int i,j=0;
	for(i=0;i<strlen(a);i++){
		if(isalpha(a[i])){
			if(isupper(a[i]))
				a[i] = tolower(a[i]);
			else if(islower(a[i]))
				a[i] = toupper(a[i]);
			a[j] = a[i];
			j++;
		}
	}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/
/*										8
#define MAX 100

int func(char *a, char *b){
	int i, j, r=strlen(a), q=strlen(b), k=0, x; 
	for(i=0;i<r;i++){
		x=1;
		for(j=0;j<q;j++)
			if(a[i]==b[j])
				x = 0;
		if(x==1){
			a[k] =a[i];
			k++;
		}
	}
	a[k] = '\0';
	return r - k;
}

int main(){
	char a[MAX],b[MAX];
	gets(a);
	gets(b);
	printf("\n%d isfrleni znaci.\n",func(a,b));
	puts(a);
	return 0;
}
*/
/*											19
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a),flag = 1;
	char prv;
	for(i=0;i<n;i++){
		if(isalnum(a[i])){
			if(flag){
				prv = a[i];
				if(prv == 'A' || prv == 'a')
					counter++;
				flag = 0;
			}
		}
		else if(isspace(a[i]))
			flag  = 1;
	}
	printf("%d", counter);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/

/*									20 my version
#define MAX 100
void func(char *a){
	int i,counter=0,n=strlen(a);
	for(i=0;i<n;i++)
		if(isspace(a[i]) && isalnum(a[i+1]))
			counter++;
	printf("%d", counter+1); 
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
}
*/


#define MAX 100
void func(char *a){
	int i,j=0,d = strlen(a);
	for(i=0;i<d;i++)
		if(!isspace(a[i])){
			a[j] = a[i];
			j++;
		}
	a[j] = '\0';
	puts(a);
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	return 0;
}