#include <stdio.h>

/* 1
#define max 100
int main(){
	int i,j,red,kol,a[max][max];
	scanf("%d%d", &red, &kol);
	for(i=1;i<red+1;i++){
		for(j=1;j<kol+1;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<red+2;i++){
		for(j=0;j<kol+2;j++){
			printf("%d\t" ,a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/
/*

//2 Да се состави програма која ќе изврши замена на секој елемент на дадената матрица со сумата на
//неговите непосредни соседи по колони и редови. Почетната матрица се внесува преку тастатура.
//Резултатот се сместува во нова матрица, која потоа се печати. Максималните димензии на
//матриците се 10 x 10. 
#define max 10
int main(){
	int i,j,n,m,a[max][max]={0},b[max][max]={0};
	scanf("%d%d", &n, &m);
	for(i=1;i<n+1;i++)
		for(j=1;j<m+1;j++)
			scanf("%d", &a[i][j]);
	//zgolemuvanje na rangot za 2 nulti redovi i koloni
	//for(i=0;i<n+2;i++)
		//for(j=0;j<m+2;j++)
			//b[i][j] = a[i][j];
	//opredeluvanje na sumata
	for(i=1;i<n+1;i++)
		for(j=1;j<m+1;j++)
				a[i-1][j-1] = a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i-1][j];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/

/*
3 Да се состави програма која ќе ги промени местата на редот со минимална сума на елементи и
редот со максимална сума на елементи во дадена целобројна матрица L2M,. Елементите на
почетната матрица се внесуваат од тастатура, а елементите на променетата матрица да се испечатат
на екран. Максималните димензии на матрицата се 10 x 10. 
#define MAX 10
int main(){
	int i,j,m,n,a[MAX][MAX],max=0,min=0,z=0,zmax,zmin,zbir;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	//prvicen loop kade clenovite na prvata redica se sobiraat i se smeta za min i max
	for(j=0;j<m;j++)
		z+=a[0][j];
	zmax=z;
	zmin=z;
	//loop za baranje na vistinskiot min i max.Koga i ke se inkrementira toa znaci se sobiraat clen. na nov red i zbir=0
	for(i=0;i<n;i++){
		zbir=0;
		for(j=0;j<m;j++)
			zbir+=a[i][j];
		if(zbir>zmax){
			zmax=zbir;
			max=i; //koj red e max
		}
		if(zbir<zmin){
			zmin=zbir;
			min=i; //koj red e min 
		}
	}
	//
	printf("Max:%d   Min:%d", max,min);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(i==max)
				printf("%d\t",a[min][j]);
			else{
				if(i==min)
					printf("%d\t", a[max][j]);
				else
					printf("%d\t", a[i][j]);
			}
		}
}

*/


/* 4 Да се напише програма која за дадена матрица ќе ја пронајде редицата (нејзиниот индекс) која има
максимален производ на елементите и истата ќе ја испечати. 
#define MAX 10
int main(){
	int i,j,m,n,a[MAX][MAX],proiz=1,maxproiz=1,temp;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	//ovoj loop go racuna proizvodot na prvata redica i ke go smetame za max
	for(j=0;j<m;j++)
		maxproiz*=a[0][j];
	for(i=0;i<n;i++){
		proiz = 1;
		for(j=0;j<m;j++)
			proiz*=a[i][j];
		if(proiz > maxproiz){
			maxproiz = proiz;
			temp = i;
		}
	}
	printf("Max proiz ima vo red: %d\n", temp);
	for(j=0;j<m;j++)
		printf("%d\t  ",a[temp][j]);//a[temp] stalno ja printa redicata so max elementi,[j] samo gi printa elementite od taa redica
}

*/

/*5 Да се напише програма која дадена матрица ќе ја измени на начин што на крај матрицата ќе личи
на шаховска табла, со тоа што елементите во „црните“ полиња ќе добијат нулта вредност а
останатите ќе ја задржат старата вредност. 
#define MAX 10
int main(){
	int i,j,m,n,a[MAX][MAX];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		if(i%2==0)
			for(j=1;j<m;j+=2)
				a[i][j] = 0;
		else
			for(j=0;j<m;j+=2)
				a[i][j] = 0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}
}

*/


/*6
#define MAX 10

int main(){
	int i,j,m,n,a[MAX][MAX],temp;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n/2;i++)
		for(j=0;j<m;j++){
			temp = a[i][j];
			a[i][j]=a[i+(n+1)/2][j];
			a[i+(n+1)/2][j] = temp;
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				printf("%d\t", a[i][j]);
			printf("\n");
	}
}

*/


