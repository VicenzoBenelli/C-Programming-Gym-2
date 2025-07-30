# 📘 Exercícios em C — Cadastros e Análises de Dados

Repositório contendo três programas escritos em linguagem C com foco em **manipulação de strings**, **controle de fluxo**, **validação de entrada**, e **lógica de comparação**. Cada exercício resolve um problema prático comum com abordagem didática.

---

## 🚀 Exercícios Disponíveis

### 📚 `exercicio_1.c` — Cadastro de Livros

#### 🧠 Objetivo:
Criar um sistema para cadastrar e exibir informações de 3 livros.

#### 📌 Funcionalidades:
- Cadastro de 3 livros.
- Cada livro possui:
  - **Título**: até 100 caracteres.
  - **Autor**: até 50 caracteres.
  - **Ano de lançamento**: número inteiro.
- Impressão formatada dos livros após o cadastro.

#### 🧪 Técnicas Utilizadas:
- **Uso de `fgets`** para evitar buffer overflow em strings.
- **Limpeza de buffer com `getchar()`** após leitura de inteiros com `scanf`.
- **Armazenamento com matriz de caracteres 2D** (`char titulo[3][101]`).

#### 🔍 Peculiaridade:
Boa separação visual entre cadastros e saídas com `printf` estruturado para clareza.

---

### 👨‍💼 `exercicio_2.c` — Cadastro de Funcionários com Verificação de Cargos Duplicados

#### 🧠 Objetivo:
Cadastrar 5 funcionários e identificar se algum cargo foi atribuído a mais de uma pessoa.

#### 📌 Funcionalidades:
- Cadastro de:
  - **Nome** (máximo 50 caracteres)
  - **Cargo** (máximo 30 caracteres)
- Impressão da lista de funcionários.
- Detecção e exibição de **cargos duplicados**.

#### 🧪 Técnicas Utilizadas:
- Uso de `strcmp()` da biblioteca `<string.h>` para comparar cargos.
- Laço **duplo (O(n²))** para verificar duplicações.
- Flag `repitidos` usada para controle lógico da exibição.

#### 🔍 Peculiaridade:
Implementação de um **sistema de verificação de integridade de dados** com algoritmo de comparação eficiente para pequeno volume.

---

### 🎓 `exercicio_3.c` — Verificação de Maioridade de Alunos

#### 🧠 Objetivo:
Cadastrar 4 alunos e exibir apenas os que são **maiores de idade (18+)**.

#### 📌 Funcionalidades:
- Cadastro de 4 alunos.
- Armazenamento de:
  - **Nome** (até 50 caracteres)
  - **Idade** (inteiro)
- Impressão apenas dos alunos com idade igual ou superior a 18 anos.

#### 🧪 Técnicas Utilizadas:
- Entrada com `scanf("%s", nome[i])` e limpeza do buffer com `getchar()`.
- Uso de uma variável contador (`de_maior`) para verificar se ao menos um aluno é maior de idade.

#### 🔍 Peculiaridade:
Apresenta **tratamento lógico para ausência de maiores**, com mensagem personalizada caso nenhum aluno tenha 18 anos ou mais.

---

## 🛠️ Boas Práticas Demonstradas

- ✅ `setlocale(LC_ALL, "Portuguese_Brazil");` para suporte a acentuação
- ✅ Uso de vetores 2D para armazenar várias strings
- ✅ Separação clara entre entrada e saída de dados
- ✅ Comentários e organização didática
- ✅ `getchar()` para limpar o buffer do teclado entre as leituras

---

## 💡 Sugestões de Melhoria Futuras

| Recurso | Descrição |
|--------|-----------|
| 🔄 Uso de `fgets()` em todos os códigos | Evita leitura parcial de nomes compostos |
| 🧱 Uso de `struct` | Representar cada entidade (Livro, Funcionário, Aluno) de forma mais organizada |
| 📂 Modularização | Separar cadastros, verificações e exibições em funções |
| 🔁 Expandir com alocação dinâmica | Para cadastros ilimitados usando ponteiros e `malloc` |
| 💾 Armazenamento em arquivo | Permitir salvar os cadastros em `.txt` para persistência |

---

## 👨‍💻 Autor

Feito com dedicação por [Vicenzo Benelli](https://github.com/VicenzoBenelli)  
_"A lógica é a alma da programação. Em C, ela se revela nua e crua."_ 💡

---

## 🧩 Execução

Para compilar e executar qualquer código:

```bash
gcc exercicio_1.c -o livros
gcc exercicio_2.c -o funcionarios
gcc exercicio_3.c -o alunos

./livros
./funcionarios
./alunos
