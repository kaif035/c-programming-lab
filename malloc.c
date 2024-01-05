#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr_malloc = (int*)malloc(sizeof(int));
    
    if (ptr_malloc == NULL) {
        printf("Memory allocation using malloc failed.\n");
        return 1;
    }

    *ptr_malloc = 42;
    printf("Malloc: %d\n", *ptr_malloc);

    int *ptr_calloc = (int*)calloc(3, sizeof(int));

    if (ptr_calloc == NULL) {
        printf("Memory allocation using calloc failed.\n");
        free(ptr_malloc); 
        return 1; 
    }

    printf("Calloc: %d %d %d\n", ptr_calloc[0], ptr_calloc[1], ptr_calloc[2]);

    int *ptr_realloc = (int*)realloc(ptr_calloc, 5 * sizeof(int));

    if (ptr_realloc == NULL) {
        printf("Memory reallocation using realloc failed.\n");
        free(ptr_malloc);
        free(ptr_calloc); 
        return 1; 
    }

    ptr_realloc[3] = 10;
    ptr_realloc[4] = 20;

    printf("Realloc: %d %d %d %d %d\n",
           ptr_realloc[0], ptr_realloc[1], ptr_realloc[2],
           ptr_realloc[3], ptr_realloc[4]);

    free(ptr_malloc);
    free(ptr_realloc);

    return 0; 
}

