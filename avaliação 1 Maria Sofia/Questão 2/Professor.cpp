#include<iostream>
#include "Professor.h"
Professor::Professor(string nome, string matricula, int idade){
	setNome(nome);
	setMatricula(matricula);
	setIdade(idade);
}
void Professor::setNome(string nome){
	this->nome = nome;
}
void Professor::setMatricula(string matricula){
	this->matricula = matricula;
}
void Professor::setIdade(int idade){
	this->idade = idade;
}
string Professor::getNome(){
	return nome;}
string Professor::getMatricula(){return matricula;}
int Professor::getIdade(){return idade;}