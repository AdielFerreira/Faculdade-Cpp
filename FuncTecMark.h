#include "FuncTecnico.h"
#include <string>

class FuncTecMark: public FuncTecnico{
	private:
		int alunos_matriculados;
	public:
		//CONSTRUTORES
		FuncTecMark();
		FuncTecMark(int alunos_matriculados,std::string nomeSUP, long long cpfSUP, std::string primeiroNome,
		std::string segundoNome, std::string endereco, long long cpf);
		//ACESSORS
		int getAlunosMatriculados();
		void setAlunosMatriculados(int alunosMatriculados);
		void showDados();
};

