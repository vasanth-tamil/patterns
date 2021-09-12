#include <stdio.h>

/*
	5

	1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
 4 4 4 4
  3 3 3
   2 2
    1
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	int total = size + (size - 1);

	for(int row=1; row<=total; row++){
		for(int column=1; column<=size; column++){
			
			// first half
			if(row<=size){
				if(column<=(size-row)) printf("  ");
				else printf(" %2d ", row);
			}
			// second half
			else{
				if(column<=(row-size)) printf("  ");
				else printf(" %2d ", (total-row)+1);
			}
		}
		printf("\n");
	}

	return 0;
}