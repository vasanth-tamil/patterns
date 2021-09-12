#include <stdio.h>

/*

	      5
  
	      1
	    1 2 3
	  1 2 3 4 5
	1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8 9

*/

int main(){
	int size = 5;
	int number = 1; 

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<(size+row); column++){
			if(column<=(size-row)) printf("   ");
			else{
				if(row<=row){
					printf("%2d ", number);
					number++;
				}
			} 
		}
		// reset number row increase
		number=1;
		printf("\n");
	}

	return 0;
}