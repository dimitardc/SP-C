#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <malloc.h>

/*
int main(){
	int i = 5;
	int *ptr;
	ptr = &i; // ptr ja ima adresata na "i"
	printf("%d ", *ptr); // ja printa vrednosta vo taa adresa shto e 5
	//printf("%d ", ptr); vaka ja printame samo adresata na "i" a ne nejzinata vrednost
	// & = adresa
	// * = vrednosta na adresata
}

*/
/*
int main(){
	int x = 123;
	int *p = &x, *q;
	
	q = p;//q ja ima samo adresata na p (t.e. adresata na x)
	printf("x = %d\n", x);//printame vrednosta na x
	printf("*p = %d\n", *p);//printame vrednosta na adresata vo p( p ja ima adresata na x t.e.  &x)
	*q = 456;//456 e novata vrednost vo adresata na q
	printf("x = %d\n", x);
	return 0;
}
*/
/*
int main(){
	float f1, f2, g;
	float *fp;
	fp = &f1;
	*fp=1.2;
	fp = &f2;
	*fp=2.3;
	g = *fp;
	*fp = 3.4;
	printf("%.1f %.1f %.1f\n", f1, f2, g);
}
*/
/*
#include <stdio.h>
#include <math.h>
float opf(float x, float y) { return x; }
float op1(float x, float y) { return x + y; }
float op2(float x, float y) { return x - y; }
float op3(float x, float y) { return x * y; }
float op4(float x, float y) { return x / y; }
float op5(float x, float y) { return pow(x,y); }

int main()
{
float o1, o2, r;
char c[2]; int dummy;
float (*pfi)(float, float);
printf("op1:"); scanf("%f", &o1);
printf("op2:"); scanf("%f", &o2);
printf("operation [+ - * / ^] ");
scanf("%1s", c);
switch(*c)
{
case '+': pfi=op1; break;
case '-': if(o1>o2) pfi=op2; else pfi=opf; break;
case '*': pfi=op3; break;
case '/': if(o2!=0 && o1>o2) pfi=op4; else pfi=opf; break;
case '^': if(o1==0 && o2==0 || o1<0 && modf(o2,&dummy)!=0)
pfi=opf; else pfi=op5; break;
}
r=(*pfi)(o1,o2);
printf("result = %f\n",r);
return 0;
}*/

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~AUD
/*
					Задача 1
#define MAX 100

int funk(int a[],int n,int *pos,int *len){
	int i,start,currlen;
	*pos = 0;
	*len = 1;
	for(i=0;i<n-1;i++){
		start = i;
		currlen = 1;
		while(a[i]<a[i+1]){
			currlen++;
			i++;
			if(i==n-1)
				break;
		}
		if(currlen > *len){
			*len = currlen;
			*pos = start;
		}
	}
}


int main(){
	int i,n,a[MAX],pos,len;
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	funk( a, n, &pos, &len);
	printf("Start: %d, Length: %d\n", pos, len);
}
*/
/*						Задача 2
#define MAX 100
void funk(int a[], int n){
	int i,j;
	for(i=0,j=n ; i<j ; i++,j--){
		a[i]+=a[j];
		a[j] = a[i];
	}
	if(n%2==0)
		a[n/2]*=2;
}

int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
		printf("a[i] = %d\n", a[i]);
	printf("\n\n");
	funk(a,n-1);
	for (i = 0; i < n; i++)
		printf("b[i] = %d\n", a[i]);
	return 0;
}
*/
/* 							Задача 3
#define MAX 1000000
int linear_search(int *a, int n, int key) {
  int i;
  for (i = 0; i < n; i++) {
	if (a[i] == key) 
	  return i;
  }
  return -1;
}
int binary_search(int *a, int n, int key) {
  int start = 0;
  int end = n - 1;
  while (start <= end) {
	int mid = (start + end) / 2;
	if (a[mid] == key) 
		return mid;
	else if (a[mid] > key) 
		end = mid - 1;
	else 
		start = mid + 1;
  }
  return -1;
}
int main() {
  int i;
  int *a = malloc(sizeof(int) * MAX); // same as a[MAX]
  for (i = 0; i < MAX; i++) {
	a[i] = i + 1;
  }
  srand(time(NULL));
  int key = rand() % MAX + 1;
  printf("Element for search: %d\n", key);
  int found = linear_search(a, MAX, key);
  printf("Found with linear search at position: %d\n", found);
  found = binary_search(a, MAX, key);
  printf("Found with binary search at position: %d\n", found);
  return 0;
}*/



/* 				Bubble sort

void bubble_sort(int *a, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
	}
}
*/



/* binary search with recursion
int binarySearch(int arr[], int l, int r, int x) { 
    if (r >= l){ 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return 0; 
}
*/