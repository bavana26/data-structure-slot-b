#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidString(const char *str) {
	int i;
    int length = strlen(str);
    
    // Check if the string is empty
    if (length == 0) {
        return false;
    }
    
    for (i=0;i<length;i++) {
        if (!(isalpha(str[i]) || isdigit(str[i]))) {
            return false;
        }
    }
    
    return true;
}

int main() {
    char input[100];
    
    printf("Enter a string: ");
    scanf("%s", input);
    
    if (isValidString(input)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }
    
    return 0;
}
