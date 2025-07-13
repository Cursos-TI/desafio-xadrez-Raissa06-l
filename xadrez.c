#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


   void movertorre(int casas){
    if(casas >0){
        printf("Direita\n");  //Movimento da torre
        movertorre(casas -1);
    }
}
void moverrainha(int casas){
    if(casas >0){
        printf("Esquerda\n");  //Movimento da rainha
        moverrainha(casas -1);
    }
}
void moverbispo(int casas){
    if(casas >0){
        printf("Cima, direita\n");  //Movimento do bispo
        moverbispo(casas -1);
    }
}


int main (){
 //Mover as casas
    movertorre(5); //Imprime a direção do movimento da torre
    moverrainha(8);//Imprime a direção do movimento da rainha
    moverbispo(5);//Imprime a direção do movimento do Bispo

 //Movimento do cavalo
    int movimentos = 1;
    for (int i=0; i<movimentos; i++){
        for(int j=0;j<2;j++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }



    return 0;
}