/*7
#define MAX 10

int main(){
	int i,j,m,n,a[MAX][MAX],temp;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m/2;j++){
			temp = a[i][j];
			a[i][j]=a[i][j+(m+1)/2];
			a[i][j+(m+1)/2] = temp;
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
				printf("%d\t", a[i][j]);
			printf("\n");
}


*/


/*8
#define MAX 10

int main(){
	int i,j,m,n,a[MAX][MAX],levzbir = 0,desenzbir = 0;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m/2;j++)
			if(a[i][j]%2==0)
				levzbir+=a[i][j];
	for(i=0;i<n;i++)
		for(j=m-1;j>=(m+1)/2;j--)
			if(a[i][j]%2)
				desenzbir+=a[i][j];
	if(levzbir==desenzbir)
		printf("matricata e ednakva");
	else
		printf("matricata ne e ednakva");
	return 0;
}

*/


/*9
#define MAX 10

int main(){
	int i,j,m,n,a[MAX][MAX],prostgore = 0,prostdole = 0,x,counter,temp;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n/2;i++){
		for(j=0;j<m;j++){
			counter=0;
			temp = a[i][j];
			for(x=2;x<=a[i][j];x++){
				if(temp%x==0)
					counter++;
			}
			if(counter<2 && temp!=1)
				prostgore+=a[i][j];
			}
		}
	for(i=n-1;i>=(n+1)/2;i--){
		for(j=0;j<m;j++){
			counter=0;
			temp = a[i][j];
			for(x=2;x<=a[i][j];x++){
				if(temp%x==0)
					counter++;
			}
			if(counter<2 && temp!=1)
				prostdole+=a[i][j];
			}
		}
	if(prostgore == prostdole)
		printf("Good job\n");
	else
		printf("Mada mada\n");
	return 0;
}

*/


/*10
#define MAX 10

int main(){
	int i,j,n,m,a[MAX][MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		if(a[i][i]%2==0)
				a[i][i]+=2;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
	
}

*/


/*11
#define MAX 10

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
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)
				printf("%d\t", zbir);
			else
				printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
		
}

*/


/*

#define MAX 10

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
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j == n-1)
				printf("%d\t", zbir);
			else
				printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
		
}


*/

/*
//DIJAGONALNI SOSEDI
#define MAX 100

int main(){
	int i,j,m,n,a[MAX][MAX]={0},b[MAX][MAX]={0};
	scanf("%d%d", &n, &m);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			scanf("%d", &a[i][j]);
	for(i=1;i<n+1;i++)
		for(j=1;j<m+1;j++){
			b[i-1][j-1] = 0;
			b[i-1][j-1] = a[i-1][j-1] + a[i+1][j+1] + a[i-1][j+1] + a[i+1][j-1];
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
}

*/



/*
//SOSEDI ~~~~~2-ra zad~~~~~
#define max 10
int main(){
	int i,j,n,m,a[max][max]={0},b[max][max]={0};
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			b[i][j] = 0;
			b[i][j] = a[i][j+1]+a[i][j-1]+a[i+1][j]+a[i-1][j];
				
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/

/*
#define max 10
int main(){
	int i,j,n,a[max][max]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(i==j || i+j==n-1)
				printf("%d\t", a[i][j]);
			else
				printf("\t");
		printf("\n");
		}
	}
	
	
*/


/*
#define MAX 10

int main(){
	int i,j,m,n,a[MAX][MAX],zbir=0,zbirmax=0,zbirmin=0,max,min;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		zbir+=a[i][0];
	zbirmax = zbir;
	zbirmin = zbir;
	for(j=0;j<m;j++){
		zbir = 0;
		for(i=0;i<n;i++)
			zbir+=a[i][j];
		if(zbir > zbirmax){
			zbirmax = zbir;
			max = j;
		}
		if(zbir < zbirmin){
			zbirmin = zbir;
			min = j;
		}
	}
	printf("Max kolona: %d, Min kolona: %d\n", max,min);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j == max)
				printf("%d\t", a[i][min]);
			else{
				if(j == min)
					printf("%d\t", a[i][max]);
				else
					printf("%d\t", a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

*/

