#include <stdio.h>
//swaps the element continiously 
//to swap alternate change in function to i=i+2
void swap(int arr[], int n) {
    for (int i = 0; i < n - 1; i =i+1) {  
        int change = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = change;
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    swap(arr, n);
    printf("Array after swapping:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
