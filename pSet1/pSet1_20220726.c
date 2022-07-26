#include <stdio.h>

int main() {
  // Write C code here
    int height = 0;
    
    // This Loop Verify if the Number is ok
    do 
    {
        // Ask to the user the number to use in height
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);
    
    // Checks the value of height
    printf("\nHeight is: %d \n", height);
    
    // A and B are Auxiliars Integers to do the work
    int a = 1;
    int b = height;
    
        // Loop to the new line
        for (int j = 0; j < height; j++)
        {
            // Loop to the spaces
            for (int i = b - 1; i > 0; i--)
            {
                printf(" ");
            }
            
            // Loop for the Hashes
            for (int k = a; k > 0; k--)
            {
                printf("#");
            }
            
            printf("\n");
            a++;
            b--;
        
        }
    
    return 0;
}