#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

/*												1
#define MAX 100

int func(char *a){
	int suma=0;
	char *c;
	while(*a){
		c = a+1;
		if(isspace(*a) && isalpha(*c))
			suma+=1;
		a++;
	}
	return suma+1;
}

int main(){
	FILE *fp;
	char a[MAX];
	int suma=0;
	if((fp = fopen("test.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	while((fgets(a,MAX,fp)) != NULL)
		if(func(a))
			suma+=func(a);
	printf("%d", suma);
}

*/
/*										5
int main(){
	FILE *fp;
	char c;
	int znak,red;
	if((fp = fopen("test.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	while((c = fgetc(fp))!=EOF){
		if(c!='\n'){
			if(!isspace(c))
				znak++;
		}
		else{
				printf("red %d    znak %d\n", red, znak);
				znak = 0;
				red++;
		}
	}
	printf("red %d    znak %d\n", red, znak);
}
*/
/*											6
#define MAX 100

int func(char *a){
	int suma=0;
	char *c;
	while(*a){
		c = a+1;
		if(isspace(*a) && isalpha(*c))
			suma+=1;
		a++;
	}
	return suma+1;
}

int main(){
	FILE *fp;
	char a[MAX];
	int suma=0,i;
	if((fp = fopen("test.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	for(i=1;((fgets(a,MAX,fp)) != NULL);i++)
		printf("vo %d ima %d\n",i,func(a));
	fclose(fp)
}
*/

/*											7
int main(){
	FILE *fp,*fp2;
	char c;
	if((fp = fopen("test.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	
	if((fp2 = fopen("test2.txt", "w"))==NULL){
		printf("ne raboti");
		return 0;
	}
	
	while ((c=fgetc(fp))!=EOF){
	if(!isspace(c)){
		fprintf(fp2,"%c", c);
	}
	if(c=='\n') 
		fprintf(fp2,"\n");
	}
	fclose(fp);
	fclose(fp2);
}
*/
/*													8
#define MAX 100

int func(char *a){
	int suma=0;
	char *c;
	while(*a){
		c = a+1;
		if(isspace(*a) && isalpha(*c))
			suma+=1;
		a++;
	}
	return suma+1;
}

int main(){
	FILE *fp;
	char a[MAX];
	int red=0,i;
	if((fp = fopen("test.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	for(i=1;((fgets(a,MAX,fp)) != NULL);i++)
		if(func(a)>=10)
			red+=i;
	printf("reda %d", red);
	fclose(fp);
}
*/
/*											word counter easiet so far
#define MAX 100

int main(){
	FILE *fp;
	char a[MAX];
	int counter = 0;
	if((fp = fopen("text.txt", "r"))==NULL){
		printf("ne raboti");
		return 0;
	}
	while(fscanf(fp,"%s", a)!=EOF)
		counter++;
	printf("%d", counter);
}
*/

/*										3
int main(){
	FILE *fp;
	char c,prva,posledna;
	int dolzin=0,fla=0,vk=0;
	
	fp = fopen("text.txt", "r");
	while(c=getc(fp)!=EOF){
		if(isalpha(c)){
			if(!flag){
				prv = c;
				flag =1;
			}
			dolzina++;
			posleden = c;
			}
		else
			if(flag){
					flag = 0;
					if(dolzina>3 && toupper(prva)==toupper(posledna))
						vk++;
					dolzina = 0;
			}
	}
	if(flag){
		if(dolzina>3 && toupper(prva)==toupper(posledna))
			vk++;
	}
	printf("%d vkupno\n", vk);
}
*/
/*											12
#define MAX 100

int func(char *a){
	int i,counter=0,n=strlen(a);
	for(i=0;i<n;i++)
		if(isdigit(a[i]))
			counter++;
	return counter;
}

int main(){
	FILE *fp;
	int i;
	char a[MAX];
	fp=fopen("text.txt","r");
	for(i=1 ; (fgets(a,MAX,fp))!=NULL;i++){
		if(func(a)>20)
			printf("%d\n", i);
	}
}
*/
/*											13
#define MAX 100

int func(char *a){
	int i,counter=0,n=strlen(a);
	for(i=0;i<n;i++)
		if(isupper(a[i]))
			counter++;
	return counter;
}

int main(){
	FILE *fp;
	int i;
	char a[MAX];
	fp=fopen("text.txt","r");
	for(i=1 ; (fgets(a,MAX,fp))!=NULL;i++){
		if(func(a)>5){
			printf("%d\n", i);
			puts(a);
		}
	}
}
*/
/*									14
#define MAX 100

int func(char *a){
	int i,n=strlen(a);
	for(i=0;i<n;i++)
		if(!isalpha(a[i]))
			return 0;
	return 1;
}

int main(){
	FILE *fp;
	char a[MAX];
	fp=fopen("text.txt","r");
	while((fscanf(fp,"%s",a))!=EOF){
		if(func(a)){
			 puts(a);
		}
	}
}
*/

