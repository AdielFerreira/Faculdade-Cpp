#include "Professor.h"
#include <string>
#include <iostream>

//CLASSE ABSTRATA PROFESSOR, FILHA DA CLASSE FUNCIONARIO POREM BASE PARA OUTRAS CLASSES
//ECONOMIZA REESCRITA DE CODIGO PARA CRIACAO DE OUTRAS CLASSES
//INSTANCIACAO .CPP

using namespace std;

//construtor
Professor::Professor() 
	:Funcionario(){
		this->areaAtuacao = " ";
	}
Professor::Professor(std::string areaAtuacao,std::string primeiroNome,std::string segundoNome,
std::string endereco,long long cpf) 
	:Funcionario(primeiroNome,segundoNome,endereco,cpf){
		this->areaAtuacao = areaAtuacao;
	}
//GETTERS AND SETTERS

void Professor::setArea(string area){
	this->areaAtuacao = area;
}
string Professor::getArea(){
	return this->areaAtuacao;
}
void Professor::showDados(){
	Funcionario::showDados();
	cout << "\n Area de atuacao: " << areaAtuacao << endl;
}

