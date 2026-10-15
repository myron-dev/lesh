#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char *line = NULL;
    size_t cap = 0;

    while(1) {
        printf("lesh$ ");
        ssize_t len = getline(&line, &cap, stdin);

        if (len < 0) {
            break;
        }
        if (strcmp(line, "exit\n") ==  0) {
            break;
        }
    }
    return 1;
}