/*								15
#define MAX 100

int func(char *a){
	int i,n=strlen(a),counter=0;
	for(i=0;i<n;i++)
		if(isalpha(a[i]))
			if((toupper(a[i])) == 'A' || (toupper(a[i]))=='E' || (toupper(a[i]))=='I' || (toupper(a[i]))=='O' || (toupper(a[i]))=='U')
				counter++;
	return counter;
}

int main(){
	FILE *fp;
	char a[MAX],b[MAX];
	int max = 0,temp;
	fp=fopen("text.txt","r");
	while((fscanf(fp,"%s",a))!=EOF){
		temp = func(a);
		if(temp>max){
			max = temp;
			strcpy(b,a);
		}
	}
	puts(b);
}
*/
/*												ne e od zbirka msm deka e od aud nz lol
#define MAX 100

int func(char *a){
	int i,n=strlen(a),flag=1;
	char first,last;
	for(i=0;i<n;i++){
		if(isalpha(a[i]))
			if(flag){
				first = a[i];
				flag = 0;
			}
			last = a[i];
		}
	if(n>3 && toupper(last) == toupper(first))
		return 1;
	else
		return 0;
}

int main(){
	FILE *fp;
	char a[MAX];
	fp=fopen("text.txt","r");
	while((fscanf(fp,"%s",a))!=EOF){
		if(func(a))
			puts(a);
	}
	fclose(fp);
	return 0;
}
*/
/*														16
#define MAX 100

int func(char *a){
	int i,n=strlen(a),counter=0;
	for(i=0;i<n;i++)
		if(isalpha(a[i]))
			if((toupper(a[i])) == 'A' || (toupper(a[i]))=='E' || (toupper(a[i]))=='I' || (toupper(a[i]))=='O' || (toupper(a[i]))=='U')
				counter++;
	return counter;
}

int main(){
	FILE *fp;
	char a[MAX];
	int temp;
	fp=fopen("text.txt","r");
	while((fgets(a,MAX,fp))!=NULL){
		temp = func(a);
		if(temp>10){
			printf("%s", a);
		}
	}
	printf("\n");
	fclose(fp);
	return 0;
}
*/
/*											17
#define MAX 100

int func(char *a){
	int i,n=strlen(a),flag=1,CP1=0,CP2=0,CP3=0;
	char first,last;
	for(i=0;i<n;i++){
		if(isalpha(a[i]))
			if(flag){
				first = a[i];
				flag  = 0;
			}
			last = a[i];
	}
	if((toupper(first)) == 'A' || (toupper(first))=='E' || (toupper(first))=='I' || (toupper(first))=='O' || (toupper(first))=='U')
		CP1 = 1;
	if(!((toupper(last)) == 'A' || (toupper(last))=='E' || (toupper(last))=='I' || (toupper(last))=='O' || (toupper(last))=='U'))
		CP2 = 1;
	if(isalpha(first) && isalpha(last))
		CP3 = 1;
	if(n>5 && n%2==1 && CP1 && CP2 && CP3)
		return 1;
	else
		return 0;
}

int main(){
	FILE *fp;
	char a[MAX];
	fp=fopen("text.txt","r");
	while((fscanf(fp,"%s",a))!=EOF){
		if(func(a))
			puts(a);
	}
	fclose(fp);
	return 0;
}
*/
/*												18
#define MAX 100

void func(char *a){
	int i,n=strlen(a);
	for(i=0;i<=n;i++)
		if(a[i]=='\n')
			a[i]='.';
}

int main(){
	FILE *fp,*fp2;
	char a[MAX];
	fp=fopen("text.txt","r");
	fp2=fopen("text2.txt","w");
	while(fgets(a,MAX,fp)){
		func(a);
		fprintf(fp2,"%s\n", a);
	}
}
*/
/*											19
int main(){
	FILE *fp1,*fp2;
	int isti=1,i=0;
	fp1 = fopen("text.txt", "r");
	fp2 = fopen("text2.txt", "r");
	char c1,c2;
	while(!feof(fp1)){
		c1 = fgetc(fp1);
		c2 = fgetc(fp2);
		if(c1!=c2){
			isti = 0;
			i++;
		}
	}
	if(isti)
		printf("datotekite se ednakvi\n");
	else
		printf("datotekite se razlikuvaat vo %d characters", i);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
*/
/*													20
#define MAX 100

int main(){
	FILE *fp;
	char a[MAX],maxA[MAX];
	int brred=0,brojred = 0,i=0,flag = 1,bukvi = 0,maxbukvi = 0;
	fp = fopen("text.txt", "r");
	while((fgets(a,MAX,fp)) != NULL){
		brred++;
		for(i=0;i<strlen(a);i++){
			if(isalpha(a[i])){
				if(flag)
					flag = 0;
				bukvi++;
			}
			else
				if(!flag){
					flag = 0;
					if(bukvi>maxbukvi){
						maxbukvi = bukvi;
						strcpy(maxA,a);
						brojred=brred;
					}
					bukvi = 0;
			}
		}
	}
	printf("red %d:%s\n",brojred,maxA);
	fclose(fp);
}
*/
/*									21
int main(){
	FILE *fp;
	int counter=0;
	char c;
	fp = fopen("text.txt", "r");
	while((c=fgetc(fp))!=EOF)
		if(isdigit(c))
			if(c == '5')
				counter++;
	printf("%d", counter);
}
*/
/*									22
#define MAX 100

int func(char*a){
	int i,counter=0;
	for(i=0;i<strlen(a);i++)
		if(isdigit(a[i]))
			counter++;
	return counter;
}


int main(){
	FILE *fp;
	char a[MAX];
	int i,temp;
	fp = fopen("text.txt", "r");
	for( i=1 ; (fgets(a,MAX,fp))!=NULL ; i++ ){
		temp  = func(a);
		printf("vo %d red ima %d broevi\n", i, temp);
	}
	
}
*/
/*							26
#define MAX 100

int func(char *a){
	int i,n = strlen(a);
	for(i=0;i<n;i++)
		if(toupper(a[i])!=toupper(a[n-i-1]))
			return 0;
	return 1;
}


int main(){
	FILE *fp;
	int counter=0;
	char a[MAX];
	fp = fopen("text.txt", "r");
	while((fscanf(fp,"%s", a))!=EOF){
		if(func(a)){
			puts(a);
			counter++;
		}
	}
	printf("vk broevi %d", counter);
}
*/

