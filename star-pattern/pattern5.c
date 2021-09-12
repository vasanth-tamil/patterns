#include <stdio.h>

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	// row 
	for(int row=size; row>=1; row--){

		// star 
		for(int space=1; space<row; space++) printf("  ");

		// star 
		for(int star=1; star<=(size-row)+1; star++) printf("  * ");
		
		printf("\n");
	}
	return 0;
}