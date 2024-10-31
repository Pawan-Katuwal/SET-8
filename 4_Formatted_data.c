#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *file = fopen("record.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    printf("Record saved successfully.\n");

    return 0;
}