#include "FuncTecMark.h"
#include <string>
#include <iostream>

using namespace std;

FuncTecMark::FuncTecMark()
	:FuncTecnico(){
		this->alunos_matriculados = 0;
	}
	
FuncTecMark::FuncTecMark(int alunos_matriculados,std::string nomeSUP, long long cpfSUP, std::string primeiroNome,
		std::string segundoNome, std::string endereco, long long cpf)
	:FuncTecnico(nomeSUP, cpfSUP, primeiroNome, segundoNome, endereco, cpf){
		this->alunos_matriculados = alunos_matriculados;
	}	

int FuncTecMark::getAlunosMatriculados(){
	return this->alunos_matriculados;
}
void FuncTecMark::setAlunosMatriculados(int alunosMatriculados){
	this->alunos_matriculados = alunosMatriculados;
}

void FuncTecMark::showDados(){
	FuncTecnico::showDados();
	cout << "Alunos matriculados - " << this->getAlunosMatriculados() << endl;
}
