#include <stdio.h>

int* bubbleSort(int arr[]){
    int temp;
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if (arr[j] > arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            } 
        }
    }
    return arr;
}


int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,48,494};
    bubbleSort(bimbimbambam);
    for (int i = 0; i < 9; i++){
        printf("%d ",bimbimbambam[i]);
    }
    printf("\n");
}