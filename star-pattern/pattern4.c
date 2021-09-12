#include <stdio.h>

/*

* * * *
  * * *
    * *
      *
*/
int main(){
	int size = 3;
	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){

		// print space 
		for(int space=1; space<row; space++) printf("  ");

		// print * 
		for(int star=1; star<=(size-row)+1; star++) printf("* ");

		printf("\n");
	}
	return 0;
}