//You do not have a starter code in this question. Follow the instructions below.
//TODO: Copy your implementation of sentinel.c over.

//TODO: Add an input validation to make sure each grade is within the
//range of [0,100].  If the number is not within that range, it will be discarded, and
//the code will continue to ask for next grade.  If the number is within the valid range,
//then the rest is the same as sentinel.c

/**your code here**/

#include <stdio.h>

int main(void) {
  int t;
  int grades[20];
  int i =0;
  float average;
  float sum = 0;

  printf("Enter a grade:\n");
	scanf("%d", &t);

  while(t != -1){
    if (t >= 0 && t <= 100) {
      grades[i] = t;
		  i++;
    } else {
      printf("invalid grade\n");
    }

    if (t != -1) {
      printf("Enter a grade:\n");
      scanf("%d", &t);
    }
  }

  for (int j = 0; j < i; j++) {
		sum += grades[j];
	}

  average = sum / i;

  printf("the average grade of the class is %.2f", average);

	return 0;
}
