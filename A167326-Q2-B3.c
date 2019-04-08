#include <stdio.h>

int main (void){
	int N, i, j, k;
	int marks[7];
	int min;
	
	printf("Enter Test Case : ");
	scanf("%i", &N);
	
	for (i=0; i<N; i++){
		for (j=0; j<7; j++){
			scanf("%i", &marks[j]);
		}
		
		for (k=0; k<7; k++){
			if (marks[k]<70){
				min++;
			}
		}
		
		if (min>=2)
			printf("Fail\n\n");
		else 
			printf("Pass\n\n");
	}
}
