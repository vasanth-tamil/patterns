#include <stdio.h>

/*
	
	 5

      1
    3 2 1
  5 4 3 2 1
7 6 5 4 3 2 1

*/
int main(){
	int size = 5; 

	printf("Enter Size : ");
	scanf("%d", &size);
	
	int total = size + (size-1);
	int decrease=1;

	for(int row=1; row<=size; row++){
		for(int column=1; column<=total; column++){
			if(column<=(size-row)) printf("   ");
			else if(column<(size+row)) {

				// check
				if(decrease>=1){
					printf("%2d ", decrease);
					decrease--;
				} 
			}
		}
		// set value
		decrease = (size+row) - (size-row) + 1;
		// reset 
		printf("\n");
	}

	return 0;
}