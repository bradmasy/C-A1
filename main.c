#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_WORDS_PER_PARAGRAPH 100
#define MAX_WORD_LENGTH 20



void formatAndPrintParagraph(char *paragraph, int lineLength){
    int y,i,start, characterCount,wordCount,wordLength;
    char eachCharacter;

    start       = 0;
    int count   = 0;
    int endLoop = 0; // flag to end the larger outer loop.

    int arraysOfWordIndexes[MAX_WORDS_PER_PARAGRAPH][2];


    for(y = 0; y < MAX_WORDS_PER_PARAGRAPH; y++) // being run 100 times
    {
        characterCount = 0;
        wordCount      = 0;
        wordLength     = 0;
        int firstIndex = 0;
        int endOfWord;

        int arrayOfWordIndex[2]; // array of the indexes of the current word.
        for(i = start; count < lineLength; i++) // 25 times it being run
        {
            eachCharacter = paragraph[i];

            if(!isspace(eachCharacter))
            {

                printf("%c:%d\n",eachCharacter,characterCount);
                characterCount += 1;
                wordLength +=1;
            }
            else
            {
                endOfWord = wordLength - 1;
                wordLength = 0;
                wordCount += 1;

                arrayOfWordIndex[0] = firstIndex;
                arrayOfWordIndex[1] += endOfWord;

                printf("\nword index = start:%d to end:%d\n", arrayOfWordIndex[0], arrayOfWordIndex[1]);
                firstIndex = endOfWord + 1;
            }

            start = i;
            count += 1;

            if(count == lineLength)
            {
                start += 1;
                printf("-----------------------\n");
                count = 0;
                break;
            }

            if(eachCharacter == 0) {
                endLoop = 1;
                break;
            }
        }
       // printf("character count = %d\n",characterCount);
        printf("word count = %d\n",wordCount);

        if(endLoop)
        {
            break;
        }
    }
}

int main() {
    char paragraph[] = "Hi everyone. This is the 2nd assignment. Please make sure you start early as this is going to take some time!\0";
    // Hieveryone.
    //0,1,2,3,4,5,6,7,8,9,10
    int lineLength = 25;

    formatAndPrintParagraph(paragraph,lineLength);

    printf("\n\n");
    char paragraph2[] = "Hi everyone. This is the 2nd assignment. Please make sure you start early as this is going to take some time!\0";
    int lineLength2 = 40;

    formatAndPrintParagraph(paragraph2,lineLength2);
    return 0;
}
