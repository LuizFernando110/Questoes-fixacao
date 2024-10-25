#include <iostream>
#include <memory>
#include <vector>
#include <locale.h>
#include "Funcionario.h"

int main(){
    setlocale(LC_ALL, "");

    int n;

    std::wcout<< L"Digite um númeor inteiro para definir o tamanho do vetor: ";
    std::cin>> n;

    std::vector<int> vetor(n);

    std::shared_ptr<std::vector<int>> ponteiro = std::make_shared<std::vector<int>>(vetor);
    
    std::wcout << L"Vetor alocado com sucesso com tamanho " << n << std::endl;

    return 0;
}