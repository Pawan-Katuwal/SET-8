#include <stdio.h>

int main() {
    FILE *dataFile = fopen("data.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int n, num;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter the integers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(dataFile, "%d\n", num);
    }
    fclose(dataFile);

    dataFile = fopen("data.txt", "r");
    FILE *oddFile = fopen("odd.txt", "w");
    FILE *evenFile = fopen("even.txt", "w");

    if (dataFile == NULL || oddFile == NULL || evenFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0)
            fprintf(evenFile, "%d\n", num);
        else
            fprintf(oddFile, "%d\n", num);
    }

    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);
    printf("Numbers separated into odd.txt and even.txt successfully.\n");

    return 0;
}