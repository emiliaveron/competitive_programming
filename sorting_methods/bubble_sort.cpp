#include <iostream>

template <typename T>

T bubbleSort(T list[], int size){
    T temp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (list[j] > list[j+1]){
                temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp; 
            }
        }
    }
    return *list;
}


int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,48,494};
    bubbleSort(bimbimbambam, 9);
    for (int i = 0; i < 9; i++){
        std::cout<<bimbimbambam[i]<<" ";
    }
    std::cout<<"\n";
}