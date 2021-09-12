#include <stdio.h>

/*

	  5 

* * * * * * * * *
* * * *   * * * *
* * *       * * * 
* *           * *
*               *

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	// row 
	for(int row=1; row<=size; row++){

		// left star
		for(int left_star=1; left_star<=(size-row)+1; left_star++) printf("* ");

		for(int space=1; space<row; space++) printf("  ");

		for(int _space=1; _space<row-1; _space++) printf("  ");

		for(int star=1; star<=(size-row)+1; star++){
			if(star != size)printf("* ");
		}

		printf("\n");
	}

	return 0;
}