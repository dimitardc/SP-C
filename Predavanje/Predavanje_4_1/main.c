#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if((a+b<=c) || (b+c<=a) || (c+a<=b))
		printf("nemoze da se napravi triagolnik");
	else{
		if(a>=b){
			int temp = a;
			a=b;
			b=temp;}
		if(a>=b){
			int temp = a;
			a=c;
			c=temp;}
		if(b>=c){
			int temp = b;
			b=c;
			c=temp;}
	}
		printf("najgolem e %d", c);
	return 0;
}
