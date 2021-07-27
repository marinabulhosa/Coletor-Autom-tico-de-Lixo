//Marina Bulhosa
#ifndef COLETORDELIXO_H_INCLUDED
#define COLETORDELIXO_H_INCLUDED

typedef struct Memoria{
    void *valor;
    int cont;
}memoria;

memoria *malloc2(int tamanho);
void *atrib(memoria *endereco, void *valor);
void atrib2(memoria **endereco1, memoria **endereco2); ///Endereço 1 apontara para o endereço2
void Imprime(memoria *endereco1);


#endif // COLETORDELIXO_H_INCLUDED
