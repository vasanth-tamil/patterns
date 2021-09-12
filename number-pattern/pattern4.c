#include <stdio.h>

/*

  3 

3 2 1
3 2 1
3 2 1

*/
int main(){
	int size = 3;

	printf("Enter Size : ");
	scanf("%2d", &size);

	for(int row=1; row<=size; row++){
		for(int column=size; column>=1; column--) printf("%2d ", column);
		printf("\n");
	}
	return 0;
}