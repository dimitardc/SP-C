#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>

/*														1
#define MAX 100
void sortMin(int niza[],int size){
	int i,j,temp;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++)
			if(niza[j]>niza[j+1]){
				temp = niza[j];
				niza[j] = niza[j+1];
				niza[j+1] = temp;
			}
	}
	for(i=0;i<5;i++)
		printf("%d ", niza[i]);
}


int poramnet(int a){
	int cifra;
	if(a<=0)
		return 0;
	cifra=a%10;
	if(cifra==9)
		cifra=7;
	return poramnet(a/10)*10+cifra;
}

int main(){
	int i=0,n,temp;
	int niza[MAX];
	while(scanf("%d", &n)){
		temp = poramnet(n);
		niza[i] = temp;
		i++;
	}
	sortMin(niza,i);
	return 0;
}
*/
/*												martin zad
#define MAX 100

int main(){
	int counter,i,j,n,a[MAX][MAX],b[MAX][MAX]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<n;j++){
		counter=1;
		for(i=0;i<n;i++)
			if(a[i][j]==1){
				b[n-counter][j] = 1;
				counter++;
			}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}
*/
/*														Трансформација на матрица
#define MAX 100
int main(){
	int i,j,n;
    float a[MAX][MAX],sumaX=0,sumaY=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%f", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i>j)
				sumaX+=a[i][j];
			if(j+i>n-1)
				sumaY+=a[i][j];
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i==j && i+j==n-1)
				a[i][j] = sumaX + sumaY;
			else if(i+j==n-1)
				a[i][j] = sumaY;
			else if(i==j)
				a[i][j] = sumaX;
			else
				a[i][j] = 0;
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%.1f ", (float)a[i][j]);
		printf("\n");
	}
}
*/
/*												3  my version-doesnt work

#define MAX 100
int pos,prv;

int func(char *a, int n){
	int i,j=n-1,first=1,second=0,counter=0;
	while(!isdigit(a[j]))
		j--;
	pos = j;
	for(i=0;i<=j;i++){
		if(isdigit(a[i])){
			if(first){
				prv = i;
				first = 0;
				second = 1;
			}
		}
		if(second)
			counter++;
	}
	return counter;
}

int main(){
	FILE *fp;
	int max=0,counter,i,j=0;
	char a[MAX], MaxA[MAX];
	if((fp=fopen("text.txt","r"))==NULL){
		printf("nahh");
		return 0;
	}
	while((fgets(a,MAX,fp))!=NULL){
		counter = func(a,strlen(a)); //vrakja rastojanie megju cifrite
		if(counter>max){
			max = counter;
			j=0
			for(i = prv; i<=max ;i++){
				MaxA[j] = a[i];
				j++;
			}
		}
	}
	printf("%s\n", MaxA);
}
*/
/*														4
void func(char *word, int x) {
	if(*word == 0) 
		return;
	if(isalpha(*word)) {
	char first = 'a';
		if(isupper(*word))
			first = 'A';
		*word = first + (*word + x -first) % 26;
	}
	func(word++, x);
}



int main(){
	int i,n,x;
	char a[80];
	scanf("%d %d", &n, &x);
	for(i=0;i<n;i++){
		gets(a);
		func(a,x);
		printf("%s\n", a);
	}
}
*/
/*													Линии
#define MAX 100

int main(){
	int checkpoint=0,i,j,m,n,a[MAX][MAX],redCount=0,kolCount=0,flag=0;
	scanf("%d %d\n", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
        flag = 0;
		for(j=0;j<m;j++){
            if(a[i][j]==1){
				flag++;
            	if(flag>=3)
                    checkpoint = 1;
            }
			if(a[i][j]==0)
				flag=0;
    	}
        if(checkpoint){
            redCount+=1;
            checkpoint = 0;
        }
	}
    checkpoint = 0;
	for(j=0;j<m;j++){
        flag = 0;
		for(i=0;i<n;i++){
			if(a[i][j]==1){
				flag++;
            	if(flag>=3)
                    checkpoint = 1;
            }
			if(a[i][j]==0)
				flag=0;
		}
        if(checkpoint){
            kolCount+=1;
            checkpoint = 0;
        }
	}
	printf("%d", kolCount+redCount);
}
*/

