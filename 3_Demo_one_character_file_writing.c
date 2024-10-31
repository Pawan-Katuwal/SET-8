#include <stdio.h>

int main() {
    FILE *file = fopen("textfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    char ch;
    printf("Enter text (press Enter to stop): ");
    while ((ch = getchar()) != '\n') {
        fputc(ch, file);
    }

    fclose(file);
    printf("Text written to file successfully.\n");

    return 0;
}