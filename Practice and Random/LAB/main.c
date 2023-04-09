#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>


/*
int main(){
	float masa;
	float visina;
	scanf("%f%f" , &masa, &visina) ;
	visina/=100;
	float bmi;
	bmi=(masa/(visina*visina)) ;
	printf("%.2f", bmi);
	return 0;
}
*/
/*
int main(){
	int broj;
	scanf("%d", &broj);
	int a;
	a=broj/3600;
	int b;
	b=((broj-a*3600)/60);
	int c;
	c=broj%60;
	printf("%d sekundi se %d casovi, %d minuti i %d sekundi \n" , broj,a,b,c );
	return 0;
}
*/

/*
int main(){
int suma, s5000, s1000, s500, s100, s50, s10, s5, s2, s1;
scanf("%d", &suma);
s5000 = suma/5000;
printf("%d*5000\n", s5000);
s1000 = (suma%5000)/1000;
printf("%d*1000\n", s1000);
s500 = ((suma%5000)%1000)/500;
printf("%d*500\n", s500);
s100 = (((suma%5000)%1000)%500)/100;
printf("%d*100\n", s100);
s50 = ((((suma%5000)%1000)%500)%100)/50;
printf("%d*50\n", s50);
s10 = (((((suma%5000)%1000)%500)%100)%50)/10;
printf("%d*10\n", s10);
s5 = ((((((suma%5000)%1000)%500)%100)%50)%10)/5;
printf("%d*5\n", s5);
s2 = (((((((suma%5000)%1000)%500)%100)%50)%10)%5)/2;
printf("%d*2\n", s2);
s1 = ((((((((suma%5000)%1000)%500)%100)%50)%10)%5)%2)/1;
printf("%d*1\n", s1);
return 0;
}
*/

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~2
int proverka(int n){
	int broj=0;
	while(n){
		broj=10*broj+n%10;
		n/=10;
	}
	return broj;
}

int main(){
	int n;
	scanf("%d", &n);
	if(n==proverka(n))
		printf("brojot e polindrom");
	else
		printf("nop");
}
*/
/*

int main(){
	int m1,s1,m2,s2;
	scanf("%d%d%d%d", &m1, &s1, &m2, &s2);
	if(((m1>=0 && m1<=59) && (s1>=0 && s1<=59)) && ((m2>=0 && m2<=59) && (s2>=0 && s2<=59))){
		printf("DA\n");
		printf("%d %d %d %d\n",m1,m2,s1,s2);
	}
	else
		printf("NE\n");

}
*/
/*
int main(){
	int den,mesec,godina;
    scanf("%d%d%d",&den,&mesec,&godina);
    if(mesec<12 && mesec>1){
		if(den)
	}
	else
		printf("NE");
}
*/
/*
int main(){
	int z,a,b,counter=0,counter2=0;
	float p;
	scanf("%d", &z);
	while(scanf("%d %d", &a, &b)){
		if((a==0&&b==0))
			break;
		if(a+b==z)
			counter++;
		counter2++;
	}
	p=(float)100/counter2;
	printf("vnesotve %d parovi od broevi cii zbir e %d\n", counter, z);
	printf("procentot na parovi so zbir %d e %.2f%%\n", z,p);
}
*/
/*
int main(){
	int n,temp,i,zbir=0,proiz=1;
	float prosek=0,razlika=0;
	scanf("%d", &n);
	temp = n;
	while(temp>0){
		scanf("%d", &i);
		zbir+=i;
		proiz*=i;
		temp--;
	}
	prosek=(float)zbir/n;
	razlika=zbir-prosek;
	printf("%d %d %.2f\n",zbir,proiz,razlika);
}
*/
/*
int main(){
	int i,brojS,index,labP,testoviP,prvkolokP,vtorkolokP,ocena,indexmax=0,maxsum=0,counter=0;
	float sum;
	scanf("%d", &brojS);
	for(i=1;i<=brojS;i++){
		ocena=0;
		sum=0;
		scanf("%d%d%d%d%d", &index, &labP, &testoviP, &prvkolokP, &vtorkolokP);
		sum=(float)labP+testoviP*0.75+prvkolokP*0.35+vtorkolokP*0.40;
		if(sum>=50)
			counter++;
		if(sum<50)             ocena = 5;
		if(sum>=50&&sum<60)    ocena = 6;
		if(sum>=60&&sum<70)    ocena = 7;
		if(sum>=70&&sum<80)    ocena = 8;
		if(sum>=80&&sum<90)    ocena = 9;
		if(sum>=90&&sum<=100)  ocena = 10;
		if(sum>maxsum){
			maxsum = sum;
			indexmax = index;
		}
		printf("%d. %d %.2f %d\n",i,index,sum,ocena);
	}
	printf("Maksimalni poeni ima studentot: %d\n", indexmax);
	printf("Procent na polozeni studenti: %.2f%%\n", ((float)counter/brojS)*100);
}
*/
/*
int proverka(int n,int m){
	int i,counter=0;
	for(i=1;i<=n;i++)
		if(n%i==0)
			counter++;
	if(counter>m)
		return n;
	else
		return proverka(n+1,m);
}


int main(){
	int m,n;
	scanf("%d%d", &n, &m);
	printf("%d\n", proverka(n+1,m));
}
*/
/*

int main(){
	int i,n,m,broj,temp,cifra,temp2,min=0;
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++){
		scanf("%d", &broj);
		min = broj;
		if(broj<min)
			min = broj;
		temp = broj;
		while(temp>0){
			cifra=temp%10;
			temp/=10;
			if(cifra==m && broj==min)
				temp2 = broj;
		}
	}
	printf("%d\n", temp2);
}
*/
/*
int main(){
    int br=0,sum=0,x;
    char c;
    while((c=getchar())!='!')
    {
        if(c>='0'&&c<='9'){
            x=c-'0';
            br=br*10+x;
        }
        else{
            sum+=br;
            br=0;
        }
    }
    printf("%d\n", sum+br);
    return 0;
}
*/
/*
int main(){
	int j,i,n,m,broj,flag,cifra,temp,zbir,max=0,counter,maxZbir=0;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++){
		zbir=0;
		counter=0;
		scanf("%d", &broj);
		temp = broj;
		while(temp>0){
			counter++;
			temp/=10;
		}
		temp = broj;
		for(j=0;j<=counter-1;j++){
			cifra = temp%10;
			flag =cifra * pow(2,j);
			zbir+=flag;
			temp/=10;
		}
		if(broj>max){
			max = broj;
			maxZbir = zbir
		}
		if(zbir>m)
			printf("%d %d\n", broj,zbir);
	}
	printf("Max: %d %d\n", max, maxZbir);
	return 0;
}
*/
/*
int main(){
	int i,masi,kapacitet;
	scanf("%d%d", &masi, &kapacitet);
	for(i=1;i<=masi;i++){
		int first=0,broj=0,NeSortirani=0,index,prethoden_index,razlicen_smer=0,smer,prethoden_smer;
		while(1){
			scanf("%d", &index);
			if(index==0)
				break;
			broj++;
			if(first){
				if(index < prethoden_index)
					NeSortirani=1;
				smer = (index/1000)% 10;
				prethoden_smer = (prethoden_index/1000)%10;
				if(smer!=prethoden_smer)
					razlicen_smer=1;
			}
			prethoden_index=index;
			first=1;
		}
		if(!NeSortirani&&!razlicen_smer&&broj<=kapacitet)
			printf("MASA %d OK\n", i);
		else{
			printf("MASA %d NE E OK\n", i);
			if(broj>kapacitet)
				printf("NADMINAT MASKIMALNIOT BROJ NA STUDENTI NA EDNA MASA\n");
			if(NeSortirani)
				printf("STUDENTITE NE SE PODREDENI\n");
			if(razlicen_smer)
				printf("IMA STUDENTI OD POVEKJE SMEROVI\n");
		}
	}
}
*/

