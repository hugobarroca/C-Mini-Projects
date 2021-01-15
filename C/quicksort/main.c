#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "extended-prints.h"


int* getIntArray(int arraySize, char *initialArray[]){
	int* numbersArray = malloc (sizeof (int) * arraySize);
	char *endPtr;

	for(int i = 1; i < arraySize; i++){
		numbersArray[i-1] = strtol(initialArray[i], &endPtr, 10);
	}

	return numbersArray;
}

int choosePivot(int size){
	return 0;
}


int main(int argc, char *argv[]){
	int size = argc - 1;
	int* numbersArray;
	//numbersArray = getIntArray(size, argv);
	//printArray(size, numbersArray);
	//printf("Size is %d!\n", size);
	printf("Random pivot: %d\n", choosePivot(size));
	free(numbersArray);
	return 0;
}
