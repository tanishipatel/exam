
#include<stdio.h>

void squareArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    squareArray(arr, n);

    printf("Array after squaring each element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}