/*
int main(){
	int n,i,broj_R=0,broj_B=0,first=1,ubav=1,pravilen=1;
	char boja,prev_boja='G';
	scanf("%d", &n);
	for(i=1;i<=n+1;i++){
		scanf("%c", &boja);
		if(boja=='R'){
			broj_R++;
			if(!first&&prev_boja=='R')
				ubav=0;
		}
		else if(boja=='B'){
			broj_B++;
			if(!first&&prev_boja=='B')
				ubav=0;
		}
		else if(boja=='G'){
			if(!first && broj_R!=broj_B)
				pravilen = 0;
			first=0;
			broj_R=0;
			broj_B=0;
		}
		prev_boja=boja;
	}
	if(pravilen){
		if(ubav)
			printf("UBAV");
		else
			printf("PRAVILEN");
	}
	else
		printf("NEPRAVILEN");
}
*/

/*
int main(){
	int n,i,j,a;
	scanf("%d%d", &n, &a);
	for(i=0;i<n;i++){
		int broj_dzvezdi=2*i+1,broj_prazni=n-1-i;
		if(a){
			broj_dzvezdi=2*(n-1-i)+1;
			broj_prazni=i;
		}
		for(j=0;j<broj_prazni;j++)
			printf(" ");
		for(j=0;j<broj_dzvezdi;j++)
			printf("*");
		for(j=0;j<broj_prazni;j++)
			printf(" ");
		printf("\n");
    }
}

*/
/*
int main(){
	int broj,j,i,n,m,first=0,second=1,prethoden_broj,razlika,constRazlika,ARIT=1,GEO=1,kolic,constKolic;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d", &broj);
			if(first){
				kolic = broj/prethoden_broj;
				razlika = broj - prethoden_broj;
				if(second){
					constRazlika = razlika;
					constKolic = kolic;
					second = 0;
				}
				if(constRazlika != razlika)
					ARIT = 0;
				if(constKolic != kolic)
					GEO = 0;
			}
			prethoden_broj = broj;
			first=1;
			}
		if(ARIT&&GEO)
			printf("ARITMETICKA I GEOMETRISKA\n");
		else{
			if(ARIT)
				printf("ARITMETICKA\n");
			else if(GEO)
				printf("GEOMETRISKA\n");
			else
				printf("NE E PROGRESIJA\n");
			}
			ARIT=1;
			GEO=1;
			first=0;
			second=1;
		}
	return 0;
}

*/

