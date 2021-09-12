#include <stdio.h>

/*
	4 

* * * * 
* * * 
* * 
*
* *
* * *
* * * * 

*/
int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total = size + (size-1);

	for(int row=1; row<=total; row++){

		// star
		for(int _star=(size-row)+1; _star>=1; _star--) printf("* ");

		for(int star=1; star<=(row-size)+1 && row>size; star++) printf("* ");

		printf("\n");
	}
}