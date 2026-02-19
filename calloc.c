#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ptr;

    // Allocate memory
    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Default values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);   // All will be 0
    }

    free(ptr);   // Free memory
    return 0;
}
