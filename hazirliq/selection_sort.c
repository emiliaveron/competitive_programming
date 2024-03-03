#include <stdio.h>

int* selectionSort(int arr[]){
    int temp; int min; int count = 0;
    for(int i = 0; i < 8; i++){
        min = i;
        for(int j = i; j < 8; j++){
            if (arr[j] < arr[min]) min = j;
            count++;
        }
        
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
    }
    printf("%d comparisons", count);
    return arr;
}


int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,494};
    selectionSort(bimbimbambam);
    for (int i = 0; i < 8; i++){
        printf("%d ",bimbimbambam[i]);
    }
    printf("\n");
}