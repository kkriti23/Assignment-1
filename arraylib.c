#include"arraylib.h"
int findMaxIndex(int arr[], int size){
	int max=0,i;
	for(i=0;i<size;i++){
		if(arr[i]>arr[max]){
			max=i;
		}
	}
	return max;
}
int findMinIndex(int arr[], int size){
	int min=0,i;
	for(i=0;i<size;i++){
		if(arr[i]<arr[min]){
			min=i;
		}
	}
	return min;
}
float findAverage(int arr[], int size){
	int i;
	int sum=0;
	for(i=0;i<size;i++){
		sum = sum + arr[i];	
	}
return ((float)sum) / size;
}
void displayArray(int arr[], int size){
	int i,t;
    for(i = 0; i < size; i++){
        t=arr[i];
    }
}
void reverseArray(int arr[], int size){
	int t,i;
	for(i=0;i<size/2;i++){
		t=arr[i];
		arr[i]=arr[size-i-1];
		arr[size-i-1]=t;
	}
}
void sortArray(int arr[], int size){
	int i,j,t;
	for (i = 0; i < size - 1; i++) {
        int min = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
		if (min != i) {
            int t = arr[min];
            arr[min] = arr[i];
            arr[i] = t;
        }
    }
}
int linearSearch(int arr[], int size, int value){
	int i;
	for(i = 0; i < size; i++) {
        if(arr[i] == value)
            return i; 
    }
    return -1;
}
