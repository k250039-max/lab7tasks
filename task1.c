#include <stdio.h>

int main() {
    int i, temp;
    int arr[5];

    
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("\nBefore shifting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    temp = arr[4]; 
    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    printf("\nAfter shifting: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
