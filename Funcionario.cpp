#include "Funcionario.h"

Funcionario::Funcionario(std::wstring nome, double salario, std::wstring data_admi, std::wstring departamento)
    : nome(nome), salario(salario), dataAdmi(data_admi), departamento(departamento) {}

std::wstring Funcionario::getNome() const {
    return nome;
}

double Funcionario::getSalario() const {
    return salario;
}

std::wstring Funcionario::getDataAdmi() const {
    return dataAdmi;
}

std::wstring Funcionario::getDepartamento() const {
    return departamento;
}

void Funcionario::setNome(const std::wstring& nome) {
    this->nome = nome;
}

void Funcionario::setSalario(double salario) {
    this->salario = salario;
}

void Funcionario::setDataAdmi(const std::wstring& data_admi) {
    this->dataAdmi = data_admi;
}

void Funcionario::setDepartamento(const std::wstring& departamento) {
    this->departamento = departamento;
}

void Funcionario::aumento(int aumento_por){

    double aumento = this -> getSalario() * aumento_por / 100;
    double novo_salario = this -> getSalario()  + aumento;
    this -> setSalario(novo_salario);
}   