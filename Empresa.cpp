#include "Empresa.h"

// Construtor
Empresa::Empresa(std::wstring nomeEmpresa, std::wstring CNPJ, std::vector<Funcionario> funcionarios)
    : nome_empresa(nomeEmpresa), CNPJ(CNPJ), funcionarios(funcionarios) {}

// Getters
std::wstring Empresa::getNomeEmpresa() const {
    return nome_empresa; 
}

std::wstring Empresa::getCNPJ() const {
    return CNPJ;
}

std::vector<Funcionario> Empresa::getFuncionarios() const {
    return funcionarios;
}

// Setters
void Empresa::setNomeEmpresa(const std::wstring& nome_empresa) {
    this->nome_empresa = nome_empresa;
}

void Empresa::setCNPJ(const std::wstring& CNPJ) {
    this->CNPJ = CNPJ;
}

void Empresa::setFuncionarios(const std::vector<Funcionario>& funcionarios) {
    this->funcionarios = funcionarios;
}
