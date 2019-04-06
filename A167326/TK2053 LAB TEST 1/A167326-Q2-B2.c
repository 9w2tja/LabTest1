#include <stdio.h>

void generation (int year);

int main (void){
	int N, i, year, age;
	
	printf("Enter Test Case : ");
	scanf("%i", &N);
		
	
	for (i=0; i<N; i++){
		scanf("%4i%2i", &year, &age);
		if (age<=0){
			printf("Invalid input\n\n");
		} else {
			year = year-age;
			generation (year);
		}
	}
	return 0;
}

void generation (int year){
	if (year<1961)
		printf("%i, Baby Boomer\n\n", year);
	else if (year<=1980)
		printf("%i, Gen X\n\n", year);
	else if (year<=2000)
		printf("%i, Xennials\n\n", year);
	else if (year<=2010)
		printf("%i, Gen Y\n\n", year);
	else
		printf("%i, Gen Z\n\n", year);
}
