#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int main() {
    // Test 1: Allocate memory for 5 integers
    int* array1 = (int*)calloc(5, sizeof(int));
    int* array2 = (int*)ft_calloc(5, sizeof(int));

    // Check if both arrays are zero-initialized
    for (int i = 0; i < 5; ++i) {
        if (array1[i] != 0 || array2[i] != 0) {
            printf("Test 1 failed!\n");
            return 1;
        }
    }

    // Test 2: Allocate memory for 10 characters
    char* str1 = (char*)calloc(10, sizeof(char));
    char* str2 = (char*)ft_calloc(10, sizeof(char));

    // Check if both strings are zero-initialized
    for (int i = 0; i < 10; ++i) {
        if (str1[i] != 0 || str2[i] != 0) {
            printf("Test 2 failed!\n");
            return 1;
        }
    }

    // Free allocated memory
    free(array1);
    free(array2);
    free(str1);
    free(str2);

    printf("All tests passed!\n");
    return 0;
}