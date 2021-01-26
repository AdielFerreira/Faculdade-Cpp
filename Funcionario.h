#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

//CLASSE ABSTRATA BASE PARA CRIACAO DE BASES FILHAS
//INSTANCIACAO .H

class Funcionario{
	private:
		std::string primeiroNome;
		std::string segundoNome;
		std::string endereco;
		long long cpf;
	public:
		//construtores
		Funcionario();
		Funcionario(std::string primeiroNome, std::string segundoNome, std::string endereco, long long cpf);
		//Getters and Setters
		std::string getPrimeiroNome();
		std::string getSegundoNome();
		std::string getEndereco();
		long long getCPF();
		void setPrimeiroNome(std::string primeiroNome);
		void setSegundoNome(std::string segundoNome);
		void setEndereco(std::string endereco);
		void setCPF(long long cpf);
		
		double calculaSalario();
		void showDados();
		
};
#endif
