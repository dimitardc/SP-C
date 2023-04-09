#include <stdio.h>

/*
1 Да се напише програма во која од тастатура се внесува еден број. На екран да се испечатат сите
четирицифрени броеви кои го содржат цел број пати внесениот број.
Се бараат четирицифрени броеви кои се деливи на дадениот број 
int main()
{
	int i,n;
	printf("Vnesi broj ");
	scanf("%d", &i);
	for(n=1000;n<=9999;n++){
		if(n%i == 0)
			printf("%d\t", n);
		else
			continue;
	}
	return 0;
}
*/

/*
//2 Да се напише програма која ќе ги изброи сите броеви од даден интервал (почетокот и крајот на
//интервалот се внесуваат од тастатура) во кои најзначајната цифра е парна и поголема од најмалку
//значајната цифра.
//Пример: 843, 431, 6292

int main(){
	int interval_1,interval_2,least,most,temp;
	scanf("%d", &interval_1);
	scanf("%d", &interval_2);
	for( ;interval_1<=interval_2;interval_1++){
		temp = interval_1;
		least = temp % 10;
		while(temp > 0){
			most = temp % 10;
			temp /= 10;
		}
		if(most>least && most % 2 == 0)
		printf("%d\t", interval_1);
	}
	return(0);
}

*/


/* 
3 Да се напише програма која од непознат број на цели броеви кои се внесуваат преку тастатура ќе ја
испечати позицијата и вредноста на минимaлниот елемент. 
int main(){
	int n,min,poz = 1, k = 1;
	printf("enter char to end!\n"); 
	scanf("%d", &n);
	min = n;
	while(scanf("%d", &n)){
		k++;
		if(n<min){
			min  = n;
			poz = k;
		}
	}
		printf("Min is %d and is located on %d poz", min, poz);
		return 0;
}
*/


/*
6 Да се напише програма која ќе ги испечати сите броеви од даден интервал (почетокот и крајот на
интервалот се внесувaат од тастатура) чија сума на парните цифри е делива со 3. 
int main(){
	int poc,kraj,sum,temp,cifra;
	scanf("%d%d", &poc, &kraj);
	for( ; poc<=kraj ; poc++){
		temp = poc;
		sum = 0;
		while(temp > 0){					//ovoj while si e kako shablon za razdeluvanje na broj cifra po cifra
			cifra = temp % 10;
			temp/=10;
			if(cifra%2 == 0)
				sum+=cifra; //ako sumata e nula znaci vrojot e neparen
		}
		if(sum && sum%3==0) // bidejki ako sum = 0 ne se aktivira
			printf("%d\n", poc);
	}
	return 0;
}

*/


/*

7 Да се напише програма во која од тастатура се внесува еден број. Ако внесениот број е двоцифрен
да се испечати првиот број поголем од него делив со 3, а ако бројот е троцифрен да се испечати
првиот број помал од него делив со 4.
Пример: За 14 ќе испечати 15, а за 243 ќе испечати 240 
int main(){
	int broj;
	scanf("%d", &broj);
		if(broj >= 10 && broj <= 99){
			for( broj+= 1; broj<=99 ; broj++){
				if(broj % 3 == 0){
					printf("%d", broj);
					break;
				}
			}
		}
		else if(broj >= 100 && broj <= 999){
			for( broj-=1 ; broj<=999; broj--){
				if(broj % 4 == 0){
					printf("%d", broj);
					break;
				}
			}
		}
	}

*/

/*
9 Да се напише програма во која од тастатура се внесува еден број. За внесениот број да се ипечатат
сите негови делители. 
int main(){
	int broj,i,k=0;
	scanf("%d", &broj);
	for( i=2;i<=broj;i++){
		if(!(broj%i)){
			k++;
			printf("%d\n", i);
		}
	}
	if( k == 1)													
		printf("Brojot nema deliteli t.e. toj e prost\n");
	else
		printf("brojot ima %d deliteli\n", k);
		return 0;
}

*/


