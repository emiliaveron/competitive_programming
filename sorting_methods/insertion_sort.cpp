#include <iostream>

template <typename T>

T insertionSort(T list[], int size){
    T temp;
    for (int i = 1; i < size; i++){
        temp = list[i];
        int j;
        for (j = i-1; j >= 0 && list[j] > temp; j--){
            list[j+1] = list[j];
        }
        list[j+1] = temp;
    }
    return *list;
}
    



int main(){
    int bimbimbambam[] = {89,150,22,245,3,123,6,48,494};
    insertionSort(bimbimbambam, 9);
    for (int i = 0; i < 9; i++){
        std::cout<<bimbimbambam[i]<<" ";
    }
    std::cout<<"\n";
}