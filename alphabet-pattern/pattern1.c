#include <stdio.h>

/*
	3
	 
A A A
B B B
C C C
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	char alpha = 'A';

	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			printf("%c ", alpha);			
		}
		(int)alpha++;
		printf("\n");
	}
	return 0;
}