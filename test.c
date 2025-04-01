#include <stdio.h> 

int main()

{ 
    int n, lastDigit; 

    printf("Type in any number"); 
    scanf("%d" , &n); 

    lastDigit = n % 10; 

    printf("last digit = %d", lastDigit); 

    return 0; 
}