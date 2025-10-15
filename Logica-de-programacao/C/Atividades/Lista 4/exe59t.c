#include <stdio.h>
#include <locale.h>
//#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario = 0, salariom = 0, salarioh = 0;
    char sexo, resp;
    //char sexo2;
    
    int idade = 0, idadem = 0;
    printf("----------FUNCIONÁRIOS----------");
    do
    {
        printf("\nDigite o salário: ");
        scanf("%f", &salario);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        if (idade > idadem)
        {
            idadem = idade;
        }
        printf("Digite 'F' para Feminino e 'M' para Masculino: ");
        scanf(" %c", &sexo);
      //  sexo2=toupper(sexo);
        if(sexo=='M' && sexo=='m')
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);

    } while (resp != 'n' && resp != 'N');

    printf("-----------------------------------");
    printf("\nSALÁRIO TOTAL MASCULINO: ");
    printf("\nSALÁRIO TOTAL FEMININO:");

    return 0;
}
