//Given Project code
#include <stdio.h>
#include <stdlib.h>
#include "random.h"
#include <time.h>


size_t size = 10;

char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         for (size_t i = 0; i < size; i++) {
             s[i] = randchar();
         }
         s[size] = '\0';
     }
     return s;
}

int main() {
    srand(time(0));

    char *randomStr = rand_string_alloc(size);

    if (randomStr) {
        printf("%s\n", randomStr);
        free(randomStr); 
    }
    return 0;
}