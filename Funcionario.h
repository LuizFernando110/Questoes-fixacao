#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

#include <string>


class Funcionario{
    private:
        std::wstring nome;
        double salario;  
        std::wstring dataAdmi;
        std::wstring departamento;

    public:
        Funcionario(std::wstring nome, double salario, std::wstring data_admi, std::wstring departamento);

        std::wstring getNome() const;
        double getSalario() const;
        std::wstring getDataAdmi() const;
        std::wstring getDepartamento() const;

        void setNome(const std::wstring& nome);
        void setSalario(double salario);
        void setDataAdmi(const std::wstring& data_admi);
        void setDepartamento(const std::wstring& departamento);

        void aumento(int aumento_por);
};

#endif 