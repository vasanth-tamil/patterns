#include <stdio.h>

/*
   5

1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=1; row<=size; row++){
		for(int space=1; space<row; space++) printf("   ");
		for(int column=1; column<=(size-row)+1; column++) printf("%2d ", column);
		printf("\n");
	}

	return 0;
}