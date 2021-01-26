#include "ProfessorOrientador.h"
#include <iostream>
using namespace std;
ProfessorOrientador::ProfessorOrientador()
	:ProfessorDE(){
		this->alunos_orientados = 0;
	}
ProfessorOrientador::ProfessorOrientador(int alunos_orientados, double salario, std::string areaAtuacao,
std::string primeiroNome,std::string segundoNome, std::string endereco,long long cpf)
	:ProfessorDE(salario, areaAtuacao, primeiroNome,segundoNome,endereco,cpf){
		this->alunos_orientados = alunos_orientados;
	}
int ProfessorOrientador::getAlunosOrientados(){
	return this->alunos_orientados;
}
void ProfessorOrientador::setAlunosOrientados(int alunos){
	this->alunos_orientados = alunos;
}
void ProfessorOrientador::showDados(){
	ProfessorDE::showDados();
	cout << "Alunos orientados - " << this->getAlunosOrientados() << endl;
}
	

