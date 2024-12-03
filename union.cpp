#include <stdio.h>
#include <stdlib.h>

// Define a union that can hold an int, a float, or a char
union Data {
    int i;
    float f;
    char c;
};

// Define a structure that contains the union and some additional metadata
typedef struct {
    union Data *data;
} UnionWrapper;

int main() {
    // Allocate memory for the union
    UnionWrapper wrapper;
    wrapper.data = (union Data *)malloc(sizeof(union Data));
    
    if (wrapper.data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Assign an integer value to the union
    wrapper.data->i = 10;
    printf("Union contains integer: %d\n", wrapper.data->i);
    
    // Assign a float value to the union
    wrapper.data->f = 3.14;
    printf("Union contains float: %f\n", wrapper.data->f);
    
    // Assign a character value to the union
    wrapper.data->c = 'A';
    printf("Union contains char: %c\n", wrapper.data->c);

    // Free the allocated memory
    free(wrapper.data);
    
    return 0;
}