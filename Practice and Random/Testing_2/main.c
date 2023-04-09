#include <stdio.h>
#include <math.h>
int main()
{
int i,j,k,n,x = 0;
printf("Vnesi broj ");
scanf("%d",&n);
printf("Prosti broevi pomali od %d se\n",n);
	for(i = 2; i < n; i++){ //i=Prime finder,n=Vnesen broj;	Ovoj for ni e samo za broenje na site broevi od 2 do vneseniot(2<Vnesen)
		k = 1;
		for(j = 2; j < i; j++) //j ni e delitelot;	Ovoj for ni e za delenje na site broevi pocnuvajki od 2
			if(i%j == 0)  //	Ako pri delenje nema ostatok znaci e prost(bidejki moze da se podeli samo so 1 i samiot sebe?
				{
					k = 0;
					break;
				}
		if(k)
		{
			printf("%d " ,i); 
			x++;
		}
	}
	if(x>=1)
		printf("\nVkupno %d prosti broevi\n",x); //x ni se sumata na kolku vk prosti broevi se najdeni
	else
		printf("\nNema pomali prosti broevi od %d\n", n);
	return(0);
}