/*														Најдолг ред 
#define MAX 100

int digit(char str[]) { // check if it at least has 2 digits
    int i,d=0;
    for(i=0; i<strlen(str); i++) {
        if(isdigit(str[i]))
            d++;
    }
    if(d>=2) 
		return 1;
    else 
		return 0;
}
void print(char a[]) {
    int i,flag=1,first,last;
    for(i=0; i<strlen(a); i++){
        if(flag) {
            if(isdigit(a[i])){
                first=i;
                flag=0;
            }
        }
        if(isdigit(a[i]))
            last=i;
    }
    int k=0;
    char b[100];
    for(i=first; i<=last; i++){
        b[k]=a[i];
		k++;
	}
    puts(b);
 
}
int main() {
	wtf();
    FILE *f;
    if((f=fopen("text.txt","r"))==NULL) {
        printf("Unable to open");
        return -1;
    }
    int maxlen=0;
    char a[100],str[100];
    while((fgets(str,100,f))!=NULL) {
        int len=strlen(str);
        int n=digit(str);
        if((len>=maxlen)&&(n==1)) {
            maxlen=len;
            strcpy(a,str);
        }
    }
    print(a);
    fclose(f);
    return 0;
}
*/
/*											Датотека со бројки 
int digit(int n){
	while(n>=10)
		n/=10;
	return n;
}

int main(){
	FILE *fp;
	int i,n,x,max,maxN,y;
	fp=fopen("text.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%d", &n);
		if(n==0)
			break;
		max = 0;
		maxN = 0;
		for(i=0;i<n;i++){
			fscanf(fp,"%d", &x);
			y = digit(x);
			if(y>max){
				max = y;
				maxN = x;
			}
		}
		printf("%d\n", maxN);
	}
	fclose(fp);
}
*/
/*												Задача 1
#define MAX 100
int func(int *a, int index, int n){
	int i,suma=0;
	if(index>n)
		return 0;
	else{
		for( i = index ; i<n ; i++)
			suma+=*(a+i);
	}
	printf("%d", suma);
}

int main(){
	int i,n,a[MAX],index;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &index);
	func(a,index,n);
}
*/
/*											Задача 2
int main(){

	int i,j,n,m,suma1=0,suma2=0,suma3=0,suma4=0,a,b;
    scanf("%d%d",&n,&m);
    int niza[n][m];
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
            scanf("%d",&niza[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    //1
    
    for(i=0;i<a;i++){
        for(j=b;j<m;j++){
            suma1+=niza[i][j]; 
        }
    }
    
    //2
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            suma2+=niza[i][j];
        }
    }
    
    //3
    for(i=a;i<n;i++){
        for(j=0;j<b;j++){
        	suma3+=niza[i][j];
        }
    }
    //4
    for(i=a;i<n;i++){
        for(j=b;j<m;j++){
            suma4+=niza[i][j];
        }
    }
    
    printf("%d %d %d %d",suma1,suma2,suma3,suma4);

return 0;
}
*/
/*											Задача 3
int main() {
    wf();
	FILE *fp;
    char shifra[MAX],maxshifra[MAX];
    int sum,tip,maxtip;
	float koef,maxkoef,d=1;
   	fp=fopen("livce.txt", "r");
    fscanf(fp,"%d", &sum);
    d=sum;
    maxkoef =0;
    while((fscanf(fp,"%s%d%f", shifra,&tip,&koef))!=EOF){
        if(koef>maxkoef){
        	maxkoef = koef;
            strcpy(maxshifra,shifra);
            maxtip = tip;
        }
        d=d*koef;
    
    }
    
    printf("%s %d %.2f\n", maxshifra,maxtip,maxkoef);
    printf("%.2f", d);
	return 0;    

}
*/
/*										Непрекината дропка А
#define MAX 100

float func(int a[],int n,int i){
    if(i == n-1)
        return a[i];
   	else
        return a[i] + 1/func(a,n,i+1);
}

int main(){
    int i,n,a[MAX];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    float v;
    v=func(a,n,0);
	printf("%f", v);
}
*/

