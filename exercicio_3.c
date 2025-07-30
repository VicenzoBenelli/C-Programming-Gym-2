# include <stdio.h>
# include <locale.h>
# include <string.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[4][51];
    int idade[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nDigite o nome do aluno %d: ", i+1);
        scanf("%s", nome[i]);
        getchar();

        printf("\nDigite a idade do aluno %d: ", i+1);
        scanf("%d", &idade[i]);
        getchar();

        printf("\n------------------------------------\n");
    }

    printf("\nAlunos Maiores de idade: \n");

    int de_maior = 0;


    for (int i = 0; i < 4; i++)
    {
        if (idade[i] >= 18)
        {
            printf("\nNome: %s | Idade: %d", nome[i], idade[i]);
            de_maior += 1; 
        }
        
        
    }
    
    if (de_maior == 0)
    {
        printf("Não se possui Alunos maiores de 18 anos !");
    }
    
    
    
    
  
    return 0;
}