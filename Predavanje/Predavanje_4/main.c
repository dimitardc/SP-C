#include <stdio.h>

int main()
{
	int Poeni,ocena;
	printf("enter points\n");
	if(scanf("%d", &Poeni) && ((Poeni<0 == 0)&&(Poeni>100 == 0))){
		if(Poeni>=0 && Poeni<=50)
		ocena=5;
		if(Poeni>=51 && Poeni<=60)
		ocena=6;
		if(Poeni>=61 && Poeni<=70)
		ocena=7;
		if(Poeni>=71 && Poeni<=80)
		ocena=8;
		if(Poeni>=81 && Poeni<=90)
		ocena=9;
		if(Poeni>=91 && Poeni<=100)
		ocena=10;}
	else
		printf("invalid\n");
		if(ocena!=5){
			if(Poeni%10==1 || Poeni%10==2 || Poeni%10==3)
				printf("%d-\n", ocena);
			else if (Poeni%10==8 || Poeni%10==9 || Poeni%10==0)
				printf("%d+\n", ocena);
			else
				printf("%d\n", ocena);
		}
		return 0;
}
