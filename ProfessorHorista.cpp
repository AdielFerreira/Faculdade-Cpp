#include "ProfHorista.h"
#include <string>
#include <iostream>

//CLASSE PROF_HORISTA E CLASSE FILHA DE PROFESSOR QUE POR SUA VEZ E CLASSE FILHA DE FUNCIONARIO
//INSTANCIACAO .CPP

using namespace std;

ProfHorista::ProfHorista(double salarioHora, int horasTrabalhadas, string areaAtuacao, string primeiroNome, string segundoNome,
	string endereco,long long cpf)
	:Professor(areaAtuacao, primeiroNome,segundoNome,endereco,cpf){
		this->salarioHora = salarioHora;
		this->horasTrabalhadas = horasTrabalhadas;
	}
void ProfHorista::setSalarioHora(double salarioHora){
	this->salarioHora = salarioHora;
}
void ProfHorista::setHorasTrabalhadas(int horasTrabalhadas){
	this->horasTrabalhadas = horasTrabalhadas;
}
double ProfHorista::getSalarioHora(){
	return salarioHora;
}
int ProfHorista::getHorasTrabalhadas(){
	return horasTrabalhadas;
}

void ProfHorista::CalculaSalario(double salarioHora, int horasTrabalhadas){
	double salarioAUX = salarioHora * horasTrabalhadas;
	ProfHorista->set
}

void ProfHorista::showDados(){
	Funcionario::showDados();
	cout << "Salario por hora - " << this->getSalarioHora() << endl;
	cout << "Horas Trabalhadas - " << this->getHorasTrabalhadas() << endl;
}
		
	
