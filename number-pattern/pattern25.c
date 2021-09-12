#include <stdio.h>

/*
	3 
1 
2 3 
4 5 6 
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);
	int result = 1;

	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			if(column<=row){
				printf("%-2d  ", result);
				result++;
			}
		}
		printf("\n");
	}
	return 0;
}