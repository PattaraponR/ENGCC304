#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char sentence[MAX_SIZE];
    int vowel_count = 0;
    char *char_ptr;

    printf("Enter a sentence: ");
    if (fgets(sentence, MAX_SIZE, stdin) == NULL) {
        return 1;
    }

    sentence[strcspn(sentence, "\n")] = '\0';

    char_ptr = sentence;

    while (*char_ptr != '\0') {
        switch (*char_ptr) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++;
                break;
        }
        char_ptr++;
    }

    printf("\n--- STRING ANALYSIS REPORT ---\n");
    printf("Input String: \"%s\"\n", sentence);
    printf("Total Vowel Count: %d\n", vowel_count);

    return 0;
}
