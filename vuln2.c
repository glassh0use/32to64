#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {printf("Type an amount of digits of pi");exit(0);} //checking number of command line arguments

    int i;
    char *pi = "14159265358979323846";
    const unsigned int size = 20;
    char *buffer[size];

    memset(buffer, 0, size);

    long len = atoi(argv[1]);

    if(len >= size){
        printf("Sorry, we didn't calculated this amount of digits of pi =)");
        return -1;
    }else if(len == 0){
        printf("You should type a digit!!");
        return -1;
    }

    memcpy(buffer, pi, len); //writing len symbols of src into buffer

    printf("3,%s", buffer); //output

    return 0;

}