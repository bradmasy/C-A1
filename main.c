#include <stdio.h>

#define MAX_WORDS_PER_PARAGRAPH 100
#define MAX_WORD_LENGTH 20

void formatAndPrintParagraph(char *paragraph, int lineLength){
    int y,i,start,amountOfCharacters,amountOfWhiteSpace;

    start       = 0;
    int count   = 0;
    int endLoop = 0; // flag to end the larger outer loop.

    for(y = 0; y < MAX_WORDS_PER_PARAGRAPH; y++) // being run 100 times
    {

    }
}

int main() {
    char paragraph[] = "Hi everyone. This is the 2nd assignment. Please make sure you start early as this is going to take some time!\0";
    int lineLength = 25;

    formatAndPrintParagraph(paragraph,lineLength);

    printf("\n\n");
    char paragraph2[] = "Hi everyone. This is the 2nd assignment. Please make sure you start early as this is going to take some time!\0";
    int lineLength2 = 40;

    formatAndPrintParagraph(paragraph2,lineLength2);
    return 0;
}
