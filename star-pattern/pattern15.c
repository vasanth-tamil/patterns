#include <stdio.h>

/*
     *
   *  *
  *    *
 *      *
  *    * 
   *  * 
    * 

*/

int main(){
	int size = 5;

	printf("Enter Size : ");
	scanf("%d", &size);

	int total_size = size + (size - 1);

	for(int row=1; row<=total_size; row++){

		// first half space 
		if(row<=size){
			// space
			for(int space=1; space<=(size-row); space++) printf("  ");
			
			// star
			for(int star=1; star<=row; star++){
				if(star == 1 || star == row) printf("  * ");
				else printf("    ");
			}
		}
		// second half
		else{
			for(int _space=1; _space<=(row-size); _space++) printf("  ");
		
			for(int _star=1; _star<=(total_size-row)+1; _star++){
				if(_star == 1 || _star==(total_size-row)+1) printf("  * ");
				else printf("    ");
			} 
		}

		printf("\n");
	}

	return 0;
}