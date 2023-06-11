#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    FILE *dosya;
    char metin[100];

    // Dosyayý yazma modunda açma
    dosya = fopen("metin.txt", "w");

    if (dosya == NULL) {
        printf("Dosya olusturulamadi!");
        return 1;
    }

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    // Metni dosyaya yazma
    fprintf(dosya, "%s", metin);

    // Dosyayý kapatma
    fclose(dosya);

    // Dosyayý okuma modunda açma
    dosya = fopen("metin.txt", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi!");
        return 1;
    }

    printf("Dosyadan okunan metin:\n");

    // Dosyadan metni okuma ve ekrana yazdýrma
    while (fgets(metin, sizeof(metin), dosya) != NULL) {
        printf("%s", metin);
    }

    // Dosyayý kapatma
    fclose(dosya);

    return 0;
}
