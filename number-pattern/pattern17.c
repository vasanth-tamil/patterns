#include <stdio.h>

/*
   	 5

5        5
 4      4 
  3    3
   2  2
    1
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){

			if(column<row) printf("  ");
			else{
				if(column==(row) || column==size) printf(" %2d ", (size-row)+1);
				else printf("    ");
			}
		}
		printf("\n");
	}

	return 0;
}