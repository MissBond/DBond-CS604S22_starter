#include <stdio.h>

int main(void) {
	char original[8];
	printf("Please input a 7-digit phone number:");
	scanf("%s", original);
	char converted[13];
	//DO NOT modify the code above

	//TODO: Insert the area code (516) ahead of the phone number stored original array
	//For instance, if the input is 1234567 then the output is (516)1234567
	//The output must be stored in array converted (already declared in line 7)
	//You MUST use a loop to copy characters over

	/**your code here**/
	int i;

	converted[0] = '(';
	converted[1] = '5';
	converted[2] = '1';
	converted[3] = '6';
	converted[4] = ')';

	for (i = 5; i < 12; i++) {
    converted[i] = original[i - 5];
  }

	converted[i] = '\0';

	//DO NOT modify the code below
  printf("%s\n", converted);
}
