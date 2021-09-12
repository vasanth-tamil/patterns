#include <stdio.h>

/*

	5

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	// row
	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++) printf("%-2d ", row);
		printf("\n");
	}
	
	return 0;
}