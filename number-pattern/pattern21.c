#include <stdio.h>

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=1; row<=size; row++){
		for(int column=1; column<=size; column++){
			if(row==column || column == (size-row)+1)printf(" %d ", row);
			else printf("   ");
		}
		printf("\n");
	}

	return 0;
}