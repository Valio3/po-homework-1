#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * find(char *, char);

int main(int argc, const char * argv[]) {
    char line[400];
    size_t size = 400;
    fgets(line, size, stdin);
    
    char ch;
    scanf("%c", &ch);
    
    char *res = find(line, ch);
    if (res == NULL) {
        printf("-1");
    } else {
        printf("%ld\n", res - line);
    }
    return 0;
}

char * find(char *haystack, char needle) {
    int i;
    for (i = 0; i < strlen(haystack); i++) {
        if (haystack[i] == needle) {
            return &haystack[i];
        }
    }
    return NULL;
}
