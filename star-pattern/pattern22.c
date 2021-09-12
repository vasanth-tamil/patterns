#include <stdio.h>

/*

    3

*       *
* *   * * 
* * * * * 
* *   * *
*       *

*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%5d", &size);

	int total = size + (size-1);

	for(int row=1; row<=total; row++){

		for(int column=1; column<=total; column++){
			if(row<=size){
				if(column<=row || (size-row)<column-(size-1)) printf("* ");
				else printf("  ");
			}
			else{
				if(column<=(total-row)+1 || (row-1)<column) printf("* ");
				else printf("  ");
			}

		}

		printf("\n");
	}
	return 0;
}