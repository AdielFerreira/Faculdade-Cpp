#include "ProfessorDE.h"
#include <string>
#include <iostream>

using namespace std;

ProfessorDE::ProfessorDE()
	: Professor(){
		this->salario = 0.0;
	}
ProfessorDE::ProfessorDE(double salario, std::string areaAtuacao,std::string primeiroNome,std::string segundoNome,
std::string endereco,long long cpf)
	:Professor(areaAtuacao, primeiroNome, segundoNome, endereco, cpf){
		this->salario = salario;
	}
double ProfessorDE::getSalario(){
	return this->salario;
}
void ProfessorDE::setSalario(double salario){
	this->salario = salario;
}
void ProfessorDE::showDados(){
	Funcionario::showDados();
	cout << "Salario Base - " << this->getSalario() << endl;
}
