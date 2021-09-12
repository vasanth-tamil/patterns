#include <stdio.h>

/*
	5 

    1
   222
  33333
 4444444
555555555

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=1; row<=size; row++){

		for(int column=1; column<=(size+row)-1; column++){
			if(column<=(size-row)) printf("   ");
			else printf("%2d ", row);
		}
		printf("\n");
	}

	return 0;
}