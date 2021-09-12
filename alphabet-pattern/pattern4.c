#include <stdio.h>

/*
	3

C B A
C B A
C B A
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);
	
	char alpha = (int)'A' + size;
	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			printf("%c ", --alpha);
		}
		alpha = (int)'A' + size;
		printf("\n");
	}
	return 0;
}