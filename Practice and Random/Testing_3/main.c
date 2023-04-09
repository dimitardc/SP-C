#include <stdio.h>
int main() {
  int n; //brojot sho go vnesuvame
  int primes = 0;   //found primes
  int number;
  printf("Enter number n? ");
  scanf("%d", &n);
  for (number=2; number<=n; number++) {
	int is_prime = 1;
	int k;
	for (k = 2; k<number; k++)
		if (number % k == 0)
			is_prime = 0;
	if (is_prime) {
		primes++;
		printf("  %d", number);
		if (primes % 10 == 0) 
			printf("\n");
    }
  }
  return 0;
}