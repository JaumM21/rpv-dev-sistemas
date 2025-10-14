#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i = 0, cont = 1, r1 = 0, r2 = 0;
    printf("LEITURA DE 6 NÚMEROS INTEIROS: \n");
    while (cont <= 6)
    {

        printf("Digite o %d numero:", cont);
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            r1++;
        }
        else
        {
            r2++;
        }
        cont++;
    }
    printf("QUANTIDADE DE NÚMEROS PARES= %d \n", r1);
    printf("QUANTIDADE DE NÚMEROS ÍMPARES= %d \n", r2);
    return 0;
}