/*
int main(){
	int n,m,i,counter=0,prim=0,temp2=0,start,temp,cifra,counter2=0;
	float suma=0;
	scanf("%d%d", &m, &n);
	for(start = m+1 ; start<n ; start++ ){
		counter=0;
		prim=0;
		temp2=0;
		for(i=2;i<=start;i++){
			if(start%i==0)
				counter++;
		}
		if(counter<2)
			prim=1;
		temp = start;
		while(temp>0){
			cifra = temp%10;
			temp/=10;
			if(cifra%2==0)
				temp2=1;
		}
		if(prim&&temp2){
			printf("%d\n", start);
			counter2++;
			suma+=start;
		}
	}
	if(counter2==0)
		printf("NEMA\n");
	else
		printf("%.3f",(float)suma/counter2);
}
*/
/*
int main(){
	int i,n,a[100],temp1;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=1;i<n-1;i++){
		if(( a[i-1]>a[i]&&a[i]<a[i+1] ) || ( a[i-1]<a[i] && a[i]>a[i+1] ))
			temp1=1;
		else{
			temp1=0;
			break;
		}
	}
	if(temp1)
		printf("DA\n");
	else
		printf("NE\n");
}
*/
/*
int main(){
	int a[100],i,n;
	char c[10]={'S','T','R','U','K','T','U','R','N','O'};
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]%2==0)
			a[i]=1;
		else
			a[i]=0;
	}
	for(i=0;i<10;i++)
		printf("%c ", c[i]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}
*/
/*
int main(){
    int i,a[100]={0},n,z,m,y;
    scanf("%d",&n);
    scanf("%d",&m);
       for(i=0;i<m;i++)
           a[i]=1;
       for(i=m;i<n;i++){    
           z=0;
           y=0;
           while(y<=m){
              z=z+a[i-y];
              y++;
           }
              a[i]=z;
       }
        for(i=0;i<n-1;i++)
            printf("%d, ",a[i]);
		printf("%d",a[n-1]);
	return 0;
}
*/
/*
#define MAX 100
int main(){
	int i,n,a[MAX]={0},b[MAX]={0},counter=0,counter2=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			a[counter] = a[i];
			counter++;
		}
		else{
			b[counter2] = a[i];
			counter2++;
		}
	}
	for(i=0;i<n-counter;i++)
		printf("%d ", a[i]);
	for(i=0;i<n-counter2;i++)
		printf("%d ", b[i]);
}
*/
/*
#define MAX 100
int main(){
	int n,i,j,m,a[MAX]={0},zbir;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		for(j=0;j<m;j++)
			scanf("%d", &a[j]);
		zbir=0;
		for(j=0;j<m/2;j++)
			if(a[j]==a[m-1-j])
				zbir+=2*a[j];
		printf("%d\n", zbir);
	}
}
*/
/*
int main(){
	int a,b,paren=0,temp;
	scanf("%d%d", &a, &b);
	if(a<=0 || b<=0)
		printf("Invalid input");
	else{
		if(a<b){
			while(a){
				if((b/10)%10 == a%10)
					paren++;
				else
					break;
				b/=100;
				a/=10;
			}
			if(paren)
				printf("PAREN\n");
			else
				printf("NE\n");
		}
		else{
			temp=b;
			b=a;
			a=temp;
			while(a){
				if((b/10)%10 == a%10)
					paren++;
				else
					break;
				b/=100;
				a/=10;
			}
			if(paren)
				printf("PAREN\n");
			else
				printf("NE\n");
		}
	}
}
*/
/*
int main(){
	int n,x,holder1,holder2,cifra1,cifra2,raz=1,temp;
	scanf("%d%d", &n, &x);
	temp=n-1;
	while(temp>=0){
		raz=1;
		holder1=x;
		while(holder1>0){
			cifra1 = holder1%10;
			holder2=temp;
			while(holder2>0){
				cifra2 = holder2%10;
				if(cifra1==cifra2)
					raz=0;
				holder2/=10;
			}
			holder1/=10;
		}
		if(raz){
			printf("%d\n", temp);
			break;
		}
		else
			temp--;
	}
	return 0;
}
*/
/*
int izraz(int n){
	int cifra,broj=0;
	while(n){
		cifra=n%10;
		n/=10;
		broj=10*broj+cifra;
	}
	return broj;
}


int main(){
	int n,temp,counter=0,temp2,flag;
	scanf("%d", &n);
	if(n<=9)
		printf("Brojot ne e validen");
	else{
		n--;
		while(n){
		counter=0;
		temp = n;
		temp2 = n;
		while(temp>0){
			counter++;
			temp/=10;
		}
		flag = izraz(temp2);
		if(flag%counter==0){
			printf("%d", n);
			break;
		}
		else
			n--;
		}
	}
}
*/
/*
int main (){
    char c;
    int zbir=0;
    while(1){
        scanf("%c",&c);
        if(c=='.')
            break;
        if((c>='0')&&(c<='9'))
            zbir+=c-'0';
        if((c>='a')&&(c<='f'))
            zbir+=c-'a'+10;
        if((c>='A')&&(c<='F'))
            zbir+=c-'A'+10;
    }
    if((zbir%16)==0){
        if(zbir%100==16)
            printf("Poln pogodok");
        else
             printf("Pogodok");
    }
    else
        printf("%d",zbir);
}
*/
/*
int main(){
	int m,n,flag,temp,cifra;
	scanf("%d%d", &m, &n);
	for( ; m<=n;m++){
		flag=1;
		temp = m;
		while(temp>0){
			cifra=temp%10;
			if(cifra%2!=0)
				flag=0;
			temp/=10;
		}
		if(flag){
			printf("blag broj");
			break;
			}
	}
	if(!flag)
		printf("NE");
}
*/
/*
int main()
{
    int n, i, j, sum, max=0, number;
    scanf("%d", &n);
    for(i=1;i<n;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0)
                sum+=j;
        }
        if(max<sum){
            max=sum;
            number=i;
        }
    }
    printf("%d\n", number);
    return 0;
}
*/
/*
int main(){
	int m,i,j;
	scanf("%d", &m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i>0 && i<m-1 && j>0 && j<m-1)
				printf("%%");
			else if(j>0 && j<m-1)
				printf("*");
			else
				printf("+");
		}
		printf("\n");
	}
	return 0;
}
*/

/*																CIK CAK
int main(){
    int broj, savenumber;
    int cik=0, cak=0, brojac=0, tocenbrojac=0, pocetok=0;
    while(scanf("%d", &broj)){
        if(broj>9){
        savenumber = broj;
        cik=0, cak=0, brojac=0, tocenbrojac=0, pocetok=0;
        while(broj > 9){
            cik = broj%10;
            cak = (broj/10)%10;
            if(cak == cik){
                brojac++;
                break;
            }
 
            if(brojac == 0&&cik>cak)
                pocetok = 1;
            if(pocetok == 0){
                if(brojac%2==0){
                    if(cik<cak){
                        tocenbrojac++;
                    }
                }
				else  {
                    if(cik>cak){
                        tocenbrojac++;
                    }
                }
            }
            else {
                 if(brojac%2==0){
                    if(cik>cak){
                        tocenbrojac++;
                    }
                 }
 
            else {
                if(cik <cak){
                    tocenbrojac++;
                }
            }
 
        }
        brojac++;
        broj/=10;
    }
    if(brojac==tocenbrojac){
        printf("%d\n", savenumber);
    }
        }
    }
}
*/

