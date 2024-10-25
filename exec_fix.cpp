#include <iostream>
#include <vector>
#include "Empresa.h"
#include "Funcionario.h"


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    std::wstring nomeEmpresa;
    std::wstring CNPJ;
    int quantidadeFunc;
    std::wstring aumDepartamento;

    std::wcout << L"Esse é o criador de empresas, vamos criar uma?" << std::endl;

    std::wcout << L"Qual o nome da sua empresa? ";
    std::getline(std::wcin, nomeEmpresa);

    std::wcout << L"Qual o CNPJ da sua empresa? ";
    std::getline(std::wcin, CNPJ);

    Empresa empresa1(nomeEmpresa, CNPJ);

    std::wcout << L"Empresa criada com sucesso!" << std::endl;

    std::wcout << L"Agora me diga, quantos funcionários sua empresa tem? ";
    std::wcin >> quantidadeFunc;
    std::wcin.ignore();

    std::wcout << L"Muito bem, agora precisamos cadastra-los no sistemas." << std::endl ;

    std::vector<Funcionario> funcionarios(quantidadeFunc, Funcionario(L"", 0,L"",L""));

    for (int i = 0; i < quantidadeFunc; i++) {
        std::wstring nome;
        double salario;  
        std::wstring dataAdmi;
        std::wstring departamento;
    
        std::wcout << L"O nome do " << (i + 1) << L"º funcionário: ";
        std::getline(std::wcin, nome);

        std::wcout << L"O salário do " << (i + 1) << L"º funcionário: ";
        std::wcin >> salario;
        std::wcin.ignore();  

        std::wcout << L"A data de admissão do " << (i + 1) << L"º funcionário: ";
        std::getline(std::wcin, dataAdmi);

        std::wcout << L"O departamento do " << (i + 1) << L"º funcionário: ";
        std::getline(std::wcin, departamento);

        Funcionario funcionario(nome, salario, dataAdmi, departamento);
        funcionarios[i] = funcionario;  
    }

    std::wcout << L"Funcionários cadastrados com sucesso!" << std::endl;

    std::wcout << L"Podemos dar reajustes de salário em algum departamento, me diga um: ";
    std::getline(std::wcin, aumDepartamento);

    bool departamentoEncontrado = false;

    for (auto &funcionario : funcionarios){
        if (funcionario.getDepartamento() == aumDepartamento){
            funcionario.aumento(10);
            std::wcout << L"Salário de "<<funcionario.getNome() << L" foi aumentado para " << funcionario.getSalario() << std::endl;
            departamentoEncontrado = true;
        }

    }

    if (!departamentoEncontrado){
        std::wcout<< L"Bem, esse departamento não existe!" << std::endl;
    }else{
        std::wcout << L"Aumento aplicado ao departamento " << aumDepartamento << L"." << std::endl;
    }

    std::wcout << L"Encerrando o programa, até breve :D!" << std::endl;

    return 0;
}