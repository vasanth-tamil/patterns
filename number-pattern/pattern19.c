#include <stdio.h>
/*
   3

 	  3
    2 3
  1 2 3
0 1 2 3
  1 2 3
    2 3
      3
*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	size++;
	int total = size + (size -1);
	
	for(int row=1; row<=total; row++){

		for(int column=1; column<=size; column++){
			if(row<=size){
				if(column<=(size-row)) printf("   ");
				else{
					printf(" %d ", column-1);
				}
			}
			else{
				if(column<=(row-size)) printf("   ");
				else printf(" %d ", column-1);
			}
		}
		printf("\n");
	}
	return 0;
}