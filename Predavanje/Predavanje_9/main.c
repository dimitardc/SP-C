#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>



/*
int main() {
	char s1[10] = "foo";
	char *s2 = "bar";
	s2 = s1;
	printf("%s\n", s2);
}
*/
/*									Задача 1
#define MAX 100
int funk(char *s,char c){
	int vk=0;
	while(*s!='\0'){
		if(*s==c) //proveruva vrednosta vo adresata na stringot dali e == c
			vk++;
		s++; 			//zgolemi ja adresata na stringot
	}
	return vk;
}

int main(){
	char s[MAX],c;
	scanf("%s", s);  					//gets(s);
	scanf(" %c", &c);					//can also c=getchar(); but wont work unless above line is gets(s);
	printf("%d\n", funk(s,c));			//funk(s,c) go prakjame stringot so prviot element s[0]
}
*/
/*								Задача 2
#define MAX 100
void funk(char *s){					rekutzija
	static int vk=0;
	if(*s=='\0'){
		printf("%d", vk);
		return 0;
	}
	vk++;
	return funk(s+1);
}


void funk(char *s){					iteracija
	int vk=0;
	while(*s!='\0'){
		vk++;
		s++;
	}
	printf("%d", vk);
}


int main(){
	char s[MAX];
	scanf("%s", s);
	funk(s);
}
*/
/*									Задача 3 my version
#define MAX 100

void funk(char *s, int n, int m){
	int i;
	for(i = n ; m!=0; i++ ){
		printf("%c", s[i]);
		m--;
	}
}


int main(){
	char s[MAX];
	int n,m;
	scanf("%s", s);
	scanf("%d", &n);//pozicija
	scanf("%d", &m);//dolzina
	funk(s,n-1,m);
}
*/
/*							Задача 3
#define MAX 100

int main(){
	char s[MAX], dest[MAX];
	int poz, dolz;
	gets(s);
	scanf("%d %d", &poz, &dolz);
	if(poz<=strlen(s)){
		strncpy(dest,s+poz-1,dolz);				//(x,y,z) - kopira z-elementi od y i go sporeduva zo x
		dest[dolz] = '\0';						//ja zatvarame nizata
		printf("Rezultat: ");
		puts(dest);					//moze i printf("%s", dest);
	}
	else
		printf("Nevaliden vnes, prochitaniot string ima samo %d znaci.\n", strlen(s));
	
	return 0;
}
*/
/*								Задача 4
#define MAX 100
int podstring(char *s1, char *s2) {
	int i;
	int d1 = strlen(s1);
	int d2 = strlen(s2);
	if (d1 > d2)
		return 0;
	for (i = 0; i <= d2 - d1; i++)
			if (strncmp(s1, s2 + i, d1) == 0) // (x,y,z) - sporeduva z-elementi od y i go sporeduva zo x
				return 1;
	return 0;
}
int main() {
	char s1[MAX], s2[MAX];
	gets(s1);
	gets(s2);
	if (podstring(s1, s2))
		printf("%s e podstring na %s\n", s1, s2);
  else
		printf("%s NE e podstring na %s\n", s1, s2);
  return 0;
}
*/
/*
#define MAX 100
int main() {
	int temp;
	char s[MAX];
	gets(s);
	//printf("%s ", s);
	temp = strlen(s);
	printf("%d", temp);
}
*/
/*							Задача 5

#define MAX 100
int funk(char *s, int start, int end){			rekurzija
	if(start>=end)
		return 1;
	if(s[start]==s[end])
		return funk(s,start+1,end-1);
	return 0;
}

int funk2(char *s){								iteracija
	int i,n = strlen(s);
	for(i=0;i<n/2;i++)
		if(s[i]!=s[n-i-1])
			return = 0;
	return 1;
}

int main() {
	char s[MAX];
	gets(s);
	if(funk(s,0,strlen(s)-1))
		printf("e palindrom");
	else
		printf("ne e palindrom");
}
*/
/*									Задача 5-а (за дома)
#define MAX 100

int funk(char *a, int start, int end){
	if(start>=end)
		return 1;
	if(ispunct(a[start]) || ispunct(a[end])){
		if(ispunct(a[start]) && ispunct(a[end]))
			return funk(a,start+1,end-1);
		else if(ispunct(a[start]))
			return funk(a,start+1,end);
		else
			return funk(a,start,end-1);
	}
	else if(isspace(a[start]) || isspace(a[end])){
		if(isspace(a[start]) && isspace(a[end]))
			return funk(a,start+1,end-1);
		else if(isspace(a[start]))
			return funk(a,start+1,end);
		else
			return funk(a,start,end-1);
	}
	else{
		if(isupper(a[start]) || isupper(a[end])){
			if(isupper(a[start]) && isupper(a[end])){
				a[start] = tolower(a[start]);
				a[end] = tolower(a[end]);
				if(a[start]==a[end])
					return funk(a,start+1,end-1);
				else
					return 0;
			}
			else if(isupper(a[start])){
				a[start] = tolower(a[start]);
				if(a[start]==a[end])
					return funk(a,start+1,end-1);
				else
					return 0;
			}
			else{
				a[end] = tolower(a[end]);
				if(a[start]==a[end])
					return funk(a,start+1,end-1);
				else
					return 0;
			}
		}
		if(a[start]==a[end])
			return funk(a,start+1,end-1);
		else
			return 0;
	}
}
int main() {
	char s[MAX];
	gets(s);
	if(funk(s,0,strlen(s)-1))
		printf("DA");
	else
		printf("NE");
}
*/
/*						 Задача 6
#define MAX 100

int e_validna_lozinka(char *str, int n) {
	int i,bukvi = 0, cifri = 0, spec = 0;
	for ( i =0; i<n; i++) {
		if (isalpha(str[i]))
			bukvi++;
		else if (isdigit(str[i]))
			cifri++;
		else
			spec++;
	}
	if(bukvi > 0 && cifri > 0 && spec > 0)
		return 1;
	return 0;
}

int main(){
	char s[MAX];
	gets(s);
	printf("%s ", s);
	if (e_validna_lozinka(s,strlen(s)-1))
		printf("e validna lozinka.");
	else
		printf("NE e validna lozinka.");
  return 0;
}
*/
/*				Задача 7
#define MAX 100
void filter(char *str) {
	int i = 0, j = 0;
	while (str[i] != '\0') {
		if (isalpha(str[i])) {
			if (islower(str[i]))
				str[j] = toupper(str[i]);
			else if (isupper(str[i]))
				str[j] = tolower(str[i]);
			j++;	//se zgolemuva koga ke najde bukva
		}
		i++;
  }
  str[j] = '\0';		//zavisno kolku bukvi ima ke se zatvori nizata da ne printa drugi
}
int main() {
	char s[MAX];
	gets(s);
	filter(s);
	printf("%s\n", s);
	return 0;
}
*/
/*						Задача 8

#define MAX 100
void trim(char *s) {
  char *d = s;
  while (isspace(*s++))
  ;
  s--;
  while (*d++ = *s++)
  ;
  d--;
  while (isspace(*--d))
  *d = 0;
}
int main() {
  char s[MAX];
  gets(s);
  printf("[%s] -> \n", s);
  trim(s);
  printf("[%s]\n", s);
  return 0;
}
*/