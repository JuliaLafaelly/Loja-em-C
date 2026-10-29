# 🛒 Cadastro de Loja em C

Programa de console em linguagem C que gerencia o cadastro de produtos de uma loja, guardando os dados em um **arquivo de texto**. O projeto une **algoritmos de ordenação**, **manipulação de arquivos**, **estruturas de dados** e **ponteiros**.

> Atividade Avaliativa 04 — Algoritmos e Pensamento Computacional — UNICID

---

## 📋 Funcionalidades

- **Criar cadastro:** cria (ou recria) a tabela de dados em `produtos.txt`.
- **Cadastrar produtos:** o **ID é gerado automaticamente** (incremental), sem precisar digitar.
- **Verificação de duplicatas:** não permite dois produtos com o mesmo nome (sem diferenciar maiúsculas de minúsculas).
- **Listar produtos:** exibe os dados em formato de tabela.
- **Alterar produtos:** edita os campos de um produto pelo ID (ENTER mantém o valor atual).
- **Excluir produtos:** remove um produto pelo ID, com confirmação.
- **Buscar produtos:** por nome ou por categoria, aceitando texto parcial.
- **Ordenar produtos** (Bubble Sort):
  - Nome (A–Z)
  - Nome (Z–A)
  - Preço (menor → maior)
  - Preço (maior → menor)

---

## 🗂️ Formato dos dados

Os dados ficam no arquivo `produtos.txt`, um produto por linha, com campos separados por `;`.

```
PROXIMO_ID;4
1;Camiseta Básica;Vestuário;49.90;30
2;Mouse Óptico USB;Informática;59.99;15
3;Shampoo 300ml;Higiene Pessoal;22.50;40
```

- A **primeira linha** guarda o próximo ID a ser usado. Por isso, um ID excluído **não é reaproveitado**.
- As demais linhas seguem o formato: `id;nome;categoria;preço;quantidade`.

Exemplo de como a tabela aparece na tela:

```
ID   | NOME                           | CATEGORIA       |      PRECO |   QTD
-----+--------------------------------+-----------------+------------+------
1    | Camiseta Básica                | Vestuário       |      49.90 |    30
2    | Mouse Óptico USB               | Informática     |      59.99 |    15
3    | Shampoo 300ml                  | Higiene Pessoal |      22.50 |    40
```

---

## 🧠 Conceitos utilizados

| Conceito | Onde aparece |
|---|---|
| `struct` | `Produto` (dados do item) e `Loja` (vetor + controle de ID) |
| Ponteiros | Percorrer o vetor (`Produto *p`), passar a `Loja *` para as funções |
| Alocação dinâmica | `malloc`, `realloc` e `free` para o vetor de produtos |
| Manipulação de arquivo | `fopen`, `fgets`, `fprintf`, `sscanf`, `fclose` |
| Ponteiro para função | `Comparador`, que escolhe o critério da ordenação |
| Ordenação | Bubble Sort |

### Como funciona a ordenação

O Bubble Sort trabalha sobre um **vetor de ponteiros** (`Produto **`). Em vez de copiar structs inteiras, ele troca apenas os endereços. Assim, a lista original e o arquivo **não são alterados**: a ordenação serve só para exibir o resultado.

Os quatro tipos de ordenação usam o mesmo algoritmo. O que muda é a função de comparação:

```c
typedef int (*Comparador)(const Produto *, const Produto *);

bubbleSort(vet, total, nomeAZ);            // Nome A–Z
bubbleSort(vet, total, nomeZA);            // Nome Z–A
bubbleSort(vet, total, precoMenorMaior);   // Preço crescente
bubbleSort(vet, total, precoMaiorMenor);   // Preço decrescente
```

---

## 🧪 Roteiro de teste

1. Cadastre 4 ou 5 produtos com categorias e preços variados.
2. Tente cadastrar um nome repetido e confira se foi recusado.
3. Liste os produtos e confira se os IDs foram gerados sozinhos.
4. Faça buscas por nome e por categoria, com texto parcial.
5. Altere o preço de um produto.
6. Exclua um produto, cadastre outro e confira que o ID antigo não foi reutilizado.
7. Teste as 4 ordenações.
8. Feche e abra o programa de novo para confirmar que os dados continuam salvos.

---

## 👩‍💻 Autora

**Julia** — Engenharia de Software — UNICID
