#include <stdio.h>
void sortArray(int arr[], int size);

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], merged[size1 + size2];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    sortArray(merged, size1 + size2);

    printf("Merged array in ascending order:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

