#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

/*
int main(){
	char niza[80] = "Test za rabota so datoteki";
	char *p = niza;
	int i;
	FILE *fp;
	if((fp = fopen("datoteka", "w"))==NULL){			//otvaranje na datoteka za zapishuvanje
		printf("nemoze da se otvori datoteka");
		return 1;
	}
	while(*p != '\0'){											//zapishuvanje niza na disk
		if(fputc(*p, fp)==EOF){
			printf("greshka pri zapishuvanje");
			return 1;
		}	
		p++;
	}
	fclose(fp);
	if((fp = fopen("datoteka", "r")) == NULL){			//otvaranje na datoteka za citanje
		printf("nemoze da se otvori datoteka");
		return 1;
	}
	for(;;){											//citanje na datoteka
		if((i = fgetc(fp)) == EOF)
			break;
		putchar(i);
	}
	fclose(fp);
}
*/
/*									????
void vpisi(FILE *pdat){
	float x, y;
	char xnaslov[31], ynaslov[31];
	int i=0;
	printf("Vnesi naslov za X kolona: ");
	scanf("%30s",xnaslov);
	printf("Vnesi naslov za Y kolona: ");
	scanf("%30s",ynaslov);
	fprintf(pdat, "%30s%30s\n", xnaslov, ynaslov);
	while(1) {
		printf("Vnesi x%d, y%d : ", i, i);
		if(scanf("%f%f", &x, &y)!=2) 
			break;
		fprintf(pdat, "%30.8f%30.8f\n",x,y);
		i++;
	}
}

int main(){
	FILE *pd;
	if((pd = fopen("Koloni.txt", "w")) == NULL){
		printf("Ne se otvori datotekata");
		return 1;
	}
	else {
		vpisi(pd);
		fclose(pd);
	}
	return 0 ;
}
*/
/*
int main(){
	char prva=0,posledna=0,c;
	FILE *fin;
	int b=0;//brojac na zborovi
	int iw=0;//oznaka deka sme mo zbor
	int len=0;//dolzina na zborot
	if(( fin = fopen("yeet.txt" , "r")) == NULL){
		printf("Ne mozam da ja pronajdam datotekata");
		return 0;
	}
	while((c=fgetc(fin))!=EOF){								//citaj znak po znak
		if(isalpha(c)){
			if(!iw){
				iw = 1;
				prva = c;
			}
			len++;
			posledna = c;
		}
		else{
			if(iw){
				iw = 0;
				if(len>3 && toupper(prva)==toupper(posledna))
					b++;
				len = 0;
			}
		}
	}
	if (iw && len>3 && toupper(prva)==toupper(posledna))
		b++;
	printf("%d zborovi\n",b);
}
*/
/*
int main(){
	FILE *fp;
	char a[5];
	fp = fopen("test123.txt", "r");
	while(!feof(fp)){
		fgets(a , 100 , fp);
		puts(a);
	}
	fclose(fp);
	
}

*/

/*
int main () {
   FILE *fp;
   char c;
   fp = fopen("test123.txt" , "r");				//opening file for reading 
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
	while(1){
		c=fgetc(fp);
		if(feof(fp))
			break;
		printf("%c", c);
   }
   fclose(fp);
   
   return(0);
}
*/
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~AUD

