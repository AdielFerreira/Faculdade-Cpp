#include "Funcionario.h"
#include <string>

class FuncTecnico: public Funcionario{
	private:
		std::string nomeSUP;
		long long cpfSUP;
	public:
		//CONSTRUTORES
		FuncTecnico();
		FuncTecnico(std::string nomeSUP, long long cpfSUP, std::string primeiroNome,
		std::string segundoNome, std::string endereco, long long cpf);
		//ACESSORS
		std::string getNomeSUP();
		long long getCPFSUP();
		void setNomeSUP(std::string nomeSUP);
		void setCPFSUP(long long cpfSUP);
		void showDados();
		
};
