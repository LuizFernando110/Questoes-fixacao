#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include <vector>
#include "Funcionario.h"

class Empresa {
private:
    std::wstring nome_empresa;
    std::wstring CNPJ;
    std::vector<Funcionario> funcionarios;

public:
    Empresa(std::wstring nomeEmpresa, std::wstring CNPJ, std::vector<Funcionario> funcionarios = {});

    // Getters
    std::wstring getNomeEmpresa() const;
    std::wstring getCNPJ() const;
    std::vector<Funcionario> getFuncionarios() const;

    // Setters
    void setNomeEmpresa(const std::wstring& nome_empresa);
    void setCNPJ(const std::wstring& CNPJ);
    void setFuncionarios(const std::vector<Funcionario>& funcionarios);
};

#endif // EMPRESA_H
