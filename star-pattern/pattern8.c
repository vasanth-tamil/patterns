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
	
	int row_size = size + (size - 1);

	// row
	for(int row=1; row<=row_size; row++){

		// first half
		if(row <= size){
			for(int increase=1; increase<=row; increase++) printf("* ");
		}

		// second half
		else{
			for(int decrease=1; decrease<=(row_size-row)+1; decrease++) printf("* ");
		}
		printf("\n");
	}

	return 0;
}