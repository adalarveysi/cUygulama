#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Değişkenlere değer atama
    num1 = 10;
    num2 = 20;

    // İşaretçilere değişkenlerin adreslerini atama
    ptr1 = &num1;
    ptr2 = &num2;

    // İşaretçileri kullanarak değerleri ekrana yazdırma
    printf("num1 = %d\n", *ptr1);
    printf("num2 = %d\n", *ptr2);

    return 0;
}
