#include <stdio.h>

/*
    *
  * *
* * *

*/
int main(){
	int size = 3;
	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=size; row>=1; row--){

		// empty space 
		for(int space=1; space<row; space++) printf("  ");

		// print *
		for(int column=1; column<=(size-row)+1; column++) printf("* ");

		printf("\n");
	}
}