#include "Professor.h"
#include <string>

class ProfessorDE: public Professor{
	private:
		double salario;
	public:
		//CONSTRUTORES
		ProfessorDE();
		ProfessorDE(double salario, std::string areaAtuacao,std::string primeiroNome,std::string segundoNome,
std::string endereco,long long cpf);
		//ACESSORS
		double getSalario();
		void setSalario(double salario);
		void showDados();
};
