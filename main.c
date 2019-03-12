//              Universidade do Vale do Itaja� (UNIVALI) 2017/1                 //
//    CURSO: Engenharia de Computa��o / Disciplina Algoritmos e Programa��o     //
//                                                                              //
//    DESENVOLVEDORES: Arthur Boss                                              //
//                                                                              //
//    CONTATO: arthurboss@edu.univali.br                                        //
//                                                                              //
/********************************************************************************/
/***************************** BATALHA NAVAL EM C *******************************/
/********************************************************************************/

//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //PERMITE DEFINIR REGI�O E IDIOMA DO APLICATIVO
#include <windows.h> //PERMITE MANIPULAR DEFINI��ES DO CONSOLE

//BIBLIOTECAS LOCAIS
#include "config.h"

//CONSTANTES
#define WIN32_LEAN_AND_MEAN //DIMINUI O TEMPO DE COMPILA��O DO PROJETO

//PROT�TIPOS DAS FUN��ES______________________________________________//

//MENU PRINCIPAL______________//

void MENU_PRINCIPAL();

//REGRAS BATALHA NAVAL
void REGRAS(int X, int Y, int menu);

//CR�DITOS DE DESENVOLVIMENTO
void CREDITOS(int X, int Y);

//MOSTRA PONTUA��O DOS JOGADORES
void JOGADORES(int X, int Y);

//SAIR DO APLICATIVO
void MENU_SAIR(int X, int Y);

//INTERFACE DO MENU PRINCEPAL
void INTERFACE_MENU_PRINCIPAL(int X, int Y);

//JOGO________________________//

//SELE��O DE DIFICULDADE
int NIVEL(int X, int Y);

//EXECU��O DO JOGO
void JOGO(int X, int Y);

//GERA��O DOS NAVIOS
void NAVIOS(int **matriz, int quantidade, int tamanho_navio, int limite);

//GERA��O HIDROAVI�O
void HIDROAVIAO(int **matriz);

//TABULEIRO DE NAVIOS
void TABULEIRO_NAVIOS(int X, int Y, int **matriz, int **matriz_jogador, int oculta);

//TABULEIRO DE TIROS
void TABULEIRO_TIROS(int X, int Y, int **matriz_jogador, int oculta);

//ANALISA TECLA DIGITADA
int RECEBE_TECLA(int X, int Y, int COORD_X, int COORD_Y, int dificuldade, int pontos, int tiros_dados, int tiros_restantes,
                 int erros, int acertos, int **matriz, int **matriz_jogador, int oculta, int linha_coluna);

//NAVEGA��O COORDENADAS DAS LINHAS
int COORDENADAS_LINHAS(int X, int Y, int COORD_X, int COORD_Y, int VALOR, int VALOR_MAX);

//NAVEGA��O COORDENADAS DAS COLUNAS
int COORDENADAS_COLUNAS(int X, int Y, int COORD_X, int COORD_Y, int VALOR, int VALOR_MAX);

//MENSAGEM DE ACERTO OU ERRO DO TIRO
void TIRO(int X, int Y, int info, int coluna, int linha, int **matriz);

//ESTAT�STICAS DO JOGO
void STATUS(int X, int Y, int dificuldade, int pontos,
            int tiros_dados, int tiros_restantes, int erros, int acertos);

//MENSAGEM DE FINAL DE JOGO
void FIM_DO_JOGO(int X, int Y, int caso, int acertos, int tiros_dados);

//MENU DO JOGO
int MENU(int X, int Y);

//TABELA LISTA DE COMANDOS
void INDICE(int X, int Y);

//SALVA PONTOS EM UM ARQUIVO DE TEXTO
void SALVA_PONTOS(int X, int Y, int pontos);

//____________________________________________________________________//



//FUN��O PRINCIPAL
int main()
{
    setlocale(LC_ALL, " "); //REGI�O E IDIOMA DO APLICATIVO

    //CHAMADAS DAS FUN��ES
    CONFIG_CONSOLE();
    MENU_PRINCIPAL();

    return 0;
}
