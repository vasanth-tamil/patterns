#include <stdio.h>

/*
	3
1       5
1 2   4 5
1 2 3 4 5
1 2   4 5
1       1 

*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total = size + (size-1);

	for(int row=1; row<=total; row++){
		for(int column=1; column<=total; column++){
			if(row<=size){
				if(row<column){
					if(column<=total-row) printf("   ");
					else printf(" %d ", column);
				}
				else printf(" %d ", column);
			} 
			else{
				if(column<=(total-row)+1) printf(" %d ", column);
				else {
					if(column<total-(total-row)) printf("   ");
					else printf(" %d ", column);
				}
			}
		}
		printf("\n");
	}
	return 0;
}