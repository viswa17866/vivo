#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ptr;

    // Allocate memory
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    // Input
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Output
    printf("Elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);   // Free memory
    return 0;
}
