#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome
int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char text[1000];
    printf("Enter a sentence or text: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';
    
    if (isPalindrome(text)) {
        printf("The given text is a palindrome.\n");
    } else {
        printf("The given text is not a palindrome.\n");
    }
    
    return 0;
}
