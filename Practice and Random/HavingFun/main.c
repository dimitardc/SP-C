/*#include <stdio.h>

int main () {
	float fahrenheit, celsius;
	printf("Vnesete C stepeni\n");
	scanf("%f", &celsius);
	fahrenheit = 1.8*celsius + 32.0;
	printf("fahrenheit = %f\n", fahrenheit);
	return 0;
}
*/


#include <stdio.h>

int main()
{
	float Cels,Faren;
	printf("Vnesete Cels\n");
	scanf("%f", &Cels);
	Faren=1.8*Cels + 32.0;
	printf("Faren = %f", Faren);
}