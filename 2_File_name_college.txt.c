#include <stdio.h>

int main() {
    FILE *file = fopen("college.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fprintf(file, "I study at BernHardt college, Bafal\n");
    fclose(file);
    printf("Text appended to file successfully.\n");

    return 0;
}