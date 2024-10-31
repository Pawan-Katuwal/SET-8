#include <stdio.h>

int main() {
    FILE *file = fopen("bca.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fprintf(file, "I study BCA");
    fclose(file);
    printf("Text written to file successfully.\n");

    return 0;
}