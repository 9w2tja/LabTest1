#include <stdio.h>

void display (int hour, int minit);

int main (void){
	int N, i, hour, minit;
	
	printf("Enter Test Case : ");
	scanf("%i", &N);
		
	for (i=0; i<N; i++){
		scanf("%2i%2i", &hour, &minit);
		display (hour, minit);				
	}

	return 0;
}

void display (int hour, int minit){
	if (minit<60){
		if (hour<12){
			hour = hour;
			printf("%li:%li \n\n", hour, minit);
		} else if (hour < 24){
			hour = hour - 12 ;
			printf("%li:%li \n\n", hour, minit);
		} else
			printf("Invalid 24hours \n\n"); 
	} else 
		printf("Invalid 24hours \n\n");
}


