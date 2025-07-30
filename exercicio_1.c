# include <stdio.h>
# include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char titulo[3][101];
    char autor[3][51];
    int ano [3];

    printf("Cadastro de livros: ");

    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite o Titulo do Livro: ");
        fgets(titulo[i], 101, stdin);

        printf("\nDigite o Autor do livro: ");
        fgets(autor[i], 51, stdin);

        printf("\nDigite o Ano de lançamento do Livro: ");
        scanf("%d", &ano[i]);
        getchar();

        printf("\n---------------------------------------\n");

    }
    
   printf("\nLista dos Livros cadastrados:\n ");


   for (int i = 0; i < 3; i++)
   {

    printf("Livro %d\n", i+1);
    printf("\nTitulo do Livro: %s", titulo[i]);
    printf("\nAutor do Livro: %s", autor[i]);
    printf("\n Ano de Lançamento do Livro: %d",ano[i]);

    printf("\n-----------------------------------");
   }
   

    return 0;
}