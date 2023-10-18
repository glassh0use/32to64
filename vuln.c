#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 3) {printf("Input < 2");exit(0);} //checking number of command line arguments

    int i;
    char *src = argv[1];
    const unsigned int size = 10;
    char *buffer; //creating variables

    buffer = (char*) malloc(size); //heap memory allocation

    long len = atoi(argv[2]);

    if(len >= size){printf("too many symbols");return -1;} //checking overflow

    memcpy(buffer, src, len); //writing len symbols of src into buffer
    printf("%s", buffer); //output

    return 0;

}