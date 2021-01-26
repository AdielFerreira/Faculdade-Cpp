#include "ProfessorDE.h"
#include <string>

class ProfessorOrientador: public ProfessorDE{
	private:
		int alunos_orientados;
	public:
		//CONSTRUTORES
		ProfessorOrientador();
		ProfessorOrientador(int alunos_orientados, double salario, std::string areaAtuacao,
		std::string primeiroNome, std::string segundoNome, std::string endereco, long long cpf);
		//ACESSOR
		int getAlunosOrientados();
		void setAlunosOrientados(int alunos);
		void showDados();
};
