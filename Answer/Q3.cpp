//Program to verify if the student passes or fail for overseas internship
//Student needs to pass 5 out of 7 the aptitude tests. 
//The passing marks for each test is 70.  

#include <stdio.h>
#define NumTest 7
void verifyPass(int marks[]);

int main (void){
	int N, i, j, k;
	int marks[7];
	int count;
	
	printf("Enter Number of Students : ");
	scanf("%d", &N);
	
	for (i=0; i<N; i++){
		for (j=0; j<NumTest; j++){
			printf("Enter marks for aptitude test %d:\n",j+1);
			scanf("%d", &marks[j]);
		}
		verifyPass(marks);	
	}
}

void verifyPass(int marks[]){
	int i=0, count=0;;	
	for (i=0; i<NumTest; i++){
		if (marks[i]>=70)				
			count++;
	}
	if (count>=5)
		printf("PASS\n");
	else 
		printf("FAIL\n");

}
