#include <stdio.h>

//Atenção Código compila apenas em C++ devido uso de refência escondida.
class Pessoa{
	public:
	int dia,mes,ano,idade;
	
	//Métodos 
	void CalculaIdade(int diaA,int mesA,int anoA){
        	idade = anoA - ano;

       		 if( mes > mesA)
              		idade--;
        	 else
             	 	if( mes == mesA)
                        	if( dia > diaA)
                                	idade--;
	}

};

int main(){
    Pessoa Einstein;
    Pessoa Newton;

    //Iniciando valores
    Einstein.dia = 14; 
    Einstein.mes = 3; 
    Einstein.ano = 1879;
    Einstein.idade = 0;
    Newton.dia = 4;  
    Newton.mes = 1;  
    Newton.ano = 1643;  
    Newton.idade = 0; 

    //Calculo de idade
    Einstein.CalculaIdade(17,3,2020);
    Newton.CalculaIdade(17,3,2020);

    //Debug
    printf("%i %i\n",Einstein.idade,Newton.idade);

}