/*													Термини
int main(){
	int i,a[5],n,zbir=0,termin0,termin1,termin2,termin3,termin4;
	float prosek;
	for(i=0;i<5;i++)
		scanf("%d", &a[i]);//slobodni termini
	scanf("%d", &n);//broj na grupi
	for(i=0;i<5;i++){
		zbir+=a[i];
		if(a[i]<0){
			printf("NEVALIDEN VLEZ");
			return 0;
		}
	}
    if(n>zbir){
		printf("NEMA DOVOLNO SLOBODNI TERMINI");
		return 0;
    }
	
	for(i=0;i<5;i++){
		if(i==0){
			if(a[i]>prosek)
				termin0 = prosek;
			else
				termin0 = a[i];
		}
		if(i==1){
			if(a[i]>prosek)
				termin1 =prosek;
			else
				termin1 = a[i];
		}
		if(i==2){
			if(a[i]>prosek)
				termin2 = prosek;
			else
				termin2 = a[i];
		}
		if(i==3){
			if(a[i]>prosek)
				termin3 = prosek;
			else
				termin3 = a[i];
		}
		if(i==4){
			if(a[i]>prosek)
				termin4 = prosek;
			else
				termin4 =a[i];
		}
	}
	printf("RASPORED NA TERMINI\n");
	printf("Ponedelnik: %d\n", termin0);
	printf("Vtornik: %d\n", termin1);
	printf("Sreda: %d\n", termin2);
	printf("Chetvrtok: %d\n", termin3);
	printf("Petok: %d\n", termin4);
	return 0;
}
*/
/*													Планини
int main(){
	int n,i,j,tmp,tmp2,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	for(i=0;;i++){
		tmp=0;
		tmp2=0;
		if(a[i]==-1)
			continue;
		else{
			k=i;
			printf("%d", a[k]);
			for(j=i+1;j<n;j++)
				if(a[j]>a[k] && a[j]!=-1 && a[j]>tmp2){
					printf("%d ", a[j]);
					tmp2 = a[j];
					a[j]=-1;
				}
			a[k]=-1;
			printf("\n");
		}
		for(j=0;j<n;j++)
			if(a[j]==-1)
				tmp++;
		if(tmp==n)
			break;
	}
	return 0;
}
*/

/*									Зајак
int main(){
	int i,n,a[100],brnuli=0,tele=0,temp;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++)//proverka dali vekje ima nuli
		if(a[i]==0)
			brnuli++;
	i=0;
	while(brnuli<n){
		if(a[i]==0)
			for(i=0;i<n;i++)
				if(a[i]!=0){
					tele++;
					break;
				}
		temp = a[i];
		a[i] = 0;
		i+=temp;
		brnuli++;
		if(i<0)
			for(i=0;i<n;i++)
				if(a[i]!=0){
					tele++;
					break;
				}
		if(i>n)
			for(i=0;i<n;i++)
				if(a[i]!=0){
					tele++;
					break;
				}
	}
	printf("%d", tele);
}

*/

/*								Виженер шифрувач
int main(){
	int a[100]={0},n,m,i,j;
	char c[100]={0},b[100]={0};
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &m);
	for(i=1;i<=m;i++)
		scanf(" %c", &c[i]);
	i=1;
	for(j=1;;j++){
		if(j>n){
			j=0;
			continue;
		}
		b[i] =c[i] + a[j];
		if(b[i] > 'z')
			b[i] -= a[j];
		i++;
		if(i>m)
			break;
	}
	for(i=1;i<=m;i++)
		printf("%c", b[i]);
	return 0;
}
*/

/*										Student Records
int main(){
	int j,i,n,index,m,godina,maxindex=0,maxgod=0;
	float max=0,maxpolispiti=0,maxprosek=0,temp;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		int a[100]={0},flag=0,brGod=0;
		float prosek=0,polispiti=0,zbir=0;
		scanf("%d", &index);
		scanf("%d", &m);
		for(j=0;j<m;j++){
			scanf("%d", &a[i]);
			zbir+=a[i];
		}
		godina = index/10000;
		if(godina==17){
			brGod = 2;
			flag=10;
		}
		else if(godina==16){
			brGod = 3;
			flag=20;
		}
		else if(godina==15){
			brGod = 4;
			flag=30;
		}
		else if(godina==14){
			brGod = 5;
			flag=40;
		}
		prosek = zbir/m;
		polispiti = (float)m/flag;
		temp = (float)polispiti*prosek;
		if(temp>max){
			max = temp;
			maxindex = index;
			maxgod = brGod;
			maxpolispiti = polispiti;
			maxprosek = prosek;
		}
		printf("%d %d %.2f%% %.2f\n", index, brGod, polispiti*100,prosek);
	}
	printf("Student so najvisok uspeh: %d %d %.2f%% %.2f\n", maxindex, maxgod, maxpolispiti*100, maxprosek);
}
*/
/*
#define MAX 100
int main(){
	int i,j,m,n,a[MAX][MAX],zbir=0;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;i<m;j++){
			scanf("%d", &a[i][j]);
			zbir+=a[i][j];
		}
	 printf("%d", zbir);
}
*/
/*
#define MAX 100
int main(){
	int i,n,j,a[MAX][MAX],min=0,max=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j] = i+j;
	min = a[1][0];
	max = a[0][1];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(j>i)
				if(a[i][j]>max)
					max = a[i][j];
			if(i>j)
				if(a[i][j]<min)
					min = a[i][j];
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(j>i)
				a[i][j] = max;
			if(i>j)
				a[i][j] = min;
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}
*/

