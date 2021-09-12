#include <stdio.h>

/*
   4
* * * * 
*     * 
*     *
* * * *
*/
int main(){
	int size = 4;

	printf("Enter Size : ");
	scanf("%d", &size);

	// row
	for(int row=1; row<=size; row++){

		// column
		for(int column=1; column<=size; column++){
			if(column==1 || row==1 || row==size || column==size) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}