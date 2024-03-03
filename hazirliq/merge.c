#include <stdio.h>

int* sort(int list[], int size){
    int temp;
    for (int i = 1; i < size; i++){
        temp = list[i];
        int j;
        for (j = i-1; j >= 0 && list[j] < temp; j--){
            list[j+1] = list[j];
        }
        list[j+1] = temp;
    }
    return list;
}
    


int* merge(int* unsone, int* unstwo, int* dest, int n){
    int i, j, k;
    int* one = sort(unsone, 3);
    int* two = sort(unstwo, 3);
    for (i = 0, j = 0, k = 0; i < n && j < n && k < 2*n; k++){
        if (one[i] >= two[j]){
            dest[k] = one[i];
            i++;
        }
        else if (one[i] < two[j]){
            dest[k] = two[j];
            j++;
        }
    }
    if (i < n){
        while(i < n && k < 2*n){
            dest[k] = one[i];
            i++;
            k++;
        }
    }
    if (j < n){
        while(j < n && k < 2*n){
            dest[k] = one[i];
            j++;
            k++;
        }
    }
    return dest;
}

int main(){
    int list1[] = {1,2,3};
    int list2[] = {4,5,6};
    int list3[6];

    merge(list1, list2, list3, 3);

    for (int i = 0; i < 6; i++){
        printf("%d ", list3[i]);
    }
}