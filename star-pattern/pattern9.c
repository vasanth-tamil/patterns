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
	int size = 3;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total_size = size + ( size - 1);

	// for total row 
	for(int row=1; row<=total_size; row++){

		// first half
		if(row<=size){
			// space 
			for(int space=(size-row); space>=1; space-- ) printf("  ");

			// star
			for(int star=1; star<=row; star++) printf("  * ");
		}

		// second half
		else{
			// space 
			// printf("%d ", row-size);
			for(int _space=1; _space<=(row-size); _space++) printf("  ");

			// star
			for(int _star=1; _star<=(total_size - row)+1; _star++) printf("  * ");
			// printf("%d ", (total_size - row) + 1);

		}
		printf("\n");
	}
	return 0;
}