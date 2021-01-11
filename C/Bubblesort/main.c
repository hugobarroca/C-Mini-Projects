#include <stdio.h>
#include <stdlib.h>
#include "usefulprints.h"

int* sort(int* unsortedArray, int size){
	printf("Starting to sort array!\n");
	int isOrdered = 0;
	int currentCounter;
	int tempInt;

	while(isOrdered == 0){
		printf("Sorting... ");
		printArray(unsortedArray, size);
		currentCounter = 0;
		for(int i = 0; i < size; ++i){
			if(i + 1 < size){
				if(unsortedArray[i] > unsortedArray[i + 1]){
					tempInt = unsortedArray[i];
					unsortedArray[i] = unsortedArray[i+1];
					unsortedArray[i+1] = tempInt;
					currentCounter++;
				}

			}
		}
		if (currentCounter == 0){
			isOrdered = 1;
		}
	}
}

int main(){
	int array[] = {4, 2, 43, 54, 2, 43, 65, 7};
	int size = sizeof(array) / sizeof(array[0]);
	printf("The current array is of size %d!\n", size);
	printArray(array, size);
	sort(array, size);
	printArray(array, size);
	return 0;
}

