#include <stdio.h>
#include <math.h>

int main () {
    int entered_number, loop_one, loop_two;
    int primes = 0; //found primes

    while (1){
    printf("Enter number n? ");
    scanf("%d", &entered_number);
    printf("Entered number %d\nThe following prime numbers exist between 0 and %d\n\n", entered_number, entered_number);
    loop_one = loop_two = 0;                                                                  // reset loop counter

    for (int prime_finder = 2; prime_finder <entered_number; prime_finder++) {               //gi vrti site broevi od 2 do toj shto sme go vmetnale
		loop_one++;                                                                      //loop one counter
        //Check for prime
        int is_prime = 1;                                                                      //Assume prime

        for (int k = 2; k<prime_finder; k++) {                                                  // Only dividing by up to sqrt of a number to see if prime
            loop_two++;                                                                        //loop two counter
            if (prime_finder % k == 0) {                                                    // if dividing a number with another number leaves no rest == not prime
                is_prime = 0;                                                                  // setting to NOT prime
            }
        }


		if (is_prime) {                                                                  //If prime and above 1 (primes are defined as>1 or no primes would exist
                primes++;                                                                   //+1 prime number found
                printf("%d ", prime_finder);
                if (primes % 10 == 0)                                                          //Print 10 numbers per row
                    printf("\n");
            }
        }
	printf("\n%d primes were found\n", primes);
    printf("Loop one was started %d times\nLoop two was started %d times\n\n**\n\n", loop_one, loop_two);
    }
}