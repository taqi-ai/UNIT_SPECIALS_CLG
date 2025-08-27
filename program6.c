#include <stdio.h>

// Function to check palindrome
int check_pallindrome(int n) {
    int rev = 0, copy = n, d;
    while (n > 0) {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    return (rev == copy);
}

// Function to check prime
int check_prime(int n) {
    if (n == 1) return -1; // neither prime nor composite
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            count++;
    }
    return (count == 2); // prime if exactly 2 divisors
}

// Function to check even/odd
int check_even_odd(int n) {
    return (n % 2 == 0);
}

int main() {
    int n;
    printf("ENTER A NUMBER TO CHECK WHETHER IT IS EVEN, ODD, PRIME OR PALINDROME: ");
    scanf("%d", &n);

    // Palindrome check
    if (n > 0 && n < 10) {
        printf("%d IS A SINGLE DIGIT NUMBER SO WE CANNOT SAY THAT IT IS PALINDROME\n", n);
    } else {
        if (check_pallindrome(n))
            printf("%d IS A PALINDROME NUMBER\n", n);
        else
            printf("%d IS NOT A PALINDROME NUMBER\n", n);
    }

    // Prime check
    int prime_status = check_prime(n);
    if (prime_status == 1)
        printf("%d IS A PRIME NUMBER\n", n);
    else if (prime_status == -1)
        printf("%d IS NEITHER PRIME NOR COMPOSITE\n", n);
    else
        printf("%d IS NOT A PRIME NUMBER\n", n);

    // Even/Odd check
    if (check_even_odd(n))
        printf("%d IS AN EVEN NUMBER\n", n);
    else
        printf("%d IS AN ODD NUMBER\n", n);

    return 0;
}
