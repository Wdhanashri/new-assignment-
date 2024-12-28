#include <stdio.h>
#include <ctype.h> // For tolower() function

int main() {
    char word[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    while (word[i] != '\0') {
        char ch = tolower(word[i]); // Convert to lowercase for uniform comparison
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z')) { // Check for consonants
            consonants++;
        }
        i++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
