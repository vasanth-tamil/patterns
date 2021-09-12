#include <stdio.h>

/*
   3 
1
1 2
1 2 3

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<=row; column++) printf("%2d ", column);
		printf("\n");
	}

	return 0;
}