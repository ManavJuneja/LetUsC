#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice, num, i, fact;

    while (1) {
        printf("\n1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd / Even\n");
        printf("4. Exit\n");
        printf("Your choice? ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter number: ");
                scanf("%d", &num);
                if (num < 0) {
                    printf("Factorial is not defined for negative numbers.\n");
                } else {
                    fact = 1;
                    for (i = 1; i <= num; i++) {
                        fact *= i;
                    }
                    printf("Factorial value = %d\n", fact);
                }
                break;

            case 2:
                printf("\nEnter number: ");
                scanf("%d", &num);
                if (num < 2) {
                    printf("Not a prime number\n");
                } else {
                    int isPrime = 1;
                    for (i = 2; i <= sqrt(num); i++) {
                        if (num % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("Prime number\n");
                    } else {
                        printf("Not a prime number\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter number: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    printf("Even number\n");
                } else {
                    printf("Odd number\n");
                }
                break;

            case 4:
                exit(0); // Terminates program execution
                break;

            default:
                printf("Wrong choice!\a\n");
        }
    }
    return 0;
}

