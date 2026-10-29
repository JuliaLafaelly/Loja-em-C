#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gravarNomes(const char *arquivo) {
FILE *fp = fopen(arquivo, "w");//Abre o arq. em modo escrita ("w")
if (fp == NULL) { // Testa se o arquivo abriu corretamente
printf("Erro ao abrir o arquivo para escrita.\n");
return;
}

    int cadastrar;

    
        SetConsoleOutputCP(CP_UTF8); // acentos na saída
        SetConsoleInputCP(CP_UTF8); // acentos na digitação

        printf("----Loja----\n");
        printf("Escolha uma opção:\n");
        printf("1-Criar cadastro\n");
        printf("2-Cadastrar produtos\n");
        printf("3-Listar produtos\n");
        printf("4-Alterar produtos\n");
        printf("5-Excluir produtos\n");
        printf("6-Buscar produtos\n");
        printf("7-Ordenar produtos\n");
        printf("8-Sair\n");
        printf("Opção: ");
        return 0; 
    }