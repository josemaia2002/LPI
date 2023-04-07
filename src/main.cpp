#include <iostream>
#include <string>
#include <vector>
#include "Funcionario.h"

using namespace std;

void filter_depto(vector<Funcionario> v, vector<Funcionario>::iterator it, string depto){
    for(it = v.begin(); it != v.end(); it++)
        if(it->getDepartamento() == depto)
            cout << *it << endl;
}

void aumento(vector<Funcionario>& v, vector<Funcionario>::iterator it, string depto){
    for(it = v.begin(); it != v.end(); it++)
        if(it->getDepartamento() == depto)
            it->setSalario(it->getSalario()*1.2);
}

int main (){
    vector<Funcionario> v;
    vector<Funcionario>::iterator it;

    Funcionario f1;
    Funcionario f2;
    Funcionario f3;
    Funcionario f4;
    Funcionario f5;

    f1.setSalario(8343.76);
    f1.setNome("Jean");
    f1.setDepartamento("Historia");

    f2.setSalario(9248.54);
    f2.setNome("Carlos");
    f2.setDepartamento("Engenharia");

    f3.setSalario(10329.76);
    f3.setNome("Paulo");
    f3.setDepartamento("TI");

    f4.setSalario(10329.76);
    f4.setNome("Ricardo");
    f4.setDepartamento("Historia");

    f5.setSalario(11279.24);
    f5.setNome("Rogerio");
    f5.setDepartamento("TI");

    v.push_back(f1);
    v.push_back(f2);
    v.push_back(f3);
    v.push_back(f4);
    v.push_back(f5);

    aumento(v, it, "TI");

    for(it = v.begin(); it != v.end(); it++)
        cout << *it << endl;
    cout << endl;
    cout << endl;

    filter_depto(v, it, "Historia");


    return 0;
}
