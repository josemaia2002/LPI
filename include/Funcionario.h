#include <iostream>
#include <string>

using namespace std;

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

class Funcionario {

private:
    string nome;
    string departamento;
    double salario;

public:
    Funcionario();
    Funcionario(string nome, string departamento, double salario);    
    friend ostream &operator<<(ostream &output, const Funcionario &F);
    friend istream &operator>>(istream  &input, Funcionario &F);

    string getNome();
    void setNome(string nome);

    string getDepartamento();
    void setDepartamento(string departamento);

    double getSalario();
    void setSalario(double salario);
};

#endif