#include <stdio.h>
#include <string.h>

// Function to compute the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute the number of anagrams for a given word
int countAnagrams(char word[]) {
    int length = strlen(word);
    int letterCount[26] = {0};  // Array to count occurrences of each letter

    // Count occurrences of each letter in the word
    for (int i = 0; i < length; i++) {
        letterCount[word[i] - 'A']++;
    }

    // Calculate the denominator for permutations considering repeated letters
    int denominator = 1;
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 1) {
            denominator *= factorial(letterCount[i]);
        }
    }

    // Calculate the number of anagrams using factorial formula
    int anagramCount = factorial(length) / denominator;
    return anagramCount;
}

int main() {
    char word[15];
    printf("Enter a word in uppercase letters: ");
    scanf("%s", word);

    int anagramCount = countAnagrams(word);
    printf("Number of anagrams: %d\n", anagramCount);

    return 0;
}
