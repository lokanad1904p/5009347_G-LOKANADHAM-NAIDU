#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long digitsum(const char *n) {
    long long sum = 0;
    for (int i = 0; n[i] != '\0'; i++) {
        sum += n[i] - '0';
    }
    return sum;
}

long long super_digit(long long num) {
    if (num < 10) return num;
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return super_digit(sum);
}

int main() {
    char *n = malloc(1000005 * sizeof(char));
    long long k;
    
    scanf("%s %lld", n, &k);
    
    long long initialsum = digitsum(n) * k;
    printf("%lld\n", super_digit(initialsum));
    
    free(n); 
    return 0;
}