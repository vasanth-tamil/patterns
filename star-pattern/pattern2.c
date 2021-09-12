#include <stdio.h>

int main(){
	int size = 3;
	printf("Enter Size : ");
	scanf("%d", &size);

	for(int row=size; 1<=row; row--){
		for(int column=1; column<=row; column++) printf("* ");
		printf("\n");
	}

	return 0;
}