#include <stdio.h>
#include "fun.h"

int main(){
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    printf("Hello world!\n");
    printf("Number: %d/n", sum(5,6));
    printf("Number: %d", mult(5,6));
    printf("I don't have my comment here");
 
    fclose(in);
    fclose(out);

    return 0;
}
