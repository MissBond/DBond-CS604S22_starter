#include <stdio.h>

int main(void) {

	//TODO: Please replace the three ???s in line 12 so that the loop calculates
	//the sum of all the odd numbers from 1 to 1000 (that is: 1+3+5...+999)
	//You are only allowed to modify the ???
	//You may NOT change < to <=.
	int sum = 0;
	for(int i = 1; i < 1000; i+=2) {
		sum = sum + i;
	}
	printf("the sum is %d\n", sum);
	return 0;
}
