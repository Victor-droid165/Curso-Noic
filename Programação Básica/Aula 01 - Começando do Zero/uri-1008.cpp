/**
 * @file uri-1008.cpp
 * @author Victor Rodrigues
 * @brief Problema 1008 - Salário - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe
    por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas
    casas decimais.
    
    Entrada
    O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número,
    quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

    Saída
    Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e
    depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num, worked_hours;
    double value_per_hour;
    cin >> num >> worked_hours >> value_per_hour;
    double salary = worked_hours*value_per_hour;
    cout << "NUMBER = " << num << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << endl;
    return 0;
}