#include "ProfHorista.h"
#include "ProfessorOrientador.h"
#include "FuncTecMark.h"
#include <iostream>
using namespace std;
int main(){
	
	
	//TESTE DE CRIACAO DO PROFESSOR HORISTA

	
	cout << "\n PROFESSORES : " << endl;
	ProfHorista p1 = ProfHorista(20.5,4,"Computacao","Gomo","Lucifer","Rua dois",12345);
	p1.showDados();
	cout << endl;
	ProfessorDE p2 = ProfessorDE(200.4,"Biologia","Antonio","Martins","Rua um",54321);
	p2.showDados();
	cout << endl;
	ProfessorOrientador p3 = ProfessorOrientador(3, 100.4,"Farmacia","Carlos","Silva","Rua Tres",334422);
	p3.showDados();
	cout << endl;
	
	cout << "\n TECNICOS : " << endl;
	FuncTecnico f1 = FuncTecnico("Jose",55555,"Andre","Gado","Rua dois",12321);
	f1.showDados();
	cout << endl;
	FuncTecMark f2 = FuncTecMark(2,"Andre",12321,"Joao","Nakuio","Rua seis",112233);
	f2.showDados();
	cout << endl;
}
