#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(char sentence[], int length);
int count_consonants(char sentence[], int length);
int count_digits(char sentence[], int length);
int count_symbols(char sentence[], int length);

void print_uppercase(char sentence[], int length);

int main(void) {

    char sentence[200];

    printf("Enter a word: ");

    if (scanf("%199s", sentence) != 1) {
        printf("Input error.\n");
        return 1;
    }

    int length = strlen(sentence);

    printf("Original: %s\n", sentence);
    printf("Characters: %d\n", length); 

    printf("Uppercase: ");
    print_uppercase(sentence, length);
    printf("\n");

    int vowel = count_vowels(sentence, length);
    printf("Vowels: %d\n", vowel);

    int consonant = count_consonants(sentence, length);
    printf("Consonants: %d\n", consonant);

    int letter = consonant + vowel;
    printf("Letters: %d\n", letter);

    int digit = count_digits(sentence, length);
    printf("Digits: %d\n", digit);

    int symbol = count_symbols(sentence, length);
    printf("Symbols: %d\n", symbol);

    return 0;
}

int count_consonants(char sentence[], int length) {
    int consonant = 0;

    for (int i = 0; i < length; i++) {
        char letter = tolower(sentence[i]);

        if (letter >= 'a' && letter <= 'z' &&
            letter != 'a' && letter != 'e' &&
            letter != 'i' && letter != 'o' &&
            letter != 'u') {
            consonant++;
        }
    }

    return consonant;
}

int count_vowels(char sentence[], int length) {
    int vowel = 0;

    for (int i = 0; i < length; i++) {
        char letter = tolower(sentence[i]);

        if (letter == 'a' || letter == 'e' ||
            letter == 'i' || letter == 'o' ||
            letter == 'u') {
            vowel++;
        }
    }

    return vowel;
}

int count_digits(char sentence[], int length) {
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (sentence[i] >= '0' && sentence[i] <= '9') {
            count++;
        }
    }

    return count;
}

int count_symbols(char sentence[], int length) {
    int symbol = 0;

    for (int i = 0; i < length; i++) {
        char character = sentence[i];

        if (!((character >= 'a' && character <= 'z') ||
              (character >= 'A' && character <= 'Z') ||
              (character >= '0' && character <= '9'))) {
            symbol++;
        }
    }

    return symbol;
}

void print_uppercase(char sentence[], int length) {

    for (int i = 0; i < length; i++) {
        printf("%c", toupper(sentence[i])); 
    }

}