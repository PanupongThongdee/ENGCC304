#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool isWordChar(char c) {
    return !isspace(c); // นับทุกตัวที่ไม่ใช่ space, tab, newline
}

int countWordsInFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) return -1;

    int wordCount = 0;
    char c;
    bool inWord = false;

    while ((c = fgetc(file)) != EOF) {
        if (isWordChar(c)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    fclose(file);
    return wordCount;
}

int main() {
    char filename[200];
    int totalWords;

    printf("Make sure your file is in the same folder as this program.\n");

    while (1) {
        printf("Enter file name: ");
        scanf("%s", filename);

        totalWords = countWordsInFile(filename);

        if (totalWords != -1) {
            printf("Total number of words in '%s' : %d words\n", filename, totalWords);
            break;
        } else {
            printf("Cannot open file '%s'. Please check the file name and try again.\n", filename);
        }
    }

    return 0;
}
