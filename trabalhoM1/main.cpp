#include <iostream>
#include "jogo_da_memoria.hpp"
using namespace std;

//Trabalho Mateus Benvenutti, Ana Carolina Maria e Thiago Filisbino

int main(){

    ListaDinamica<Carta> tabuleiro;
    cria(tabuleiro);
    Jogador jogador1, jogador2;
    iniciaJogador(jogador1);
    iniciaJogador(jogador2);

    return 0;
}