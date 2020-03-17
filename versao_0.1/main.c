#include <stdio.h>

typedef struct pessoa{
	int dia,mes,ano,idade;
}Pessoa;

//Calcula idade recebe por parametro Pessoa,Dia Atual, Mes Atual,Ano Atual.
int CalculaIdade(Pessoa Beltrano,int diaA,int mesA, int anoA);

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
    Einstein.idade = CalculaIdade(Einstein,17,3,2020);
    Newton.idade = CalculaIdade(Newton,17,3,2020);

    //Debug
    printf("%i %i\n",Einstein.idade,Newton.idade);

}

int CalculaIdade(Pessoa Beltrano,int diaA,int mesA,int anoA){
        
	int idade = anoA - (Beltrano.ano);
		
	if(Beltrano.mes > mesA)
	      return (idade - 1);
	else
	     if(Beltrano.mes == mesA)
		if(Beltrano.dia > diaA)
		    return (idade -1);
	
	return idade;

}
