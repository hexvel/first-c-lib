#include <stdio.h>
#include <stdlib.h>

void open_website(char text[]);


#define FORMAT_STRING "start chrome https://youtube.com/results?search_query=%s"
void open_website(char text[]) {
    size_t len = snprintf(NULL, 0, FORMAT_STRING, text);
    char *cmd = malloc(len * sizeof(char));
    snprintf(cmd, len, FORMAT_STRING, text);
    system(cmd);
    free(cmd);
}