#include <iostream>
#include <stdlib.h>
#define MIN 0
#define MAX 2000000000

int* digitalize(int n, int* arr);


int persistence(int* arr);

int main(){
    int num = -1; int arr[10];
    std::fill(arr,arr+10,-1);
    std::cin>>num;
    if (num < MIN || num > MAX) exit(1);
    digitalize(num, arr);
    if (num < 10) std::cout<<0<<"\n";
    else std::cout<<persistence(arr)<<"\n";


    return 0;
}

int persistence(int* arr) {
    int product = 1;
    for (int i = 9; i >= 0 && arr[i] != -1; i--) {
        product *= arr[i];
    }
    if (product >= 10) {
        std::fill(arr, arr + 10, -1);
        digitalize(product, arr);
        return 1 + persistence(arr);
    }
    return 1;
}

int* digitalize(int n, int* arr){
    for (int i = 9; i >= 0; i--){
        if (n == 0) break;
        else if (n<10) arr[i] = n;
        else arr[i] = n%10;
        n /= 10;
    }
    return arr;
}
