#include <stdio.h>
#include <stdlib.h>
#include "extended-prints.h"

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


int* getIntArray(int arraySize, char *initialArray[]){
	int* numbersArray = malloc (sizeof (int) * arraySize);
	char *endPtr;


	for(int i = 1; i < arraySize; i++){
		numbersArray[i-1] = strtol(initialArray[i], &endPtr, 10);
	}

	return numbersArray;
}

int main(int argc, char *argv[]){
	int* arguments;
	int size;
	
	arguments = getIntArray(argc, argv);
	size = argc - 1;

	if(size == 0){
		printf("No arguments! Exiting program!\n");
		return 0;
	}

	printf("The current array is of size %d!\n", size);
	printf("The current array is: ");
	printArray(arguments, size);
	sort(arguments, size);
	printf("Soring completed! End result: ");
	printArray(arguments, size);
	return 0;
}

