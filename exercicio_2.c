# include <stdio.h>
# include <locale.h>
# include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[5][51];
    char cargo[5][31];

    printf("\nCadastrar Funcionario: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o Nome do Funcionario: ");
        scanf("%s", nome[i]);
        getchar();

        printf("Cargo do Funcionario: ");
        scanf("%s", cargo[i]);
        getchar();

        printf("\n------------------------------------------\n");
    
    }


    printf("\nLista de Funcionarios: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nFuncionario Numero %d\n", i+1);
        printf("\nNome do Funcionario: %s", nome[i]);
        printf("\nCargo do Funcionario: %s", cargo[i]);

        printf("\n------------------------------------------\n");
    }
    
    
    printf("\nCargos Repetidos:\n");

    int repitidos = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(cargo[i], cargo[j]) == 0)
            {
                printf("\nNome: %s (Cargo: %s) \n", nome[i], cargo[i]);
                printf("\nNome: %s (Cargo: %s) \n", nome[j], cargo[j]);
                repitidos = 1;
            }
            
        }
     
    }

      if (repitidos == 0)
     {
        printf("\nNenhum Funcionario Possui Cargos Repetidos !\n");
     }
    
  
    return 0;
}