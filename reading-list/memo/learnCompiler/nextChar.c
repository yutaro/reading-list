#include <stdio.h>
#define MAXLINE 120

static FILE *fpi;
static FILE *fpo;
static char line[MAXLINE];
static int lineIndex = -1;

int main(void){
        return 0;
}

char nextChar()
{
        char ch;
        if (lineIndex == -1){
                if(fgets(line, MAXLINE, fpi) != NULL){
                        fputs(line, fpo);
                        lineIndex = 0;
                } else{
                        printf("end of file\n");
                        exit(1);
                }
        }

        if((ch = line[lineIndex++]) == '\n'){
                lineIndex = -1;
                return ' ';
        }

        return ch;
}
