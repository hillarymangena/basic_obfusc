//program reverses the results from the wre index-based obsfuscator

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_indices_to_word(const char* str, const char* indices) {
    char result[256]; //
    int index;
    int resultIndex = 0;

    // Tokenize the indices string using ',' as the delimiter
    char* token = strtok((char*)indices, ",");
    while (token != NULL) {
        index = atoi(token); 
        result[resultIndex++] = str[index]; 
        token = strtok(NULL, ",");
    }
    result[resultIndex] = '\0'; 

    printf("Original fingerprinted word: %s\n", result);
}

int main() {
    const char* str = "abcijklmndefzABCNOPQRSLMYZ._12opTUVWXDEFGHIJKqrst34567ghuvwxy89"; 
    char indices[256];

    printf("Enter wre output: ");
    scanf("%255s", indices);  

    // Call the conversion function
    convert_indices_to_word(str, indices);

    return 0;
}
