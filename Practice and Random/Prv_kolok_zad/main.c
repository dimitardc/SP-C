#include <stdio.h>
#include <stdlib.h>


/*~~ 1.my version
int main()
{
	int n,i,a,b,c,perimetar=0,MaxPerimetar=0,red=0;
	printf("vnesi kolku triagolnici ke presmetuva\n");
	scanf("%d\n", &n);
	for(i=1;i<=n;i++){
		scanf("%d%d%d", &a, &b, &c);
		perimetar = a+b+c;
		printf("%d %d %d\t", a,b,c);
		if(c>=a+b || a>=b+c || b>=c+a)
			printf("ne moze\t");
		else{
			printf("moze\t");
			if(perimetar>MaxPerimetar){
				MaxPerimetar = perimetar;
				red = i;
			}
		}
		printf("\n");
	}
	printf("najgolem perimetar %d na red %d", MaxPerimetar , red);
	return 0;
}
*/


/*~~ 1.
#include <stdio.h>
int main () {
	int i, n, maxL = 0, maxIndeks = 0;
	int a, b, c, l;
	scanf ("%d", &n);
	for (i = 0; i < n; i ++) {
		scanf ("%d %d %d", &a, &b, &c);
		if (a + b > c && a + c > b && b + c > a) {
			printf("Moze\n");
			l = a + b + c;
			if (l >= maxL) {
				maxL = l ;
				maxIndeks = i;
			}
		}
		else
			printf("Ne moze\n");
	}
	printf ("Najgolem perimetar: %d, reden broj %d\n", maxL, maxIndeks + 1);
	return 0;
}
*/

/*~~~~~~~~ 2.
int main(){
	char c,prev,start,end;
	int first=1,n=0,m=0;
	while(1){
		scanf("%c", &c);
		if(c < 'a' || c > 'z')
			break;
		if(first)
			first = 0;
		else{
				if(abs(prev-c)!=1){
					if(prev<c){
						start = prev + 1;
						end = c - 1; 
					}
					else{
						start = c + 1;
						end = prev - 1;
					}
					for(n=0;start<=end;start++){
						printf("%c", start);
						n++;
					}
				printf(" %d\n", n);
				m++;
			}
		}
		prev = c;
	}
	printf("vkupno: %d\n", m);
	return 0;
}

*/


/*~~~~~~~~~~ 3.
int main(){
	int i,igraci,level,wins,loses,points=0,index=1,maxpoints=0;
	scanf("%d", &igraci);
	for(i=1;i<=igraci;i++){
		scanf("%d%d%d", &level, &wins, &loses);
		if(level == 1)
			points = wins * 13 - loses;
		if(level == 2)
			points = wins * 13 - loses * 3;
		if(points>0)
			printf("dobar igrac\n");
		else
			printf("los igrac\n");
		if(points > maxpoints){
			maxpoints = points;
			index = i;
		}
	}
	printf("najdobriot igrac ima %d poeni na index %d\n", maxpoints, index);
}

*/


/*~~~~~~~~~~ 4.
int main(){
	int m,c,temp,nodigits,first=1,n=1,prev,prevnodigits;
	scanf("%d", &m);
	while(scanf("%d", &c)){
		temp = c;
		nodigits = 0;
		while(temp){
			nodigits++;
			temp/=10;
		}
		if(first)
			first=0;
		else{
			if(c>prev && nodigits == m && prevnodigits == m)
				n++;
			else{
				if(n>=2)
					printf("%d ", n);
				n=1;
			}
		}
		prev = c;
		prevnodigits = nodigits;
		if(n>=2)
			printf("%d", n);
	}
	return 0;
}
*/


/*~~~~~~~ 4.my version
int main(){
	int m,temp,broj,cifri,first=1,sekvenca=1,prev,prevcifri;
	scanf("%d", &m);
	while(scanf("%d", &broj)){
		temp = broj;
		cifri = 0;
		while(temp){
			cifri++;
			temp/=10;
		}
		if(first)
			first=0;
		if(prevcifri==m && cifri == m && broj> prev)
			sekvenca++;
		else
			sekvenca = 1;
		prev = broj;
		prevcifri = cifri;
		if(sekvenca>=2)
			printf("%d", sekvenca);
	}
	return 0;
}
*/


/*
int main(){
	int n,i,date,day,month,year,d,dd,mm,yy,years;
	scanf("%d", &date);
	scanf("%d", &n);
	day = date/1000000;
	month = (date/10000)%100;
	year = date % 10000;
	for(i=0;i<n;i++){
		scanf("%d", &d);
		dd = d/1000000;
		mm = (d/10000)%100;
		yy = d % 10000;
		//years = current year - entered year
		years = year - yy;
		if(years<18)
			printf("NE\n");
		else if(years==18){
			if(mm<month)
				printf("DA\n");
			else if(mm == month){
				if(dd<=day)
					printf("DA\n");
				else
					printf("NE\n");
			}
			else
				printf("NE\n");
		}
		else if (years>18)
			printf("DA\n");
	}
	return 0;
}

*/


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