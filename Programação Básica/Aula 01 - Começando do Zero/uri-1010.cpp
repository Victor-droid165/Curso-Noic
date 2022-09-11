/**
 * @file uri-1010.cpp
 * @author Victor Rodrigues
 * @brief Problema 1010 - Cálculo Simples - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o
    código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a
    ser pago.

    Entrada
    O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros
    e um valor com 2 casas decimais.

    Saída
    A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois
    pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int p1_code, p1_amount, p2_code, p2_amount;
    double p1_value, p2_value;
    cin >> p1_code >> p1_amount >> p1_value;
    cin >> p2_code >> p2_amount >> p2_value;
    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << p1_amount * p1_value + p2_amount * p2_value << endl;
    return 0;
}