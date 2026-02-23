#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char str[]) {
    int left  = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() {
    char s[1000];
    scanf("%s", s);

    if (is_palindrome(s))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}