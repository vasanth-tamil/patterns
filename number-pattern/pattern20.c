#include <stdio.h>

/*
	3

  	1
  2   2 
 3     3
  2   2 
    1
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	size++;
	int total = size * 2 - 1;

	for(int row=1; row<=total; row++){
		for(int column=1; column<size; column++){
			if(row<=size){
				if(column<=size-row) printf("  ");
				else{
					if(column<=size){
						if(column == (size-row)+1 || column == size-1)printf(" %d  ", row-1);
						else printf("    ");
					}
				} 
				
			}
			else{
				if(column<=row-size) printf("  ");
				else{
					if(column == (row-size)+1 || column == size -1) printf(" %d  ", total-row);
					else printf("    ");
				}
			}
		}
		printf("\n");
	}

	return 0;
}