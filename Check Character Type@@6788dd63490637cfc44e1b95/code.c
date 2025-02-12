#include <stdio.h>

int main() {
    char ch;    
    scanf("%c", &ch);
// Check if the character is a digit
    if (ch >= '0' && ch <= '9') {
        printf("Digit", ch);
    }
    // Check if the character is a vowel
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel", ch);
    }
    // Check if the character is an alphabetic character (a consonant)
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant", ch);
    }
    // If it's none of the above, it is a special character
    else {
        printf("Special Character", ch);
    }

    return 0;
}