#include <stdio.h>

/*

  5
*
* * 
*   *
*     *
* * * * * 
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	// row 
	for(int row=1; row<=size; row++){

		// column
		for(int star=1; star<=size; star++){
			// 
			if(row==size || star==row || star==1) printf("* ");
			else printf("  ");
		}

		printf("\n");
	}

	return 0;
}