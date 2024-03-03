#include <iostream>
#include <stdlib.h>

#define MAX_ELEMENTS 100000
#define MIN_ELEMENTS 1
#define MAX_VALUE 1000000000
#define MIN_VALUE 1

 int replacement(int* arr, int n);

 int main(){
    int n;
    std::cin>>n;
    if (n < MIN_ELEMENTS || n > MAX_ELEMENTS) exit(1);
    int arr[n] = {-1};
    for (int i = 0; i < n; i++){
        std::cin>>arr[i];
        if (arr[i] < MIN_VALUE || arr[i] > MAX_VALUE) exit(1);
    }
    replacement(arr, n);
    for (int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
 }

int replacement(int* arr, int n){
    int temp;
    for (int i = 0; i < n; i++){
        temp = arr[i]; int j = 1;
        while (i+j < n){
            if (arr[i] < arr[i+j]){
                arr[i] = arr[i+j];
                break;
            }
            j++;
        }
        if (arr[i] == temp) arr[i] = 0;
    }
    return 0;
}
