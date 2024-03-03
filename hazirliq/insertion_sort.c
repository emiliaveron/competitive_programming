#include <stdio.h>

int* insertionSort(int arr[]){
    int temp;
    for(int i = 1; i < 9; i++){
        temp = arr[i];
        int j;
        for(j = i-1; j >= 0; j--){
            if (arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else break; 
        }
        arr[j+1] = temp;
    }
    return arr;
}


int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,48,494};
    insertionSort(bimbimbambam);
    for (int i = 0; i < 9; i++){
        printf("%d ",bimbimbambam[i]);
    }
    printf("\n");
}