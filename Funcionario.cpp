#include "Funcionario.h"
#include <string>
#include <iostream>

//CLASSE ABSTRATA BASE PARA CRIACAO DE CLASSES FILHAS
//DECLARACAO DE FUNCOES .CPP

using namespace std;

//construtor
Funcionario::Funcionario(string primeiroNome,string segundoNome,string endereco,long long cpf){
	this->primeiroNome = primeiroNome;
	this->segundoNome = segundoNome;
	this->endereco = endereco;
	this->cpf = cpf;
}
Funcionario::Funcionario(){
	this->primeiroNome = " ";
	this->segundoNome = " ";
	this->endereco = " ";
	this->cpf = 000;
}
//Getters and Setters

string Funcionario::getPrimeiroNome(){
	return primeiroNome;
}
string Funcionario::getSegundoNome(){
	return segundoNome;
}
string Funcionario::getEndereco(){
	return endereco;
}
long long Funcionario::getCPF(){
	return cpf;
}

void Funcionario::setPrimeiroNome(string primeiroNome){
	this->primeiroNome = primeiroNome;
}
void Funcionario::setSegundoNome(string segundoNome){
	this->segundoNome = segundoNome;
}
void Funcionario::setEndereco(string enderco){
	this->endereco = endereco;
}
void Funcionario::setCPF(long long cpf){
	this->cpf = cpf;
}
void Funcionario::showDados(){
	
	cout << "Primeiro Nome: " << getPrimeiroNome() << endl;
	cout << "Segundo Nome: " << getSegundoNome() << endl;
	cout << "Endereço: " << getEndereco() << endl;
	cout << "CPF: " << getCPF() << endl;
}
double Funcionario::calculaSalario(){
	return 	0.0;
}


