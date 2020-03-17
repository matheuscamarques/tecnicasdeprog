#include "Pessoa.h"


int main(){

    //Classes Iniciadas
    Pessoa Einstein(12,3,1879);
    Pessoa Newton(4,1,1643);

    //Calculo de idade
    Einstein.CalculaIdade(17,3,2020);
    Newton.CalculaIdade(17,3,2020);

    printf("A idade de Einsten %i \n",Einstein.getIdade());
     printf("A idade de Newton %i \n",Newton.getIdade());
    
}
