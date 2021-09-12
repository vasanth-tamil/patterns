#include <stdio.h>

/*

*        *
 *      *
  *    * 
   *  *
    * 

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=size; row>=1; row--){

		// first half
		for(int space=1; space<=(size-row); space++) printf("  ");

		// column
		for(int column=row; column>=1; column--) 
			if(column == row) printf("* ");
			else printf("  ");

		for(int column1=row; column1>1; column1--){
			if(column1 == 2) printf("* ");
			else printf("  ");
		}

		printf("\n");
	}

	return 0;
}