/*
int main(){
	int i,j,m,n,a[100][100];
	scanf("%d%d", &n, &m);
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			a[i][j] = 9;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(a[i][j]<a[i+1][j] && a[i][j]<a[i-1][j] && a[i][j]<a[i][j+1] && a[i][j]<a[i][j-1])
				printf("%d ", a[i][j]);
}
*/
/*

int main(){
	int zbir=0,x,n,m,i,j,a[100][100];
	scanf("%d", &x);
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(j=0;j<m;j++){
		for(i=0;i<n;i++)
			zbir+=a[i][j];
		if(zbir>x)
			for(i=0;i<n;i++)
				a[i][j]=1;
		else if(zbir<x)
			for(i=0;i<n;i++)
				a[i][j]=-1;
		else
			for(i=0;i<n;i++)
				a[i][j]=0;
		zbir=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}
*/
/*											Затворање на матрица
int main(){
	int j,i,m,n,a[100][100],counter0,counter1;
	scanf("%d%d", &n, &m);
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			a[i][j] = 5;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]==0){
				counter1=0;
				counter0=0;
				if(a[i-1][j-1]==1)
					counter1++;
				if(a[i-1][j-1]==0)
					counter0++;
				if(a[i-1][j]==1)
					counter1++;
				if(a[i-1][j]==0)
					counter0++;
				if(a[i-1][j+1]==1)
					counter1++;
				if(a[i-1][j+1]==0)
					counter0++;
				if(a[i][j+1]==1)
					counter1++;
				if(a[i][j+1]==0)
					counter0++;
				if(a[i+1][j+1]==1)
					counter1++;
				if(a[i+1][j+1]==0)
					counter0++;
				if(a[i+1][j]==1)
					counter1++;
				if(a[i+1][j]==0)
					counter0++;
				if(a[i+1][j-1]==1)
					counter1++;
				if(a[i+1][j-1]==0)
					counter0++;
				if(a[i][j-1]==1)
					counter1++;
				if(a[i][j-1]==0)
					counter0++;
				if(counter1>counter0)
					a[i][j]=1;
			}
		}
	}
		for(i=1;i<=n;i++){
			for(j=1;j<=m;j++)
				printf("%d ", a[i][j]);
		printf("\n");
	}
}
*/

/*													Четвртини матрици
int main(){
	int n,m,i,j,a[100][100],max1,max2,max3,max4,min1,min2,min3,min4,raz1,raz2,raz3,raz4;
	scanf("%d%d", &n, &m);
	if(n%2!=0 || m%2!=0){
		printf("MATRICATA NE E KOMPATIBILNA");
		return 0;
	}
	else{
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d", &a[i][j]);
		raz1=0;
		raz2=0;
		raz3=0;
		raz4=0;
		max1 = a[0][0];
		min1 = a[0][0];
		max2 = a[0][m/2];
		min2 = a[0][m/2];
		max3 = a[n/2][0];
		min3 = a[n/2][0];
		max4 = a[n/2][m/2];
		min4 = a[n/2][m/2];
		
		for(i=0;i<n/2;i++)
			for(j=0;j<m/2;j++){
				if(a[i][j]>max1)
					max1 = a[i][j];
				if(a[i][j]<min1)
					min1 = a[i][j];
			}
		raz1=max1-min1;
		for(i=0;i<n/2;i++)
			for(j=0;j<m/2;j++)
				a[i][j]=raz1;
				
		for(i=0;i<n/2;i++)
			for(j=m/2;j<m;j++){
				if(a[i][j]>max2)
					max2 = a[i][j];
				if(a[i][j]<min2)
					min2 = a[i][j];
			}
		raz2=max2-min2;
		for(i=0;i<n/2;i++)
			for(j=m/2;j<m;j++)
				a[i][j]=raz2;
		
		for(i=n/2;i<n;i++)
			for(j=0;j<m/2;j++){
				if(a[i][j]>max3)
					max3 = a[i][j];
				if(a[i][j]<min3)
					min3 = a[i][j];
			}
		raz3=max3-min3;
		for(i=n/2;i<n;i++)
			for(j=0;j<m/2;j++)
				a[i][j]=raz3;
		
		for(i=n/2;i<n;i++)
			for(j=m/2;j<m;j++){
				if(a[i][j]>max4)
					max4 = a[i][j];
				if(a[i][j]<min4)
					min4 = a[i][j];
			}
		raz4=max4-min4;
		for(i=n/2;i<n;i++)
			for(j=m/2;j<m;j++)
				a[i][j]=raz4;
		
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				printf("%d ", a[i][j]);
			printf("\n");
	}
}
*/
/*									Дијагонални суми
int main(){
	int n,i,j,a[100][100],k,t,topZbir[100]={0},bottomZbir[100]={0},midZbir=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		k=0;
		t=i;
		for(j=0;j<n;j++){
			if(j>i){
				topZbir[k]+=a[i][j];
				k++;
			}
			if(i==j)
				midZbir+=a[i][j];
			if(i>j){
				bottomZbir[t]+=a[i][j];
				t--;
			}
		}
	}
	for(i=0;i<n;i++){
		k=0;
		t=i;
		for(j=0;j<n;j++){
			if(j>i){
				a[i][j]=topZbir[k];
				k++;
			}
			if(i==j)
				a[i][j]=midZbir;
			if(i>j){
				a[i][j]=bottomZbir[t];
				t--;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
*/
/*										Позитивно-негативна матрица
int main(){
	int temp,i,j,m,n,a[100][100],b[100][100];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(a[i][j]<0)
				for(temp=0;temp<m;temp++)
					b[i][j] += abs(a[i][temp]);
			if(a[i][j]>0)
				for(temp=0;temp<n;temp++)
					b[i][j] += abs(a[temp][j]);
			if(a[i][j]==0)
				continue;
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	return 0;
}
*/
/*									SPIRALA
int main(){
	int m,n,i,j,a[100][100],k=0,l=0,t;
	scanf("%d%d", &n, &m);
	int lastkol=m-1,lastred=n-1;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	while(k<=lastred && l<=lastkol){
		for(t=l;t<=lastkol;t++)
			printf("%d ", a[k][t]);
		k++;
		for(t=k;t<=lastred;t++)
			printf("%d ", a[t][lastkol]);
		lastkol--;
		if(k<=lastred){
			for(t=lastkol;t>=l;t--)
				printf("%d ", a[lastred][t]);
			lastred--;
		}
		if(l<=lastkol){
			for(t=lastred;t>=k;t--)
				printf("%d ", a[t][l]);
			l++;
		}
	}
}
*/
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~nereshena svadba
#define MAX 100
int main(){
	int i,j,a[MAX][MAX],n,gosti,masi,c,b[MAX];
	scanf("%d%d%d", &gosti, &masi, &c);
	if(gosti<0 && masi<0 && c<0)
		printf("NEVALIDEN VLEZ");
	else if(gosti>c)
		printf("NEMA DOVOLNO MESTA ZA SITE GOSTI");
	else{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d", &a[i][j]);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if()
	}
}
*/
/*
int proizvod(int n){
	if(n<=0)
		return 1;
	return (n/10)%10*proizvod(n/100);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", proizvod(n));
}
*/
/*
void izraz(int n){
	int i;
	for(i=0;i<n-1;i++)
		printf("1");
	printf("%d", n);
	for(i=0;i<n-1;i++)
		printf("1");
}


int main(){
	int n,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		izraz(i);
		printf("\n");
		
	}
}
*/
/*
int obraten(int n,int prev){
	prev+=n%10;
	n/=10;
	if(n>0)
		prev = obraten(n,prev*10);
	return prev;
}


int main (){
	int n,broj;
	scanf("%d",&n);
	broj = n + obraten(n,0);
	if(broj == obraten(broj,0))
		printf("brojot e polindrom\n");
	else
		printf("brojot ne e polindrom\n");
	return 0;
	
}
*/
/*
int izraz(int a[], int i){
	if(i==0)
		return a[0];
	else 
		return a[i]+izraz(a,i-1);
}


int main(){
	int j,i,s,n,a[100],b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		if(a[i]<0)
			a[i]=0;
	}
	b[0]=0;
	for(i=1;i<n;i++){
		s=0;
		for(j=1;j<=n;j++)
			s+=izraz(a,j-1);
		b[i] = s;
	}
	for(i=0;i<n;i++)
        printf("%d\n", b[i]);
    return 0;
}
*/

