#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar1, kenar2, kenar3;
    printf("1. kenar uzunlugu giriniz: ");
    scanf("%d",&kenar1);
    printf("2. kenar uzunlugu giriniz: ");
    scanf("%d",&kenar2);
    printf("3. kenar uzunlugunu giriniz: ");
    scanf("%d",&kenar3);

    if((kenar1==kenar2)&&(kenar2==kenar3))
    {
        printf("eskenar Ucgen\n");
    }
    else if ((kenar1==kenar2) || (kenar1==kenar3) || (kenar2==kenar3))
    {
        printf("ikizkenar ucgen\n");
    }
    else
    {
        printf("cesitkenar ucgen\n");
    }

    return 0;
}