/*
10 Да се напише програма во која од тастатура се внесува еден број. Ако внесениот број е парен да се
испечати првиот број поголем од него делив со 7, а ако бројот е непарен да се испечати првиот број
помал од него делив со 9. 

int main(){
	int broj;
	scanf("%d", &broj);
	if(broj%2 == 0){
		for(broj+=1 ; broj > 0; broj++ ){
			if(broj % 7 == 0){
				printf("%d", broj);
				break;
			}
		}
	}
	else
		for(broj-=1; broj > 0 ; broj--){
			if(broj<9){
				printf("ne postoi takov broj");
				break;
			}
			if(broj%9==0){
				printf("%d", broj);
				break;
			}
		}
		return 0;
}

*/


/* 11 Да се напише програма која ќе ги испечати сите броеви од даден интервал (почетокот и крајот на
интервалот се внесуваат од тастатура) чија сума на непарните цифри е непарен број. 

int main(){
	int poc,kraj,temp,cifra,suma;
	scanf("%d%d", &poc, &kraj);
	for( ; poc<=kraj ; poc++){
		suma=0;
		temp = poc;
		while(temp > 0){
			cifra = temp % 10;
			temp/=10;
			if(cifra%2)
				suma+=cifra;
		}
		if(suma%2)
			printf("%d\n", poc);
	}
	return 0;
}

*/

/* 12 Да се напише програма која од непознат број на знаци кои се внесуваат преку тастатура ќе ги
испечати знаците со најголем и најмал ASCII код.
Пример: a n r s A B M F b c. Ќе испечати А како знак со најмал ASCII код и s како знак со
најголем ASCII код 
int main(){
	char znak,min,max;
	scanf("%c", &znak);
	min = znak;
	max = znak;
	while(scanf("%c", &znak)){
		if(znak == '!')
			break;
		if(znak<min)
			min = znak;
		if(znak>max)
			max = znak;
	}
	printf("najgolem e %c", max);
	printf("\nnajmal e %c", min);
	return 0;
}
*/

/*
13
int main(){
	int poc,kraj,cifra,temp,sumPar,sumNepar;
	scanf("%d%d", &poc, &kraj);
	for( ; poc<=kraj ; poc++){
		sumPar = 0;
		sumNepar = 0;
		temp = poc;
		while(temp > 0){
			cifra = temp % 10;
			if(cifra%2 == 0){
				sumPar+=cifra;
			}
			else{
				sumNepar+=cifra;
			}
			temp/=10;
		}
		if(sumNepar>sumPar)
			printf("%d\t", poc);
	}
}

*/


/* 16 Да се напише програма која ќе ги испечати сите двоцифрени броеви и нивните делители. 
int main(){
	int i,j;
	for(i = 10 ; i<=99; i++){
		printf("%d:", i);
		for( j = 1 ; j<=i ; j++){
			if(i%j == 0)
				printf(" %d", j);
		}
		printf("\n");
	}
	
}

*/

/*
//18 Од тастатура се внесуваат непознат број цели броеви. Да се напише програма што ќе ги изброи и
//прикаже сите броеви кои се деливи со производот на нивната најзначајна цифра и најмалку
//значајна цифра. 
int main(){
	int broj,temp,flag,least,most;
	while(scanf("%d", &broj)){
		temp = broj;
		least = temp % 10;
		while(temp>0){
			most = temp % 10;
			temp/=10;
		}
		flag = least * most;
		if(flag == 0)
			printf("%d nema deliteli", flag);
		for(int x = 1 ; x<=flag ; x++){
			if(flag % x == 0)
				printf("%d\n", x);
		}
		
	}
}


*/


/* 27 Од тастатура се внесуваат координатите на две кружници и нивните радиуси. Да се напише
програма во која ќе се провери дали едната кружница ја опфаќа другата и ако ја опфаќа дали тие се
концентрични. 
int main(){
	int x1,x2,y1,y2,r1,r2;
	float O1O2;
	scanf("%d%d%d", &x1, &y1, &r1)//dimenzii na prv krug
	scanf("%d%d%d", &x2, &y2, &r2)//dimenzii na vtor krug
	O1O2 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))//rastojanie megju centrite na kruznicite
	if(O1O2 < (r1-r2)){
		printf("kruznicite se postaveni edna vo druga");
		if((x1==x2)&&(y1==y2))
			printf("i se koncentricni");
		else
			printf("ne se koncentricni");
	}
	else
		printf("kruznicite ne se postavnei edna vo druga");
}

*/