/*
int izraz(int n,int counter){
	static int zbir=0;
	if(counter==0)
		return zbir;
	if(n%counter==0)
		zbir+=counter;
	return izraz(n,counter-1);

}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", izraz(n,n-1));
}
*/
/*
int izraz(int n){
	if(n==0)
		return 1;
	if(n%10<=(n/10)%10)
		return 0;
	return izraz(n/10);
}

int main(){
	int n,i,m;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		if(izraz(m))
			printf("DA\n");
		else
			printf("NE\n");
		
	}
}
*/

/*
int izraz(int a, int b){
	static int zbir = 0;
	if(a==b)
		return 0;
	zbir+=a;
	if(a==b-1)
		return zbir;
	return izraz(a+1,b);
}


int main(){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d", izraz(a+1,b));
}
*/
/*
int izraz(int a[], int n){
	int max = a[n],next;
	if(n==0)
		return a[0];
	else{
		next = izraz(a,n-1);
		if(next > max)
			return next;
		else
			return max;
	}
}

int main(){
	int i,n,a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	printf("%d", izraz(a,n-1));
}
*/
/*
float funk(int a, int b, int flag){
	int counter=flag;
	if(a<=0 || b<=0)
		return counter;
	if(a%10==b%10)
		counter++;
	return funk(a/10, b/10, counter);
}

int main(){
	int i,a,b,temp1,temp2,n;
	float counter=0,c;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d%d", &a, &b);
		temp1=a;
		temp2=b;
		counter=0;
		while(temp1>0 || temp2>0){
			counter++;
			temp1/=10;
			temp2/=10;
		}
		c = funk(a,b,0);
		printf("%.2f%%\n", (float)c/counter*100);
	}

}
*/
/*
#define MAX 100

int izraz(int a[MAX], int m,int n);

int main(){
	int temp,i,m,n,a[MAX];
	scanf("%d", &m);
	scanf("%d", &n);
	for(i=0;i<m;i++)
		scanf("%d", &a[i]);
	temp = izraz(a,m,n);
	printf("%d", temp);
}

int izraz(int a[], int m,int n){
	int i,j,maxZbir=-999;
	for(i=0;i<m;i++){
		int zbir=0;
		for(j=0;j<n;j++)
			zbir+=a[j+i];
		if(zbir>maxZbir)
			maxZbir = zbir;
		if(i+j==m)
			break;
	}
	return maxZbir;
}
*/

