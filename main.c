// #include "include/sqlist.h"

#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5,7,8};
    for (int i = 0, j = 6; i < j; i ++, j --) {
        arr[i] ^= arr[j] ^= arr[i] ^= arr[j];
    }
    for (int i = 0; i < 7; i ++) {
        printf("%d ", arr[i]);
    }
    return 0;
}