// Program to convert 24-hour clock to 12-hour clock
  
#include <stdio.h>

void formatTime (int hour, int minute);

int main (void){
	int N, i, time, hour, minute;
	
	printf("Enter number of a test cases: ");
	scanf("%d", &N);
		
	for (i=0; i<N; i++){
		printf("Input time in 24-hour clock: ");
		scanf("%d", &time);
		hour = time/100;
		minute = time % 100;
		formatTime (hour, minute);				
	}

	return 0;
}

void formatTime (int h, int m){
	if (m<60){
		if (h<12)
			printf("%d:%d AM\n", h, m);
		else if (h < 13)
			printf("%d:%d PM\n", h, m);
		else if (h < 24){
			h -= 12 ;
			printf("%d:%d PM\n", h, m);
		} 
		else
			printf("Invalid 24 Clock\n"); 
	} 
	else 
		printf("Invalid 24 Clock\n");
}