/*									Премести блок А
#define MAX 100

int main(){
	int p,q,n,i,j,a[MAX][MAX],b[MAX][MAX];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<2*n;j++)
        	scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        	b[i][j] = a[i][j];

    for(i=0,p=n ; p<2*n ; i++,p++)
        for(j=n,q=0 ; q<n ; j++,q++)
    		b[p][q] = a[i][j];

    for(i=0;i<2*n;i++){
        for(j=0;j<n;j++)
       	 	printf("%d ", b[i][j]);
        printf("\n");
    }
}
*/
/*											Подредени цифри 
#define MAX 100

void sort(char *a){
	int i,j,k=0,b[MAX];
	for(i=0;i<strlen(a);i++){
		if(isdigit(a[i])){
			b[k] = a[i] - '0';
			k++;
		}
	}
	b[k] = '\0';
	for(i=0 ; i<k-1;i++){
		for(j=i+1 ; j<k ; j++){
			if(b[i]>b[j]){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for(i=0;i<k;i++)
		printf("%d", b[i]);
}

int main(){
    FILE *fp;
    int i,k;
    char a[MAX];
    fp = fopen("text.txt","r");
    while((fgets(a,MAX,fp))!=NULL){
		k=0;
		for(i=0;i<strlen(a);i++)
			if(isdigit(a[i]))
				k++;
		printf("%d:", k);
		sort(a);
		printf("\n");
    }
	fclose(fp);
    return 0;
}
*/
/*									Рекурзија 1
int func(int n,int flag){
	int max = flag;
    int temp=0;
    if(n==0)
        return max;
    else{
    	temp=n%10;
        if(temp>max)
            max = temp;
    }
	return func(n/10,max);
}


int main(){
	int n;
    while(scanf("%d", &n)){
    	printf("%d\n", func(n,0));
    }
	return 0;
}
*/
/*										Податоци my version
#define MAX 80

char znak1, znak2;

void func(char *a){
	int k=0,i,j,counter=0,tempI,tempJ,n=strlen(a);
    char b[MAX];
    for(i=0;i<n;i++)
        if(a[i]==znak1)
        	tempI = i+1;
    for(i=n-1;i>0;i--)
        if(a[i]==znak2)
        	tempJ = i-1;
	for(i=tempI;i<=tempJ;i++,k++)
        b[k] = a[i];
    b[k] = '\0';
    printf("%s\n", b);
}


int main() {
    wtf();
    FILE *fp;
    char a[MAX];
    scanf(" %c%c", &znak1, &znak2);
    fp = fopen("podatoci.txt","r");
    while(fgets(a,MAX,fp)!=NULL){
		func(a);
		
    }
    return 0;
}
*/
/*											Податоци
#define MAX 80

void podniza(char a[],int z1,int z2){
	int i,poc,kraj,pf=1,pk=1;
	char b[MAX];
	for(i=0;i<strlen(a);i++){
		if(pf==1)
			if(a[i]==z1){
				poc = i;
				pf = 0;
			}
		if(pk==1)
			if(a[i]==z2){
				kraj = i;
				pk = 0;
			}
	}
	int k = 0;
	for(i = poc+1;i<kraj;i++){
		b[k] = a[i];
		printf("%c", b[k]);
		k++;
	}
}

int main(){
	//wtf();
	getchar();
	char a[MAX];
	char z1,z2;
	FILE *fp;
	fp = fopen("podatoci.txt", "r");
	z1 = getchar();
	z2 = getchar();
	while((fgets(a,MAX,fp))!=NULL){
		podniza(a,z1,z2);
		printf("\n");
	}
	fclose(fp);
	return 0;
}
*/
/*
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX];
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			a[i][j] = i+j;
	for(i=0;i<n+2;i++){
		for(j=0;j<m+2;j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	
}
*/
/*
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX] = {0},b[MAX][MAX] = {0};
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			a[i][j] = i+j;
			
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			b[i][j] = a[i][j+1] + a[i][j-1] + a[i+1][j] + a[i-1][j];
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++)
			printf("%d\t" ,b[i][j]);
		printf("\n");
	}
}
*/
/*
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX],Lzbir = 0,Dzbir = 0;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);	
	for(i=0;i<n;i++)
		for(j=0;j<m/2;j++)
			if(a[i][j]%2==0)
				Lzbir+=a[i][j];
	for(i=0;i<n;i++)
		for(j=(m+1)/2;j<m;j++)
			if(a[i][j]%2==1)
				Dzbir+=a[i][j];
	if(Lzbir == Dzbir)
		printf("nice\n");
	else
		printf("not nice\n");
}
*/

/*
int main(){
	int i,j,n,a[MAX][MAX],zbir=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		if(i%2==0)
			for(j=1;j<n;j+=2)
				zbir+=a[i][j];
		else
			for(j=0;j<n;j+=2)
				zbir+=a[i][j];
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i+j == n-1)
				a[i][j] = zbir;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

}
*/
/*
int func(int m){
	if(m==0)
		return 0;
	int r = func(m/10);
	int c = m%10;
	if(c<5){
		printf("%d", c);
		r+=1;
	}
	return r;
	
}

int main(){
	int m,n,i,flag;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		flag = func(m);
		printf("  %d\n", flag);
	}
	return 0;
}
*/
/*
int count(int c){
	int broj=1;
	while(c>0){
		broj*=10;
		c/=10;
	}
	return broj;
}
*/
/*
int count(int c){
	if(c==0)
		return 1;
	return 10* count(c/10);
}


int func(int a, int b, int c){
	int counter=0;
	while(a>0){
		if(a%c==b){
			counter++;
			a/=c;
		}
		else a/=10;
	}
	return counter;
}

int main(){
	int a,b,c,n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &a, &b);
		c = count(b);
		printf("%d", func(a,b,c));
	}
}
*/

