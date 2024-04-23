#include <stdio.h>

int main() {
    // Initialize an unsigned integer variable num with value 1
    unsigned int num = 1;
    // Create a pointer ptr to char and point it to the address of num
    char *ptr = (char *)&num;
    
    // Check the value of the first byte pointed to by ptr
    // If it is 1, the system is little endian
    if (*ptr == 1) {
        printf("Little Endian\n");
    } else {
        // If it is not 1, the system is big endian
        printf("Big Endian\n");
    }
    
    return 0;
}
