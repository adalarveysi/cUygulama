#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    FILE *dosya;
    char metin[100];

    // Dosyay� yazma modunda a�ma
    dosya = fopen("metin.txt", "w");

    if (dosya == NULL) {
        printf("Dosya olusturulamadi!");
        return 1;
    }

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    // Metni dosyaya yazma
    fprintf(dosya, "%s", metin);

    // Dosyay� kapatma
    fclose(dosya);

    // Dosyay� okuma modunda a�ma
    dosya = fopen("metin.txt", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi!");
        return 1;
    }

    printf("Dosyadan okunan metin:\n");

    // Dosyadan metni okuma ve ekrana yazd�rma
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    // Dosyay� kapatma
    fclose(dosya);

    return 0;
}
