#include <stdio.h>
#include <stdlib.h>

int main()
{   int sayi1, sayi2, sayi3;
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
    printf("Ucuncu Sayiyi Giriniz: ");
    scanf("%d", &sayi3);
     //sayı1 en küçük ise
    if(sayi1 < sayi3 && sayi1 < sayi2)
    {
        if(sayi2<sayi3)
            printf("%d<%d<%d", sayi1, sayi2, sayi3);
        else
            printf("%d<%d<%d", sayi1, sayi3, sayi2);
    }
    //sayı2 en küçük ise
    else if(sayi2 < sayi1 && sayi2 < sayi3)
    {
        if(sayi1 < sayi3)
            printf("%d<%d<%d", sayi2, sayi1, sayi3);
        else
            printf("%d<%d<%d", sayi2, sayi3, sayi1);
    }
    //sayi3 en küçükse
    if(sayi3 < sayi1 && sayi3 < sayi2)
    {
        if(sayi1 < sayi2)
            printf("%d<%d<%d", sayi3, sayi1, sayi2);
        else
            printf("%d<%d<%d", sayi3, sayi2, sayi1);
    }
    return 0;
}
