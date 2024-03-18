/*#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Define cores
  //  SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
  //  printf("#######################");

  //  SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
   // printf("##################");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Define a cor padrão


//****************************************************************************************************************************






    return 0;
}
*/
#include <stdio.h>
#include <windows.h>

#define FOREGROUND_BLUE 1
#define FOREGROUND_RED 4

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Definindo cores para a primeira e última coluna
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // Cor para a primeira coluna
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Cor para a última coluna

    // Definindo as dimensões da matriz
    int linhas = 3;
    int colunas = 3;

    // Criando a matriz e preenchendo com o caractere 254
    char matriz[linhas][colunas];
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (j == 0) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); // Cor para a primeira coluna
            } else if (j == colunas - 1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Cor para a última coluna
            } else {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Cor padrão
            }
            printf("%c ", 254); // Caractere 254 (caractere de bloco)
        }
        printf("\n");
    }

    return 0;
}
