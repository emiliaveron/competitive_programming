#include <iostream>

template <typename T>

T* selectionSort(T array[], int size){
		for(int i = 0; i < size; i++){
			int min = i;
			for(int j = i + 1; j < size; j++){
				if(array[min] > array[j]){
					min = j;
				}
			}
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
		return array;
	}


int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,48,494};
    selectionSort(bimbimbambam, 9);
    for (int i = 0; i < 9; i++){
        std::cout<<bimbimbambam[i]<<" ";
    }
    std::cout<<"\n";
}