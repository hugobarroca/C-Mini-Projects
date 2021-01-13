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


int* getIntArray(int arraySize, char *initialArray[]){
	int* numbersArray = malloc (sizeof (int) * arraySize);
	char *endPtr;


	for(int i = 1; i < arraySize; i++){
		numbersArray[i-1] = strtol(initialArray[i], &endPtr, 10);
	}

	return numbersArray;
}

int main(int argc, char *argv[]){
	char *endPtr;
	int number;
	int* arguments;


	printf("Argument 1: %s\n", argv[1]);


	arguments = getIntArray(argc, argv);

	printArray(arguments, argc - 1);
	printf("Converted argument 1: %d\n", number);
	return 0;

	//strtol(argv[1], **endptr, 10);
	//int *array = argv[1];
	//int size = argc - 1;
	//printf("The current array is of size %d!\n", size);
	//printArray(array, size);
	//sort(array, size);
	//printArray(array, size);
	//return 0;
}

