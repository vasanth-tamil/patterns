#include <stdio.h>

/*
	  5

	  1
    3 3 3
  5 5 5 5 5
7 7 7 7 7 7 7
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<(size+row); column++){
			if(column<=(size-row)) printf("   ");
			else {
				if(row==1) printf("%2d ", row);
				else printf("%2d ", (row + (row-1)) );
			}
		}

		printf("\n");
	}
	return 0;
}