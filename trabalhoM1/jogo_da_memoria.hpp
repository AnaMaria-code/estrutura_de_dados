#include <string>
#include "lista_duplamente_encadeada.hpp"

enum {
    //tipo da carta
    NORMAL,
    BONUS,
    PENALIDADE
};

typedef struct{
    int id;
    std::string simbolo;
    bool oculta;
    int tipo;
} Carta;

typedef struct{
    char simbolo;
    int duracao;
    std::string efeito;
} Bonus;

template<typename T>
void inicializa_cartas(ListaDinamica<T> &cartas){
    std::string simbolos[17]{
        "🍎", "🍐", "🍊", "🍋", "🍌", 
        "🍉", "🍇", "🍓", "🫐", "🍈", 
        "🍒", "🍑", "🥭", "🍍", "🥥", 
        "🥝", "🍅"
    };
    for(int i = 0; i < 34; i++){
        Carta c{i, simbolos[i%18], true, NORMAL};
        insere(cartas, c);
    }
}

template<typename T>
void cria_tabuleiro(ListaDinamica<T> &tabuleiro){ //tabuleiro: {int id, nodo prox, nodo ant}
    cria(tabuleiro);

}