/*
28 Да се напише програма кој ќе ги отпечати сите четирицифрени броеви за кои важи следното
равенство:
На крај програмата треба да прикаже колку четирицифрени броеви го задоволуват равенството. Во
програмата, дозволема е употреба само на for структура како механизам за повторување на низа
наредби
int main(){
	int abcd,a,b,c,d,zbir,mnoz,counter;
	for(abcd = 1000 ; abcd <= 9999 ; abcd++){
		a = abcd % 10;
		b = (abcd%100)/10;
		c = (abcd%1000)/100;
		d = abcd/1000;
		zbir = a*a + b*b + c*c + d*d;
		mnoz = a*b*c*d;
		if(mnoz == zbir){
			printf("%d\n", abcd);
			counter++;
		}
		
	}
	if(!counter)
	printf("nema katvi broevi");
}

*/


/*
31 Од тастатура се внесуват непознат број цели броеви. Да се напише програма што ќе ги изброи и
прикаже сите броеви чија најзначајна цифра е парна.
int main(){
	int broj,temp,cifra,counter;
	while(scanf("%d", &broj)){
		temp = broj;
		while(temp > 0){
			cifra = temp %10;
			temp/=10;
		}
		if(cifra % 2 == 0){
			printf("%d\n", broj);
			counter++;
		}
	}
	printf("ima %d takvi broevi", counter);
}

*/


/*
32 Да се напише програма што ќе ја пресмета слдната сума:
Вредностите за m и n се внсуваат од тастатура. 
int main(){
	int n,suma = 0,m,eksponent;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i = 1 ; i<=n ; i++){ 					// broi od i do n
		eksponent = 1;								//ova e samo sa da se resetira eksponentot
		for(int j = 1; j<=m ; j++)					//go zgolemuva eksponentot za 1 
			eksponent*=i;
		suma+=eksponent;
	}
	printf("suma = %d", suma);
}

*/


/* 34 
int main ()
{
int x,y,z;
for (x=1;x<=5;x++)
for (y=1;y<=5;y++)
for (z=1;z<=5;z++)
printf("%d * %d * %d = %d\n",x,y,z,x*y*z);
return 0;
 }
*/



/* 36 
int main (){
	int n, i, suma=0, faktoriel=1;
	printf("n= "); scanf("%d",&n);
	for (i=1;i<=n;i++){
		faktoriel*=i;
		suma+=faktoriel;
	}
	printf("Sumata e %d",suma);
	return 0;
}


*/

/*
38 Да се напише програма која на екран ќе испечати шаховска табла со ширина на полињата од четири
места , при тоа црните полиња ќе останат непотполнети додека белите полиња ќе се потполнат со
нивните соодветни индекси како што е прикажано на сликата. Задачата да се реши со користење на
for структура. 

int main (){
	int i;
	char j;
	for (i=8;i>=1;i--){
		if (i%2==0)
		{
			for (j=65; j<72; j+=2)
				printf("%c%d  ", j, i);
		}
		else
		{
			for (j=66;j<=72;j+=2)
				printf("  %c%d",j,i);
		}
		printf("\n");
		printf("\n");
	}
	return 0;
}

*/

/* 40 Да се напише програма која за даден цел број внесен од тастатура ќе изврши ротација за едно
место надесно. Бројот добиен по ротацијата да се испечати на екран.
Пример: за бројот 2514, ќе го испечати бројот 4251 

int main(){
	int broj,temp;
	scanf("%d", &broj);
	temp = broj % 10;
	broj/=10;
	printf("%d%d", temp, broj);
	
}


*/



/* 44 . Да се напише програма која ќе ги испечати сите парни броеви помали од N (N се внесува од
тастатура) кои се истовремено деливи со збирот на нивните непарни цифри и со производот на
нивните парни цифри. На крај да се испечати колку ткви брови се пронајдени. 
int main(){
	int i,broj,cifra,temp,suma,proiz;
	scanf("%d", &broj);
	for(i=2;i<=broj;i+=2){
		suma = 0;
		proiz = 1;
		temp = i;
		while(temp > 0){
			cifra = temp %10;
			if(cifra % 2 == 0)
				proiz*=cifra;
			else
				suma+=cifra;
			temp/=10;
		}
		if((suma)&&(proiz)&&((i%proiz==0)&&(i%suma==0)))
			printf("%d\n", i);
	}
	return 0;
}

*/


