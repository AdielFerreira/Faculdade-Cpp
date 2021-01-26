#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Funcionario.h"
#include <string>

//CLASSE ABSTRATA PROFESSOR, FILHA DA CLASSE FUNCIONARIO POREM BASE PARA OUTRAS CLASSES
//ECONOMIZA REESCRITA DE CODIGO PARA CRIACAO DE OUTRAS CLASSES
//INSTANCIACAO .H

class Professor: public Funcionario{
	private:
		std::string areaAtuacao;
	public:
		//Construtores
		Professor();
		Professor(std::string areaAtuacao, std::string primeiroNome, std::string segundoNome,
		std::string endereco, long long cpf);
		//Getters and Setters
		void setArea(std::string area);
		std::string getArea();
		void showDados();
};
#endif
