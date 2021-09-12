#include <stdio.h>

/*
         *
       * *
     * * *
   * * * *
 * * * * *
   * * * *
     * * *
       * *
         *
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total_size = size + (size-1);

	// row
	for(int row=1; row<=total_size; row++){
		// space 
		if(row<=size){
			// space 
			for(int space=1; space<=(size-row)+1; space++) printf("  ");
			
			// half star
			for(int star=1; star<=row; star++) printf("* ");
		}
		else{
			// space 
			for(int _space=1; _space<=(row-size)+1; _space++) printf("  ");

			// second half
			for(int _star=size; _star>=(row-size)+1; _star--) printf("* ");
		}

		printf("\n");

	}
	return 0;
}