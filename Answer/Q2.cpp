// Program to determine generation category of a person by their birth year

#include <stdio.h>

void generation (int year);

int main (void){
	int N, i, count, input, year, age;
	
	printf("Input number of test cases: ");
	scanf("%d", &N);
		
	
	for (i=0; i<N; i++){
		printf("Input 6 digits in format of YYYYAA\n(AA (0<AA< 100) represent the age in year YYYY): ");
 		scanf("%d",&input);
		year=input/100;
		age =input%100;
		count=0;
		while(input != 0){
        	input /= 10;
        	++count;
    	}
		if (age<0 || count!=6)	
			printf("Invalid input\n");
		else {
			year = year-age;
			generation (year);
		}
	}
	return 0;
}

void generation (int y){
	if (y<1961)
		printf("%d, Baby Boomer\n", y);
	else if (y<=1980)
		printf("%d, Gen X\n", y);
	else if (y<=2000)
		printf("%d, Xennials\n", y);
	else if (y<=2010)
		printf("%d, Gen Y\n", y);
	else
		printf("%d, Gen Z\n", y);
}

