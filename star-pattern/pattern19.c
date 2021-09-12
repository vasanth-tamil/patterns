#include <stdio.h>

/*

  3

*   *
 * *
  * 
 * * 
*   * 

*/
int main(){
	int size=3;

	printf("Enter Size : ");
	scanf("%5d", &size);

	int total = size + (size-1);

	// row
	for(int row=1; row<=total; row++){

		// column
		for(int column=1; column<=total; column++){
			if(column==row || column == (total-row) + 1) printf("* ");
			else printf("  ");
		}

		printf("\n");
	}

	return 0;
}