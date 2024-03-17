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

#define FOREGROUND_YELLOW 14

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char matriz[3][3] = {
        { '#','#','#' },
        { '#', 3, '#' },
        { '#', '#', '#' }
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == 3) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            } else {
                // Define a cor padrão
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
            }
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

