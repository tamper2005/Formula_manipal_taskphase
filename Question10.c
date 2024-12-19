#include <stdio.h>
//incomplete (cound not study binary search)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int change = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = change;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int change = arr[i];
        arr[i] = arr[min];
        arr[min] = change;
    }
}


int main() {
    int n;

}
    