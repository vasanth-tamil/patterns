#include <stdio.h>

/*

   * 
  *** 
 ***** 
******* 
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	// row
	for(int row=1; row<=size; row++){
		// space 
		for(int space=1; space<=(size-row)+1; space++) printf("  "); 
		
		// first half
		for(int star=1; star<=row; star++) printf("* ");

		// second half
		for(int _star=1; _star<row; _star++) printf("* ");

		printf("\n");
	}

	return 0;
}