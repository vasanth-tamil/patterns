#include <stdio.h>

/*

	3
* * * * * 
* *   * * 
*       *

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total_size = size + (size-1);

	for(int row=size; row>=1; row--){

		// star
		for(int left=1; left<=(size-row)+1; left++) printf("* ");

		// space
		for(int space=1; space<row; space++) printf("  ");

		for(int _space=1; _space<row-1; _space++) printf("  ");

		// star
		for(int star=1; star<=(size-row)+1; star++) if(star!=size) printf("* ");
		printf("\n");
	}

	return 0;
}