/*

#define MAX 10

int main(){
	int i,j,n,a[MAX][MAX],redzamena,kolzamena,counter,temp;
	scanf("%d", &n,);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	printf("Vnesi rediza za zamena");
	scanf("%d", &redzamena);
	printf("Vnesi kolona za zamena");
	scanf("%d", &kolzamena);
	counter=0;
	while(counter<n){
		temp = a[i][kolzamena-1];
		a[i][kolzamena-1] = a[redzamena-1][j];
		a[redzamena-1][j] = temp;
		j++;
		i++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/

/*

#define MAX 10

int main(){
	int i,j,n,m,a[MAX][MAX],redcopy;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			//scanf("%d", &a[i][j]);
			a[i][j] = i+j;
	printf("vnesi redica za kopiranje");
	scanf("%d", &redcopy);
	//redcopy-=1;
	for(i=0;i<redcopy;i++){
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<m;j++)
		printf("%d\t", a[redcopy-1][j]);
	printf("\n");
	for(i=redcopy;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
			
	}
	return 0;
}
*/

/*
#define MAX 100

int main(){
	int i,j,m,n,k,a[MAX][MAX],b[MAX][MAX],sumaN,sumaM;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			a[i][j] = i+j;
	for(i=0;i<n;i++){
		sumaN=0;
		for(k=0;k<m;k++)
			sumaN+=a[i][k];
		for(j=0;j<m;j++){
			sumaM=0;
			for(k=0;k<n;k++)
				sumaM+=a[k][j];
			b[i][j] = sumaN-sumaM;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n\n");
	}
	return 0;
	
}

*/

/*

#define MAX 50

int main(){
	int i,j,n,a[MAX][MAX],min,max;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j] = i+j;
	min = a[0][0];
	max = a[n-1][n-1];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i+j > n-1)
				if(a[i][j]>max)
					max = a[i][j];
			if(i+j < n-1)
				if(a[i][j]<max)
					min = a[i][j];
		}
	for(i=0;i<n;i++)
		a[i][n-1-i] = max + min;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

*/
/*
#define MAX 50

int main(){
	int i,j,m,n,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d", &b[i][j]);
	for(i=0;i<n;i++)
		for(i=0;i<m;i++){
			if(a[i][j]==b[i][j]*b[i][j])
				c[i][j]=1;
			else
				c[i][j]=0;
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#define MAX 10

int main(){
	int i,j,n,a[MAX][MAX],zbir=0,sumared=0,sumakol=0,counter1=0,counter2=0,sumaGD=0,sumaSD=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	//zbir na prvata kolona(moze i redica doesnt matter site koloni i redici imaat isti zbir)
	for(i=0;i<n;i++)
		zbir+=a[i][0];
	for(i=0;i<n;i++){
		sumared=0;
		for(j=0;j<n;j++)
			sumared+=a[i][j];
		if(sumared!=zbir)
			counter1++;
	}
	for(j=0;j<n;j++){
		sumakol=0;
		for(i=0;i<n;i++)
			sumakol+=a[i][j];
		if(sumakol!=zbir)
			counter1++;
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i==j)
				sumaGD+=a[i][j];
			if((i+j)==n-1)
				sumaSD+=a[i][j];
		}
	if(sumaGD!=zbir && sumaSD!=zbir)
		counter2++;
	if(!counter1)
		printf("matricata e magicna\n");
	else
		printf("matricata ne e magicna");
	if(!counter2)
		printf("Matricata e isto i specijalna\n");
	return 0;
}

*/

/*
#define MAX 100
int zbir_cifri(int n){
	if (n<10) 
		return n;
	else 
		return (n%10+zbir_cifri(n/10));
}
int main (){
	int i, j, rang, zbirgd=0, zbirsd=0, gd, sd;
	int a[MAX][MAX];
	printf("Vnesi rang na matrica: "); 
	scanf("%d",&rang);
	for (i=0; i<rang; i++){
		for (j=0; j<rang; j++){
			printf("a[%d%d] = ",i,j); scanf("%d",&a[i][j]);
		}
	}
	for (i=0; i<rang; i++){
		gd=a[i][i];
		sd=a[i][rang-1-i];
		zbirgd+=zbir_cifri(gd);
		zbirsd+=zbir_cifri(sd);
	}
	if (zbirgd==zbirsd) printf("Matricata go ispolnuva uslovot.\n");
	else printf("Matricata ne go ispolnuva uslovot.\n");
	return 0;
}

*/

/* ~~~~~~~~~~~~~~~~~~~~~~testing dumb shit so funkcii~~~~~~~~~~~~~~~
int addition(int n[i][i]){
	int i,result=0;
		result+=a[i][i];
	return result;
}



int main(){
int i,j,n,a[MAX][MAX],diagonal=0;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d", &a[i][j]);
	for(i=0;i<n;i++){
		addition(a)
	}
}
*/
