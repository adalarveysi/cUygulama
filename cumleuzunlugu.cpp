#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];

    printf("Bir kelime veya cumle girin: ");
    fgets(text, sizeof(text), stdin);

    // fgets, metni sonland�ran bir '\n' karakteri al�r,
    // bu nedenle '\n' karakterini kald�rmam�z gerekiyor.
    text[strcspn(text, "\n")] = '\0';

    int length = strlen(text);

    printf("Girilen metnin uzunlugu: %d\n", length);

    return 0;
}
