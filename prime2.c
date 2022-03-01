#include <stdio.h>
#include <stdlib.h>
int get_valid_number();
int is_prime(int x);

//main() uses a sentinel controlled loop to test the primality of numbers
//, without knowing how many numbers to be tested.
// -1 is the sentinel value
// the loop repeats the cycle of read->test->process->read ...

//This code contains several bugs, please fix them so that
//the prime test works correctly and produces the results
//as in the sample output

//Please make your edits as least invasive as possible.
//The working submission which makes the least edits will receive full points
//and the other working submission will be evaluated based on how close it
//is to the best submission

int main()
{
	int n;
	printf("Please enter an integer greater than 2 and less than 10,000 to test its primality, enter -1 to exit \n");
	scanf("%d", &n);

	while (n != -1) {
		if (n > 2 && n < 10000) {
			if (is_prime(n)) {
				printf("%d is a prime number!\n", n);
			}
			else {
				printf("%d is not a prime number!\n", n);
			}

			printf("Please enter an integer greater than 2 and less than 10,000 to test its primality, enter -1 to exit \n");
			scanf("%d", &n);
		} else {
				printf("Please enter an integer greater than 2 and less than 10,000 to test its primality, enter -1 to exit \n");
				scanf("%d", &n);
		}
	}

	return 0;
}

int is_prime(int n) {
	//if n is divisible by any number greater or equal to 2 and less than n, then n is not prime.
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

// can't get program to work using this func -db
int get_valid_number(int n) {
	//The valid number is either -1 (to exit the program) or an integer greater than 2.
	//A loop is used to implement input validation, that is, user will be asked to
	//enter a valid number over and over again until a valid number is received.

	printf("Please enter an integer greater than 2 and less than 10,000 to test its primality, enter -1 to exit \n");
	scanf("%d", &n);
	while (n != -1) {
		if (n > 2 && n < 10000) {
			printf("Please enter an integer greater than 2 and less than 10,000 to test its primality, enter -1 to exit \n");
			scanf("%d", &n);
		}
	}
	return n;
}
