
main(){

int simbolo_trilha = 0;
int Player01_heart = 0;
int Player02_wood  = 0;
int Player03_sword = 0;
int Player04_smile = 0;


simbolo_trilha = 254;
Player01_heart = 3;
Player02_wood  = 5;
Player03_sword = 6;
Player04_smile = 1;


system("color 2");
 char mat2[15][15];



     for(int i=0;i<15;i++){
      for(int j=0;j<15;j++){
        mat2[i][j]=207;
      }
      printf("\n");
    }

// MATRIZ LADO VERMELHO
char vazio =' ';

  for(int i=0;i<6;i++){
  for(int j=0;j<6;j++){
     mat2[i][j] = 176;
  }
  printf("\n");
}
  mat2[1][1] = Player01_heart;
  mat2[1][4] = Player01_heart;
  mat2[4][1] = Player01_heart;
  mat2[4][4] = Player01_heart;

  //TRILHA VERMELHA
  mat2[6][1] = simbolo_trilha;
  mat2[7][1] = simbolo_trilha;
  mat2[7][2] = simbolo_trilha;
  mat2[7][3] = simbolo_trilha;
  mat2[7][4] = simbolo_trilha;
  mat2[7][5] = simbolo_trilha;
  mat2[7][6] = simbolo_trilha;

//MATRIZ LADO VERDE

  for(int i=0;i<6;i++){
  for(int j=9;j<15;j++){
     mat2[i][j] = 176;
  }
  printf("\n");
}
mat2[1][10] = Player02_wood;
mat2[1][13] = Player02_wood;
mat2[4][10] = Player02_wood;
mat2[4][13] = Player02_wood;

 //TRILHA VERDE
  mat2[1][8] = simbolo_trilha;
  mat2[1][7] = simbolo_trilha;
  mat2[2][7] = simbolo_trilha;
  mat2[3][7] = simbolo_trilha;
  mat2[4][7] = simbolo_trilha;
  mat2[5][7] = simbolo_trilha;
  mat2[6][7] = simbolo_trilha;

//MATRIZ LADO AMARELO

  for(int i=9;i<15;i++){
  for(int j=9;j<15;j++){
     mat2[i][j] = 176;
  }
  printf("\n");
}
mat2[10][10] = Player04_smile;
mat2[10][13] = Player04_smile;
mat2[13][10] = Player04_smile;
mat2[13][13] = Player04_smile;

//TRILHA AMARELO
  mat2[8][13] = simbolo_trilha;
  mat2[7][13] = simbolo_trilha;
  mat2[7][12] = simbolo_trilha;
  mat2[7][11] = simbolo_trilha;
  mat2[7][10] = simbolo_trilha;
  mat2[7] [9] = simbolo_trilha;
  mat2[7] [8] = simbolo_trilha;

//MATRIZ LADO AZUL
  for(int i=9;i<15;i++){
  for(int j=0;j<6;j++){
     mat2[i][j] = 176;
  }
  printf("\n");
}
mat2[10][1] = Player03_sword;
mat2[10][4] = Player03_sword;
mat2[13][1] = Player03_sword;
mat2[13][4] = Player03_sword;

 //TRILHA AZUL
  mat2[13][6] = simbolo_trilha;
  mat2[13][7] = simbolo_trilha;
  mat2[12][7] = simbolo_trilha;
  mat2[11][7] = simbolo_trilha;
  mat2[10][7] = simbolo_trilha;
  mat2[9] [7] = simbolo_trilha;
  mat2[8] [7] = simbolo_trilha;


//****************************************************** SHOW TOITAL MATRIZ

     for(int i=0;i<15;i++){
      for(int j=0;j<15;j++){
        printf(" %c",mat2[i][j]);
      }
      printf("\n");
    }
}
































