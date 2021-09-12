#include <stdio.h>

/*
	3
	
A
B B
C C C
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	char alpha = 'A';
	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			if(column<=row)printf("%c ", alpha);
		}
		alpha++;
		printf("\n");
	}
	return 0;
}