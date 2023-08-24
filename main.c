#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#define LENGTH 255

int main(void) { 
    
    char X[LENGTH];
    char Y[LENGTH];
    printf("Put in your X integer: ");

    if(fgets(X, sizeof(X), stdin) != NULL ){
        size_t len = strlen(X);
        if(len > 0 && X[len - 1] == '\n'){
            X[len - 1] = '\0';
        }

        if(strlen(X) < LENGTH){

        }
        else{
            printf("Prevented Buffer Overflow Program Closing... | ERR: 1\n");
            return 1;
        }

    } 
    
    printf("Put in your Y integer: ");

    if(fgets(Y, sizeof(Y), stdin) != NULL){
        size_t len = strlen(Y);
        if(len > 0 && Y[len - 1] == '\n'){
            Y[len - 1] = '\0';
        }


        if(strlen(Y) < LENGTH){

        }
        else{
            printf("Prevented Buffer Overflow Program Closing... | ERR: 2\n");
            return 2;
        }
        
    }
    
    int x = atoi(X);
    int y = atoi(Y);

    if(x > y){
        printf("X is bigger than Y\n");
    }
    else{
        printf("Y is bigger than X\n");
    }


    return 0;
    
}

/*gcc -Wall -Wextra -Wpedantic -Wconversion -Wformat-security -Wformat -Wshadow -fstack-protector\
 -D_FORTIFY_SOURCE=2 -ftrapv -Wfloat-equal -Wnonnull -Werror -std=c11 -O2 -o main.elf   main.c   \
 && ./main.elf | Use this for compiling ANYTHING in c. */
