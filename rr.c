#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_NONSTDC_NO_DEPRECATE
// Define the structure mystring
typedef struct mystring {
    char* p;  // Pointer to hold the string
    void (*show)(struct mystring* s);  // Function pointer to show the string
} mystring;

// Function to print the string
void print(mystring* s) {
    if (s->p == NULL)
        printf("String is not initialized.\n");
    else
        printf("%s\n", s->p);
}

// Function to create a new mystring object
mystring* new_string(char* s) {
    // Allocate memory for mystring structure
    mystring* temp = (mystring*)malloc(sizeof(mystring));
   
    // Duplicate the input string using _strdup
    temp->p = _strdup(s);  // Use _strdup instead of strdup
    
    // Assign the print function to show function pointer
    temp->show = print;
    return temp;
}

int main() {
    // Create a new mystring object
    mystring* str = new_string("Hello");

    // Use the show function pointer to print the string
    str->show(str);

    // Free allocated memory
     // Free the duplicated string
    free(str);  // Free the mystring structure

    return 0;
}
