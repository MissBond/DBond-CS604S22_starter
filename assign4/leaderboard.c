#include<stdio.h>
#include<string.h>
struct stud {
   char name[50];
   float score;
};
//Please do not modify struct stud
//You are only allowed to modify inside printThreeLeaders
void printThreeLeaders(struct stud studs[], int count) {
	//why is count here? C arrays do not carry any size indicator, we
	//must explicitly pass the number of elements in as an argument

	//Please do not modify the content of studs array
	struct stud first, second, third;
	//Your code here

	//Please find the top three highest scoring students on the leaderboard
	//and print out their names and scores.
	//You are allowed to use string functions such as strcmp or strcpy
	//Although you might not need them
	int temp;
	char tempName[50];

	for (int i = 0; i < count; i++) {

		for (int j = i + 1; j < count; j++) {

			if (studs[i].score < studs[j].score) {
				temp = studs[i].score;
				strcpy(tempName, studs[i].name);

				studs[i].score = studs[j].score;
				strcpy(studs[i].name, studs[j].name);

				studs[j].score = temp;
				strcpy(studs[j].name, tempName);
			}
		}
	}

	strcpy(first.name, studs[0].name);
  first.score = studs[0].score;

	strcpy(second.name, studs[1].name);
  second.score = studs[1].score;

	strcpy(third.name, studs[2].name);
  third.score = studs[2].score;

	//Please do not modify the following code
	printf("Leader board:\n");
	printf("First place: %s, %.2f\n", first.name, first.score);
	printf("Second place: %s, %.2f\n", second.name, second.score);
	printf("Third place: %s, %.2f\n", third.name, third.score);


}


//Please do not modify main function
int main(void) {
	struct stud students[20];
	int stud_count = 0;
	char temp_name[50];
	float grade = 0;
	printf("Enter a test score(-1 to quit), or\n");
	printf("Enter a grade first, then a student's name\n");
	scanf("%f", &grade);
	while (grade != -1)
	{

		scanf("%s", temp_name);
		students[stud_count].score = grade;
		strcpy(students[stud_count].name, temp_name);
		stud_count ++;

		printf("Enter a test score(-1 to quit), or\n");
		printf("Enter a grade first, then a student's name\n");
		scanf("%f", &grade);

	}
	if(stud_count > 2) {
		printThreeLeaders(students, stud_count);
	}
	return 0;
}
