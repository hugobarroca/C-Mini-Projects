void printArray(int size, int *array){
	printf("[");
	for(int i = 0; i < size; i++){
		if(i == 0){
			printf("%d", array[i]);
		}else{
			printf(", %d", array[i]);
		}
	}
	printf("]\n");
}
