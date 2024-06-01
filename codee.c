#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int findNext(int num) {
    num++; 
    while (true) {
        char str[20];
        sprintf(str, "%d", num); 
        if (isPalindrome(str))
            return num;
        num++;
    }
}

int main() {
    int inputNum;
    printf("Enter a number: ");
    scanf("%d", &inputNum);

    int nextPalindrome = findNext(inputNum);
    printf("The next palindrome greater than %d is: %d\n", inputNum, nextPalindrome);

    return 0;
}
