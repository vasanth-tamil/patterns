#include <stdio.h>

/*

* * * * 
* * * * 
* * * *
* * * *

*/
int main(){
	int size = 4;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){

		for(int column=1; column<=size; column++) printf(" * ");
		printf("\n");
	}
	return 0;
}