/* 46 Од тастатура се внесуваат непознат број цели брови. Да се напише програма што ќе го пронајде и
испечати најголемиот број и најмалиот број како и колку пати се појавуваат. 
int main(){
	int broj,max,min,pmax,pmin,pozCounter=1,repeat1,repeat2;
	scanf("%d", &broj);
	min = broj;
	max = broj;
	pmax = 1;
	pmin = 1;
	while(scanf("%d", &broj)){
		pozCounter++;
		if(broj > max){
			repeat1=0;
			max=broj;
			pmax = pozCounter;
		}
		if(broj<min){
			repeat2=0;
			min = broj;
			pmin = pozCounter;
		}
		if(broj == max)
			repeat1++;
		if(broj == min)
			repeat2++;
	}
	printf("max e %d na poz %d i se povtoruva %d", max, pmax, repeat1);
	printf("min e %d na poz %d i se povtoruva %d", min, pmin, repeat2);
	
}

*/

/* 50
int main(){
	int maticen;
	scanf("%d", &maticen);
	if(maticen / 10000 == 45){
		if(maticen % 4 == 0)
			printf("Gragjaninot so posledni cifri od maticen broj %d se slika vo prostorij cetiri." , maticen);
		if(maticen %4 == 1)
			printf("Gragjaninot so posledni cifri od maticen broj %d se slika vo prostorij eden." , maticen);
		if(maticen %4 == 2)
			printf("Gragjaninot so posledni cifri od maticen broj %d se slika vo prostorij dva." , maticen);
		if(maticen %4 == 3)
			printf("Gragjaninot so posledni cifri od maticen broj %d se slika vo prostorij tri." , maticen);
	}
	else
		printf("nema potreba");
}

*/

/* 52 Да се напише програма која ги печати простите броеви од даден интервал (границите на
интервалот се внесуваат преку тастатура) и нивниот број. 
int main(){
	int start, end,temp,j,counter = 0,prosti=0;
	scanf("%d%d", &start, &end);
	for( ; start <= end ; start++){
		temp = start;
		counter = 0;
		for( j = 2; j<=temp ; j++){
			if(temp%j == 0)
				counter++;
		}
		if(counter<2 && temp != 1){
			printf("%d\n" ,temp);
			prosti++;
		}
	}
	printf("vk se %d prosti broevi",prosti);
	return 0;
}


*/


/* 54 Да се напише програма која ќе ги печати сите прости броеви од даден интервал (почетокот и крајот
на интервалот се внесуваат од тастатура), кај кои производот на последните 2 цифри е исто така
прост број (за едноцифрени броеви се сметa само една цифра).
int main(){
	int start, end,temp,j,i,counter = 0,counter2 = 0,prosti=0,a,b,c;
	scanf("%d%d", &start, &end);
	for( ; start <= end ; start++){
		temp = start;
		a = temp % 10;
		b = (temp % 100)/10;
		c = a*b;
		counter = 0;
		counter2 = 0;
		for( j = 2; j<=temp ; j++){
			if(temp%j == 0)
				counter++;
		}
		for( i = 2; i<=c ; i++){
			if(c%i == 0)
				counter2++;
		}
		if(counter2<2 && counter<2 && temp!=1 && c!=0 && c!=1){
			printf("%d\n" ,temp);
			prosti++;
		}
	}
	printf("vk se %d prosti broevi",prosti);
	return 0;
}


*/

/*55
int main(){
	int i,j;
	for(i = 1; i<=8; i++){
		if(i%2 == 0){
			for(j = 1; j<=4 ; j++)
				printf("[]  ");
		}
		else
			for(j = 1 ; j<=4 ; j++)
				printf("  []");
		printf("\n");
	}
	
}

*/


/* 56
int main(){
	int i,j;
	for( i = 1; i<=4 ; i++){
		for ( j = 1 ; j<=i ; j++)
			printf("* ");
		printf("\n");
	}
	for(i = 1 ; i<=3 ; i++){
		for(j = 3 ; j>=i; j--)
			printf("* ");
		printf("\n");
	}
}

*/
