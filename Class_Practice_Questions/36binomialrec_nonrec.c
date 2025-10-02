#include <stdio.h>

// Recursive fact 
long long fact_recursive(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact_recursive(n - 1);
}

// Non-recursive fact
long long fact_non_recursive(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Binomial coefficient using recursive fact
long long binomial_recursive(int n, int r) {
    return fact_recursive(n) / (fact_recursive(r) * fact_recursive(n - r));
}

// Binomial coefficient using non-recursive fact
long long binomial_non_recursive(int n, int r) {
    return fact_non_recursive(n) / (fact_non_recursive(r) * fact_non_recursive(n - r));
}

int main() {
    int n, r;

    printf("Enter n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    if (r > n || n < 0 || r < 0) {
        printf("Invalid input. Ensure that n >= r and both are non-negative.\n");
        return 1;
    }
    // Using recursive factorial
    long long bin_rec = binomial_recursive(n, r);
    // Using non-recursive factorial
    long long bin_nonrec = binomial_non_recursive(n, r);

    printf("Answer of binomial recursive:%lld\n",bin_rec);
    printf("Answer of binomial non-recursive:%lld\n",bin_nonrec);
    return 0;
}
