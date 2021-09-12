#include <stdio.h>

/*
 	3

1
2 2
3   3
4     4
5 5 5 5 5
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			if(column<=row){
				if(column == 1|| row==column || row == size) printf("%-2d ", row);
				else printf("   ");
			}
		}
		printf("\n");
	}
	return 0;
}