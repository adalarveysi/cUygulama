#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Deðiþkenlere deðer atama
    num1 = 10;
    num2 = 20;

    // Ýþaretçilere deðiþkenlerin adreslerini atama
    ptr1 = &num1;
    ptr2 = &num2;

    // Ýþaretçileri kullanarak deðerleri ekrana yazdýrma
    printf("num1 = %d\n", *ptr1);
    printf("num2 = %d\n", *ptr2);

    return 0;
}