/*									1
int checkbukva(char c){
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else return 0;
}
int samoglaskacheck(char c){
	c = tolower(c);
	if(c == 'a' || c== 'e' || c=='i'|| c=='o' || c=='u')
		return 1;
	else return 0;
}

int main(){
	FILE *fp;
	char c;
	int samoglaska=0,soglaska=0;
	if((fp = fopen("yeet.txt", "r")) == NULL){
		printf("its fucked");
		return -1;
	}
	while((c = fgetc(fp))!=EOF){
		if(checkbukva(c)){
			if(samoglaskacheck(c))
				samoglaska++;
			else
				soglaska++;
		}
	}
	fclose(fp);
	printf("odnosot e %5.2f", (float)samoglaska/soglaska);
}
*/
/*									2
#define MAX 100
int main(){
	char a[MAX];
	FILE *fp,*fp2;
	if((fp = fopen("yeet.txt", "r")) == NULL){
		printf("nahh");
		return -1;
	}
	if((fp2 = fopen("izlez.txt", "w")) == NULL){
		printf("nahh");
		return -1;
	}
	while((fgets(a,MAX,fp))!=NULL){
		int br  = strlen(a);
		fprintf(fp2,"%d\n%s", br , a);
	}
	fclose(fp);
	fclose(fp2);
}
*/
/*										3
#define MAX 100
int main(){
	int i,j,m,n;
	float a[MAX][MAX],b[MAX][MAX];
	FILE *input,*output;
	if((input = fopen("yeet.txt", "r"))==NULL){
		printf("nahh");
		return -1;
	}
	if(!feof(input))
		fscanf(input, "%d %d", &m, &n); // gi cita samo prviot red
	if ((m > MAX) || (n > MAX)) {
		printf("Mnogu golema matrica!");
		return (-1);
	}
	for(i=0;i<m && !feof(input); i++)
		for(j=0;j<n && !feof(input); j++)
			fscanf(input , "%f", &a[i][j]);
	fclose(input);
	if (i != m || j != n) {
		printf("Nema dovolno podatoci vo datotekata!");
		return (-1);
	}
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			b[j][i] = a[i][j];
	if ((output = fopen("matrica2.txt", "w")) == NULL) {
		printf("Datotekata matrica2.txt ne se otvora!\n");
		exit(1);
	}
	fprintf(output, "%d %d\n", n, m);
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			fprintf(output, "%.1f\n", b[i][j]);
	fclose(output);
}
*/
/*												4
int samoglaskaCheck(char c){
	c = tolower(c);
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return 1;
	else return 0;
}

int main(){
	int red=0,samoglaski=0,vk=0;
	char c;
	FILE *fp;
	if((fp = fopen("yeet.txt", "r"))==NULL){
		printf("nope");
		return -1;
	}
	while((c=fgetc(fp))!=EOF){
		if(samoglaskaCheck(c)){
			samoglaski++;
			vk++;
		}		
		if(c=='\n'){
			if(samoglaski>10)
				red++;
			samoglaski = 0;
		}
	}
	if(samoglaski>10)
		red++;
	printf("Vkupno %d reda imaat povekje od 10 samoglaski\n", red);
	printf("Vo datotekata ima vkupno %d samoglaski.\n", vk);
	return 0;
}
*/
/*												5
#define MAX 100
int func(char *a){
	char *c;
	int isti;
	while(*a != '\0'){
		c = a+1;
		isti = 1;
		while(*c !='\0'){
			if(tolower(*c)==tolower(*a))
				isti++;
			c++;
		}
		if(isti>2)
			return 1;
		a++;
	}
	return 0;
}

int main(){
	char a[MAX];
	FILE *fp;
	int brzb=0;
	if((fp = fopen("yeet.txt", "r"))==NULL){
		printf("nope");
		return 0;
	}
	while(fgets(a,MAX,fp)!=NULL){
		if(func(a)){
			puts(a);
			brzb++;
		}
	}
	printf("\nVkupno %d zborovi.\n", brzb);
	fclose(fp);
	return 0;
}
*/
/*													6 my version
#define MAX 100

int func(char *a, char *word){
	int i;
	for(i=0;isalnum(a[i]);i++)
		if(a[i]!=word[i])
			return 0;
	return 1;
}

int main(){
	FILE *fp;
	int counter=0;
	char a[MAX],word[MAX];
	if ((fp = fopen("text.txt", "r")) == NULL) {
		printf("Datotekata ne se otvora!");
		return  0;
	}
	gets(word);
	while(fscanf(fp,"%s", a)!=EOF){
		if(func(a,word))
			counter++;
	}
	printf("zborot %s se pojavuva %d pati\n", word,counter);
}
*/



//													reading
//
//		FILE *fp
//		(c = fgetc(fp)) != EOF 															bukva po pukva so tring
//		fgets(NIZA,MAX,fp)) != NULL														cel string
//		fscanf(fp,"shto sakash da procitash od datoteka", NIZA/argumenti) != EOF				zbor po zbor vo string


//													writting
//
//		fprintf(fp,"shto sakash da napishesh vo datoteka", NIZA/argumenti)
//		fputs(NIZA,fp)
//		fputc(c,fp)


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

/*
int main(){  
	FILE *fp;  
	char a[255];//creating char array to store data of file  
	fp = fopen("test.txt", "r");  
	while(fscanf(fp, "%s", a)!=EOF){  
		printf("%s ", a );  
	}  
	fclose(fp);  
}  


int main(){  
   FILE *fp;  
   char a[255];//creating char array to store data of file  
   fp = fopen("test.txt", "r");  
   while(fgets(a,255,fp)!=NULL){  
		printf("%s", a );  
   }  
   fclose(fp);  
}  
int main(){  
   FILE *fp;  
   char a[255];//creating char array to store data of file
   char c;
   fp = fopen("test.txt", "r");  
   while((c=fgetc(fp))!=EOF){  
		printf("%c", c );  
   }  
   fclose(fp);  
}  
*/
