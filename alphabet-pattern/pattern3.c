#include <stdio.h>

/*
	3
	
C C C
B B B
A A A
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	char alpha = (int)'A' + (size-1);
	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			printf("%c ", alpha);
		}
		alpha--;
		printf("\n");
	}

	return 0;
}