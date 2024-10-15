//program built to take in a string, and represent it as comma separated ints, to evade defender static analysis

#include <windows.h>
#include <stdio.h>
#include <string.h>

void wrecker(char* wreckerchars, char* badword) {
    int first = 1; // Flag to track the first printed index
    for (int x = 0; x < strlen(badword); ++x) {
        for (int y = 0; y < strlen(wreckerchars); ++y) {
            if (wreckerchars[y] == badword[x]) {
                if (!first) {
                    printf(","); // Print comma before the index if it's not the first one
                }
                printf("%d", y);
                first = 0; // Set flag to false after the first print
            }
        }
    }
     
}

int main() { 
    char wreckerchars[] = "abcijklmndefzABCNOPQRSLMYZ._12opTUVWXDEFGHIJKqrst34567ghuvwxy89";
    char badword[256];
    
    printf("Enter bad word: ");
    scanf("%255s", badword);  

    // Call the wrecker function
    wrecker(wreckerchars, badword);

    return 0;
}
