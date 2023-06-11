#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

unsigned long long Factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int main() {
    unsigned int num;

    printf("Bir sayi girin: ");
    scanf("%u", &num);

    unsigned long long result = Factorial(num);

    printf("%u! = %llu\n", num, result);

    return 0;
}
