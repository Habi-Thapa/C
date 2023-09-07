/*Program to convert several lines of text to uppercase*/
#include <stdio.h>
#include <ctype.h>

#define EOL '\n'

int main(){
    char letter[80];
    int tag, count = -1;

    do ++count; while((letter[count] = getchar()!= EOL));
    tag = count;

    count = 0;
    for(count = 0; count< tag; ++count) {
        putchar(toupper(letter[count]));
    }
}