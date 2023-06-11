#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    double num;

    printf("Bir ondalik sayi girin: ");
    scanf("%lf", &num);

    printf("Onaltilik (hexadecimal) olarak: %a\n", num);

    return 0;
}