/*
int func(int a, int b, int c){
	if(a>b){
		if(a>c)
			return a;
		else if(b>c)
			return b;
		else 
			return c;
	}
	else if(b>c){
		if(b>a)
			return b;
		else if(c>a)
			return c;
		else 
			return a;
	}
	else if(c>a){
		if(c>b)
			return c;
		else if(a>b)
			return a;
		else 
			return b;
	}
}

int main(){
	int a,b,c,n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d%d", &a, &b, &c);
		printf("%d", func(a,b,c));
	}
}
*/
/*
int func(int a, int b, int c){
		if(a>=b && a>=c)
			return a;
		if(b>a)
			return func(b,a,c);
		if(c>a)
			return func(c,b,a);
}


int main(){
	int a,b,c,n,i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d%d", &a, &b, &c);
		printf("%d", func(a,b,c));
	}
}
*/
/*
#define MAX 100

void func(int a[], int start, int end){
	int temp=0;
	if(start<end/2){
		temp = a[start];
		a[start] = a[end-start-1];
		a[end-start-1] = temp;
		return func (a,start+1,end);
		}
}


int main(){
	int i,n,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	func(a,0,n);
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}
*/
/*
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX]={0},b[MAX][MAX]={0},zbir=0;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	for(i=1;i<=n;i++){
		zbir = 0;
		for(j=1;j<=m;j++){
			zbir+=a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i-1][j];
			if(zbir>a[i][j])
				b[i-1][j-1] = zbir;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ", b[i][j]);
		printf("\n");
	}
}
*/
/*
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX],zbirGore=0,zbirDole=0,temp;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0 ; i<n/2 ; i++){
		zbirGore = 0;
		zbirDole = 0;
		for(j=0;j<m;j++){
			zbirGore +=a[i][j];
			zbirDole +=a[n-i-1][j];
		}
		if(zbirGore>zbirDole){
			for(j=0;j<m;j++){
				temp = a[i][j];
				a[i][j] = a[n-i-1][j];
				a[n-i-1][j] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}
*/
/*
#define MAX 100

int func(char *a){
	int i,n = strlen(a),counter=0,maxcounter=0;
	char temp;
	for(i=0;i<n;i++){
		if(isalpha(a[i])){
			temp = toupper(a[i]);
			if( temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U')
				counter = 0;
			else{
				counter++;
				if(counter>maxcounter)
					maxcounter = counter;
			}
			
		}
	}
	return maxcounter;
}

int main(){
	FILE *fp;
	char a[MAX],b[MAX];
	int max=0;
	fp = fopen("text.txt", "r");
	while((fgets(a,MAX,fp))!=NULL){
		if(func(a)>max){
			max = func(a);
			strcpy(b,a);
		}
	}
	printf("%d\n", max);
	puts(b);
}
*/
/*
#define MAX 100

int func(char *a){
	int i,n = strlen(a),counter=0,maxcounter=0;
	char temp,temp2;
	for(i=0;i<n;i++){
		if(isalpha(a[i])){
			temp = toupper(a[i]);
			temp2 = toupper(a[i+1]);
			if( temp != temp2)
				counter = 0;
			else{
				counter++;
				if(counter>maxcounter)
					maxcounter = counter;
			}
			
		}
	}
	return maxcounter+1;
}

int main(){
	FILE *fp;
	char a[MAX],b[MAX];
	int max=0;
	fp = fopen("text.txt", "r");
	while((fgets(a,MAX,fp))!=NULL){
		if(func(a)>max){
			max = func(a);
			strcpy(b,a);
		}
	}
	printf("%d\n", max);
	puts(b);
}
*/
/*
#define MAX 100

int func(char *a, char ch,int dolzina){
	int i = 0, j = 0;
	while(a[i]){
		if(isalpha(a[i])){
			a[j] = a[i];
			j++;
		}
		i++;
	}
	if(a[0] == a[j-1] && a[0] == ch && a[j-1] == ch){
		for(i=0;i<j;i++)
			printf("%c" ,a[i]);
		printf(" ");
		return 1;
	}
	else 
		return 0;
}

int main(){
	FILE *fp;
	char a[MAX],last,ch;
	int counter=0;
	fp = fopen("text.txt", "r");
	fscanf(fp,"%c", &ch);
	while((fscanf(fp,"%s", a))!=EOF){
		fscanf(fp,"%c", &last);
		int dolzina = strlen(a);
		int c = func(a,ch,dolzina);
		if(c)
			counter++;
		if(last == '\n')
			printf("\n");
	}
	printf("\n%d\n", counter);
}
*/
#define MAX 100


int main(){
	char a[MAX];
	int i,j,k,n = strlen(a);
	gets(a);
	for(i=0;a[i]!='\0';i++)
		for(j=i+1;a[j]!='\0';j++)
			if(a[i] == a[j])
				for(k = j;a[k]!='\0';k++)
					a[k] = a[k+1];
	puts(a);
}