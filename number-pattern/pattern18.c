#include <stdio.h>

/*
	5
5 
5 4
5 4 3 
5 4 3 2
5 4 3 2 1
5 4 3 2 1 0
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
*/

int main(){
	int size = 5;
	printf("Enter Size : ");
	scanf("%d", &size);

	size++;
	int total = size + (size-1);

	for(int row=1; row<=total; row++){
		for(int column=1; column<=size; column++){
			if(row<size){
				if(column<=row) printf("%d ", size-column);
			}
			else{
				if(column<=(total-row)+1) printf("%d ", size-column);
			}
		}
		printf("\n");
	}
	return 0;
}