#include <stdio.h>
#include <math.h>

int main()
{
	int Broj,PrimNajdeni=0;
	int PrimBarach;
	printf("Vnesi broj");
	scanf("%d", &Broj);
	for(PrimBarach=2;PrimBarach<=Broj;PrimBarach++) {
		int ePrim = 1;                               // pretpostavi e prim?
		for(int k=2;k<sqrt(PrimBarach);k++){
			if (PrimBarach % k == 0) {
				ePrim = 0;
			}
		}
		if(ePrim){
			PrimNajdeni++;
			printf("%d ", PrimNajdeni);
			if(PrimNajdeni % 10 == 0)
				printf("\n");
		}
		printf("%d Primovi se najdeni", PrimNajdeni);
	}
		
	return 0;
}
