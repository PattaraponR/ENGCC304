int main() {
    int number;

    do {
        printf("Enter a number (1-10): ");
        if (scanf("%d", &number) != 1) {
            // Clear input buffer for non-integer input
            while (getchar() != '\n');
            printf("Error: Value must be 1-10.\n");
            number = 0; // Set number to a value outside the valid range to continue the loop
        } else {
            if (number < 1) {
                printf("Error: Value must be 1-10.\n");
            } else if (number > 10) {
                printf("Error: Value must be 1-10.\n");
            }
        }
    } while (number < 1 || number > 10);

    printf("Input accepted: [%d]\n", number);
    return 0;
}
