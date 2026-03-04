#include <string>
#include "lista_duplamente_encadeada.hpp"

enum tipoCarta{
    //tipo da carta
    NORMAL,
    BONUS,
    PENALIDADE
};

typedef struct{
    int id;
    std::string simbolo;
    bool oculta;
    tipoCarta tipo;
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
        insere(cartas, c); //falta a posicao
    }
}

template<typename T>
void cria_tabuleiro(ListaDinamica<T> &tabuleiro){ //tabuleiro: {int id, nodo prox, nodo ant}
    cria(tabuleiro);

}
enum efeitoCarta{
 //pensar em quais vao ser os efeitos das nossas cartas bonus e penalidades e colocar aqui.
};

struct Efeito{
    int duracao;
    efeitoCarta efeito; //tipo de dado que vai estar dentro da lista inventario de cada jogador
};

struct Jogador{
    int pontos;
    ListaDuplamenteEncadeada<Efeito> inventario;
};

template <typename T>
void iniciaJogador(Jogador &j{
    j.pontos =0;   //inicializa os campos do jogador
    criaLista(j.inventario);
}
