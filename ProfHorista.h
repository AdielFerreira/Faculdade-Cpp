#include "Professor.h"
#include <string>

//CLASSE PROF_HORISTA E CLASSE FILHA DE PROFESSOR QUE POR SUA VEZ E CLASSE FILHA DE FUNCIONARIO
//INSTANCIACAO .H

class ProfHorista: public Professor{
	private:
		double salarioHora;
		int horasTrabalhadas;
	public:
		//construtores
		ProfHorista();
		ProfHorista(double salarioHora, int horasTrabalhadas,std::string areaAtuacao, std::string primeiroNome, std::string segundoNome,
		std::string endereco, long long cpf);
		//GETTERS AND SETTERS
		void setSalarioHora(double salarioHora);
		void setHorasTrabalhadas(int horasTrabalhadas);
		double getSalarioHora();
		int getHorasTrabalhadas();
		//Funcao mostra dados
		void showDados();
		//reescritsa da funcao CALCULASALARIO - definida na classe base
		void CalculaSalario(double salarioHora, int horasTrabalhadas);
};
