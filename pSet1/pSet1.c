// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int height = 0;
    
    // This Loop Verify if the Number is ok
    do 
    {
        // Ask to the user the number to use in height
        printf("Height: ");
        scanf("%i", height);
    }
    while (height < 1 || height > 8);
    
    // Checks the value of height
    printf("%i", &height);
    
    /*
    for (int i; i = 1; i--)
    {
        printf("%i", &height);
        printf("#\n");
        printf("value of i:\n%i", &i);
    }
    */
    
    return 0;
}