/*same as one above but with recursion
#define MAX 100

int izraz(int a[MAX], int m,int n);

int main(){
	int temp,i,m,n,a[MAX];
	scanf("%d", &m);
	scanf("%d", &n);
	for(i=0;i<m;i++)
		scanf("%d", &a[i]);
	temp = izraz(a,m,n);
	printf("%d", temp);
}

int izraz(int a[], int m,int n){
	static int i,p=0,zbir=0,maxZbir=-999;
	if(n==m+1)
		return maxZbir;
	for(i = p; i<n;i++)
		zbir+=a[i];
	if(zbir>maxZbir)
		maxZbir = zbir;
	zbir=0;
	p++;
	return izraz(a,m,n+1);
}
*/
/*Лабораториска вежба 6 - Дополнителни задачи-Огледални броеви 
#define MAX 100
int izraz(int a[], int prv,int posleden,int counter);

int main(){
	int n,i,m,j,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &m);
		for(j=0;j<m;j++)
			scanf("%d ", &a[j]);
		izraz(a,0,m-1,0);
		printf("\n");
	}
}

int izraz(int a[], int prv,int posleden,int counter){
	int flag = counter;
	if(prv>=posleden){
		if(flag==0){
			printf("NEMA");
			return 1;
		}
		else
			return 1;
	}
	if(a[prv]==a[posleden]){
		printf("%d ", a[prv]);
		flag++;
	}
	return izraz(a,prv+1,posleden-1,flag);
}
*/
/*Лабораториска вежба 6 - Дополнителни задачи Фибоначи од втор ред 
int fib(int n);

int main(){
	int i,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		printf("%d ", fib(i));
	
}

int fib(int n){
	if(n<2)
		return n;
	return fib(n-1)+fib(n-2);
}
*/
/* Лабораториска вежба 6 - Дополнителни задачи  Сомнителен профит  (8/10 correct)
int checkProfit(const float niza[], int start, int end,float flag1, float flag2) {
    float startZbir=flag1,endZbir=flag2,raz=0,prosek=0;
	static float counter1=0;
	if(start>=end){
		prosek = (startZbir+endZbir)/(counter1*2.0);
		startZbir=startZbir/counter1;
		endZbir=endZbir/counter1;
		raz = fabs(startZbir - endZbir);
		if(raz>prosek)
			return 0;
		else
			return 1;
	}
	else{
		startZbir+=niza[start];
		endZbir+=niza[end];
		counter1++;
		return checkProfit(niza,start+1,end-1,startZbir,endZbir);
	}
}

int main() {
    int n, i;
    scanf("%d", &n);
    float niza[n];
    for (i = 0; i < n; i++)
        scanf("%f", &niza[i]);
    if (checkProfit(niza, 0, n - 1,0,0))
        printf("PROFIT OK");
    else
        printf("PROFIT NOT OK");
}
*/
/*Лабораториска вежба 6 - Дополнителни задачи  Прост или сложен
int prim(int n,int i){
	if(i==1)
		return 1;
	else{
		if(n%i==0)
			return 0;
		else
			return prim(n,i-1);
	}
	return 0;
}


int main(){
	int n;
	while(scanf("%d", &n)&&n>1){
		if(prim(n,n-1))
			printf("P ");
		else
			printf("S ");
	}
}
*/
/*Лабораториска вежба 6 - Дополнителни задачи		Рекурзивно печатење на информации (not finished)
char izraz(char c, int n){
	char b;
	scanf(" %c", &b);
	if(n==0 || b>='A' || b<='Z')
		
	else{
		printf("%c", b);
	}
}

int main(){
	int brojka;
	char bukva;
	while(scanf("%c", &bukva)){
		scanf("%d", &brojka)
	}
}
*/
/*					Покажувачи 		Збир на подниза
#define MAX 100

void sum_pos(int a[], int n){
	int i,suma=0;
	for(i=0;i<n;i++)
		suma+=*(a+i);
	printf("%d", suma);
}

int main(){
	int index,n,i,a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d", &index);
	if(n>index)
		sum_pos(a,index);
	else
		sum_pos(a,n);
}
*/
/*
 * 						Замена
#define MAX 100

void swap(int *a, int *b){
	int temp;
	temp = *b;
	*b=*a;
	*a = temp;
}


int prosti(int a, int b, int c){
	if(a+1 == c || b+1 == c)
        return 1;
    else if(a%c==0&&b%c==0)
        return 0;
	else
        return prosti (a,b,c+1);
}

int main(){
	int n,i,a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	i=1;
	while(i<n){
		if(prosti(a[i-1],a[i],2)){
			swap( &a[i-1] , &a[i]);
			i+=2;
		}
		else
			i++;
		}
	for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}
*/
/*						Покажувачи	Сортирање
#define MAX 100

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a=*b;
	*b = temp;
}

void sort(int *a, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}

void merge(int *a, int *b, int *c, int n){
	int i=0, j=0, k=0;
	while (i<n && j<n){
		if(a[i]< b[j]){
			c[k] = a[i];
			i++;
			k++;
		}
		else{
			c[k] = b[j];
			j++;
			k++;
		}
	}
	if(i<n)
		for( ; i<n;i++){
			c[k] = a[i];
			k++;
		}
	else 
		for( ; j<n ; j++){
			c[k] = b[j];
			k++;
		}
}

int main() {
	int n,i,a[MAX],b[MAX],c[MAX];
	scanf("%d", &n);
    for(i = 0; i < n; i++) 
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) 
        scanf("%d", &b[i]);
    sort(a, n);
    sort(b, n);
    merge(a, b, c, n);
    for(i = 0; i < 2 * n; i++) 
        printf("%d ", c[i]);
    return 0;
}
*/
/*			Низи од знаци (стрингови) 	Исти знаци во стрингови
#define MAX 100
void funk(char *a, char *b ,int golemA, int golemB){
	int i,counter=0;
	if(golemA>golemB){
		for(i=0;i<golemB;i++)
			if(a[i]==b[i]){
				a[i]='*';
				b[i]='*';
				counter++;
			}
	}
	else if(golemB>golemA){
		for(i=0;i<golemA;i++)
			if(a[i]==b[i]){
				a[i]='*';
				b[i]='*';
				counter++;
			}
	}
	else{
		for(i=0;i<golemB;i++)
			if(a[i]==b[i]){
				a[i]='*';
				b[i]='*';
				counter++;
			}
	}
	printf("%d\n", counter);
	printf("%s\n", a);
	printf("%s\n", b);
}


int main(){
	char a[MAX],b[MAX];
	gets(a);
	gets(b);
	funk(a,b,strlen(a)-1,strlen(b)-1);
}
*/
/*								Букви помеѓу првите две цифри во стринг
#define MAX 100

void funk(char *a){
	int i=0,counter=0;
	while(a[i] != '\0'){
		if(isdigit(a[i])){
			printf("%c", a[i]);
			i++;
			counter++;
			if(counter>=2)
				break;
			while(isalpha(a[i])){
				printf("%c", a[i]);
				i++;
				if(a[i] == '\0')
					break;
			}
		}
		else
			i++;
	}
	if(!counter)
		printf("nema cifri");
}

int main(){
	char a[MAX];
	gets(a);
	funk(a);
}

*/
/*							Бришење на текстуална низа
#define MAX 100

int deleteStr(char* str1, char* str2){
    int poz,i,j,flag=0;
    for(i=0;*(str1+i)!='\0';i++){
        if(strncmp(str1+i,str2,strlen(str2))==0){
            flag=1;
            poz=i;
            break;
        }
    }
    if(flag){
        j=poz+strlen(str2);
        for(i=poz;*(str1+j)!='\0';i++,j++)
            *(str1+i)=*(str1+j);
        *(str1+i)='\0';
        return 1;
    }
    else
        return 0;
   
}
 
 
int main() {
    char firstStr[MAX], secondStr[MAX];
    int i=0;
    char l;
    //gets(firstStr);
    //gets(secondStr);
    while((l=getchar())!='\n'){
        *(firstStr+i)=l;
        i++;
    }
    *(firstStr+i)='\0';
    i=0;
    while((l=getchar())!='\n'){
        *(secondStr+i)=l;
        i++;
    }
    *(secondStr+i)='\0';
    if (deleteStr(firstStr, secondStr))
        puts(firstStr);
    else
        printf("String not found\n");
    return 0;
}
*/
/*
#define MAX 100

void swap(char *xp, char *yp){
    char temp;
	temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void bubbleSort(char *a, int n){
   int i, j;
   for (i=0; i<n-1; i++)
       for (j=0; j<n-i-1; j++)
           if (a[j] > a[j+1])
              swap(&a[j], &a[j+1]);
}

void func(char *a){
	int i,j,k;
	for(i=0;a[i]!='\0';i++)		//converts all to lowercase
		if(isupper(a[i]))
			a[i] = tolower(a[i]);
	for(i=0;a[i]!='\0';i++)					removes spaces
		if(isspace(a[i]))
			for(j = i ; a[j]!='\0';j++)
				a[j] = a[j+1];
	for(i=0 ; a[i]!='\0' ; i++){			//removes dupes
		for(j=i+1 ; a[j]!='\0' ; j++ ){
			if(a[j] == a[i]){
				for(k=j ; a[k]!='\0' ; k++)
					a[k] = a[k+1];
			}
		}
	}
	bubbleSort(a, strlen(a));
}

int main(){
	char a[MAX];
	gets(a);
	func(a);
	puts(a);
}
*/
//~~~~~~~~~~~~~~~~~ Датотеки
/*										1
void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    writeToFile();
    float l=0, br=0;
    char ch;
    FILE *f1;
    if ((f1 = fopen("text.txt", "r")) == NULL) {
        printf ("Datotekata ne se otvara");
        return -1;
    }
    while ((ch = fgetc(f1))!=EOF) {
        if (isalpha(ch)) {
            l++;
        }
        if (isdigit(ch)) {
            br++;
        }
    }
    printf("%.2f",br/l);
    fclose(f1);
    return 0;
}
*/
/*												2
#define MAX 100

int main(){
	FILE *f1, *f2;
	int h, b, i, r;
	float m[MAX][MAX],s=0;
	if((f1 = fopen("text.txt", "r")) == NULL) {
        printf("Datotekata ne se otvora.");
        return -1;
    }
	if(!feof(f1))
		fscanf(f1,"%d %d", &h, &b); // gi zima prvite 2 brojki(goleminite) od f1
    for(i = 0; i < h &&!feof(f1); i++) 
        for(r = 0; r < b &&!feof(f1); r++) 
            fscanf(f1, "%f", &m[i][r]);
    fclose(f1);
    f2 = fopen("matrica.txt", "w");
    for(i = 0; i < h; i++) {
        for(r = 0; r < b; r++) {
            s+=m[i][r];
        }
        if(s > 10) {
            fprintf(f2,"%.1f\n", s);
        }
        s = 0;
    }
    fclose(f2);
    return 0;
}
*/
/*										3
#define MAX 100

int polindrom(char *a){
	char n[MAX];
	int i,j=0,k=0;
	for(i=0;i<strlen(a);i++)
		if(isalpha(a[i])){
			n[k] = a[i];
			k++;
		}
	n[k] = '\0';
	for(i=0,j=strlen(n)-1 ; i<strlen(n) ; i++,j--)
		if(tolower(n[i])!=tolower(n[j]))
			return 0;
	a[i] = '\0';
	return 1;
}

int main(){
	FILE *f1,*f2;
	char a[MAX];
	if((f1=fopen("text.txt", "r"))==NULL){
		printf("nahh");
		return 0;
	}
	if((f2=fopen("output.txt", "w"))==NULL){
		printf("nahh pt.2");
		return 0;
	}
	while(fscanf(f1,"%s", a)!=EOF){
		if(polindrom(a)){
			fprintf(f2,"%s\n", a);
		}
	}
	fclose(f1);
	fclose(f2);
	return 0;
}
*/
/*								4
#define MAX 100

int func(char *a){
	int counter=0;
	while(*a){
		if(isupper(*a))
			counter++;
		a++;
	}
	return counter;
}


int main(){
	FILE *f1;
	int max=0,maxI=0,i;
	char a[MAX];
	if((f1=fopen("text.txt", "r"))==NULL){
		printf("nahh");
		return 0;
	}
	for(i=1;(fgets(a,MAX, f1)!=NULL);i++){
		if(func(a)>max){
			max = func(a);
			maxI = i;
		}
	}
	printf("%d", maxI);
}
*/