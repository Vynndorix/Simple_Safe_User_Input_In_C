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

        // Check for buffer overflow and invalid input
        if ((len >= LENGTH - 1) || (atoi(X) == 0 && X[0] != '0')) {
            printf("Prevented Buffer Overflow Program Closing... | ERR: 1\n");
            return 1;
        }
    } else {
        printf("Error reading input.\n");
        return 1;
    }
    
    printf("Put in your Y integer: ");

    if(fgets(Y, sizeof(Y), stdin) != NULL){
        size_t len = strlen(Y);
        if(len > 0 && Y[len - 1] == '\n'){
            Y[len - 1] = '\0';
        }

        // Check for buffer overflow and invalid input
        if ((len >= LENGTH - 1) || (atoi(Y) == 0 && Y[0] != '0')) {
            printf("Prevented Buffer Overflow Program Closing... | ERR: 2\n");
            return 2;
        }
    } else {
        printf("Error reading input.\n");
        return 2;
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
