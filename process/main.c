#include<stdio.h>
#include<stdlib.h>
#include "demo.h"

int main(){
    char *str = "Hello";
    printf("Length of %s = %d\n",str, Demo_length(str));
    return EXIT_SUCCESS;
}