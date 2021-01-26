#include "FuncTecnico.h"
#include <iostream>
#include <string>

using namespace std;

FuncTecnico::FuncTecnico()
	:Funcionario(){
		this->nomeSUP = " ";
		this->cpfSUP = 0000;
	}

FuncTecnico::FuncTecnico(std::string nomeSUP, long long cpfSUP, std::string primeiroNome,
		std::string segundoNome, std::string endereco, long long cpf)
	:Funcionario(primeiroNome, segundoNome, endereco, cpf){
		this->nomeSUP = nomeSUP;
		this->cpfSUP = cpfSUP;
	}
string FuncTecnico::getNomeSUP(){
	return this->nomeSUP;
}
long long FuncTecnico::getCPFSUP(){
	return this->cpfSUP;
}
void FuncTecnico::setNomeSUP(string nomeSUP){
	this->nomeSUP = nomeSUP;
}
void FuncTecnico::setCPFSUP(long long cpfSUP){
	this->cpfSUP = cpfSUP;
}
void FuncTecnico::showDados(){
	Funcionario::showDados();
	cout << "Nome do Superior - " << this->getNomeSUP() << endl;
	cout << "CPF do Superior - " << this->getCPFSUP() << endl;
}

