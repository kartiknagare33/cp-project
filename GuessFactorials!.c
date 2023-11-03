#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int fact = factorial(num);
    printf("The factorial of %d is %d\n", num, fact);
    
    if (fact % 2 == 0) {
        printf("This factorial is even.\n");
    } else {
        printf("This factorial is odd.\n");
    }
    
    return 0;
}
