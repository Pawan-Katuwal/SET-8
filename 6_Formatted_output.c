#include <stdio.h>

int main() {
    FILE *file = fopen("employees.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int id, salary;
    char name[50], post[50];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Post, and Salary for Employee %d:\n", i + 1);
        scanf("%d", &id);
        getchar();  // to consume newline after id
        printf("Name: ");
        gets(name);
        printf("Post: ");
        gets(post);
        printf("Salary: ");
        scanf("%d", &salary);

        fprintf(file, "ID: %d\nName: %s\nPost: %s\nSalary: %d\n\n", id, name, post, salary);
    }

    fclose(file);
    printf("Employee records saved successfully.\n");

    return 0;
}