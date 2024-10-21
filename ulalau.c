/*
Nome......:
RA........:
data......:
Objetivo..:
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (short)x;
    coord.Y = (short)y;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, coord);
}

typedef struct Menu
{
    int cadastrar;
    float consultar;
    char sair;
} Reg_dados;

// Função padrão da tela
void tela()
{
    int lin;
    system("cls");
    for (lin = 1; lin < 25; lin++)
    {
        gotoxy(1, lin);
        printf("|");
        gotoxy(79, lin);
        printf("|");
    }
    gotoxy(1, 1);
    printf("+-----------------------------------------------------------------------------+");

    gotoxy(1, 4);
    printf("+-----------------------------------------------------------------------------+");

    gotoxy(1, 22);
    printf("+-----------------------------------------------------------------------------+");

    gotoxy(1, 24);
    printf("+-----------------------------------------------------------------------------+");

    gotoxy(3, 2);
    printf("UNICV");
    gotoxy(60, 2);
    printf("Estruturas de Dados");
    gotoxy(3, 3);
    printf("SISTEMA DE CADASTRO DE CLIENTES ");
    gotoxy(66, 3);
    printf("Prof. Rodney");
    gotoxy(2, 23);
    printf("MSG: ");
}
    //programa principal
    int main(){

        int opcao;

        system("cls");
        system("color 0A");

        tela();
     do{   gotoxy(30,9);
        printf("1 - Cadastrar");
        gotoxy(30,11);
        printf("2 - Consultar");
        gotoxy(30,13);
        printf("3 - Sair");

        gotoxy(6,23);
        scanf("%d");

     }while (opcao != 3);
     {
        
     }
     

    }