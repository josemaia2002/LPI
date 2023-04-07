#include <iostream>
#include "Funcionario.h"
#include <string>

using namespace std;

Funcionario::Funcionario() {
    this->salario = 0;
}

Funcionario::Funcionario(string nome, string departamento, double salario) {
    this->nome = nome;
    this->departamento = departamento;
    this->salario = salario;
}

ostream &operator<<( ostream &output, const Funcionario &F ) { 
    output << "Nome: " << F.nome << "; Departamento: " << F.departamento << "; Salario: " << F.salario;
    return output;            
}

istream &operator>>( istream  &input, Funcionario &F ) { 
    input >> F.nome >> F.departamento >> F.salario;
    return input;            
}

string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

string Funcionario::getDepartamento() {
    return this->departamento;
}

void Funcionario::setDepartamento(string departamento) {
    this->departamento = departamento;
}

double Funcionario::getSalario() {
    return this->salario;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}