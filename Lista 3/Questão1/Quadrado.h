#pragma once
#include<iostream>
#include<string>
#include"FormaBidimensional.h"
using namespace std;
class Quadrado: public FormaBidimensional{
	private:
	int lado;
	public:
	Quadrado(int, string);
	void setLado(int);
	int getLado();
	virtual float calculaArea();
	int calculaPerimetro();
	void print();
};