/*										27
#define MAX 100

int func(char*a){
	int i;
	for(i=0;i<strlen(a);i++)
		if((a[i]) == '@' )
			return  1;
	return 0;
}


int main(){
	FILE *fp;
	char a[MAX];
	int i;
	fp = fopen("text.txt", "r");
	for( i=1 ; (fgets(a,MAX,fp))!=NULL ; i++ ){
		if(func(a))
			printf("%d\n", i);
	}
	
}
*/
/*
#define MAX 100

int main(){
	FILE *f1,*f2;
	char c;
	f1 = fopen("text.txt","r");
	f2 = fopen("text2.txt","w");
	while((c=fgetc(f1))!=EOF){
		if(isalpha(c)){
			if(islower(c)){
				c = toupper(c);
				fprintf(f2,"%c", c);
			}
			else if(isupper(c)){
				c  = tolower(c);
				fprintf(f2,"%c", c);
			}
		}
		else
			fprintf(f2,"%c", c);
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
*/
#define MAX 100

int count_char(char *str, char c) {
  int vkupno = 0;
  while (*str != '\0') {
  vkupno += (*str == c);
  str++;
  }
  return vkupno;
}
int main() {
  char s[MAX], c;
  gets(s);
  c = getchar();
  printf("%d\n", count_char(s, c));
  return 0;
}