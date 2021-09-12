#include <stdio.h>

/*
	3

3 3 3 
2 2 2
1 1 1

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=size; row>=1; row--){
		for(int column=1; column<=size; column++) printf("%-2d ", row);
		printf("\n");
	}

	return 0;
}