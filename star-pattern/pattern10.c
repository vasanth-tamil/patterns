#include <stdio.h>

/*

   *
  * *
 *   *
*     *

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){

		// space
		for(int space=1; space<=(size-row); space++) printf("  ");

		// v pattern *
		for(int column=1; column<=row; column++){

			// column == 1 || column == row
			if(column==1 || column == row) printf("  * ");
			else printf("    ");
		}

		printf("\n");
	}

	return 0;
}