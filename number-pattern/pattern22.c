#include <stdio.h>

/*
	3

1  		- 1
1 2 	- 1+1 = 2
3 5 8   - 1+2 = 3, 2+3 = 5, 3+5 = 8
 
*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	signed int new = 0;
	signed int old = 0;
	signed int result = 1;

	for(int row=1; row<=size; row++){
		for(int column=1; column<=row; column++){
			if(row<=2 && column<=1){
				old = row; 
				new = column;
			}
			else{
				// add 
				result = new + old;

				// store old value
				new = old;
				// old result on old value
				old = result;
			}
			printf("%d ", result);
		}
		printf("\n");
	}

	return 0;
}