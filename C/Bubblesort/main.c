#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "usefulprints.h"

int* sort(int* unsortedArray, int size){
	bool isOrdered = 0;
	while(isOrdered){
		int currentCounter = false;
		int tempInt;
		for(int i = 0; i < size - 1; ++i){
			currentCounter = 0;
			if(i + 1 < size - 1){
				if(unsortedArray[i] > unsortedArray[i + 1]){
					tempInt = unsortedArray[i];
					unsortedArray[i] = unsortedArray[i+1];
					unsortedArray[i+1] = tempInt;
					currentCounter++;
				}

			}
		}
		if (currentCounter == 0){
			isOrdered = true;
		}
	}
}

int main(){
	int array[] = {4, 2, 43};
	int size = sizeof(array) / sizeof(array[0]);
	printf("The current array is of size %d!\n", size);
	printArray(array, size);
	sort(array, size);
	return 0;
}





