#include"min.h"

int arraymin(int* array, int size) {
	int min=array[0];
	for(unsigned i=1;i<size;i++) {
		if(array[i]<min) {
			min=array[i];
		}
	}
	return min;
}

int minindex(int* array, int size) {
	int min=array[0];
	int index=0;
	for(unsigned i=1;i<size;i++) {
		if(array[i]<min) {
			min=array[i];
			index=i;
		}
	}
	return index;
}
