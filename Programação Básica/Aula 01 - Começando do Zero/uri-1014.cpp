/**
 * @file uri-1014.cpp
 * @author Victor Rodrigues
 * @brief Problema 1014 - Consumo - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de
    combustível gasto (em litros).

    Entrada
    O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida
    (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

    Saída
    Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem
    "km/l".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int X;
    double Y;
    cin >> X >> Y;
    cout << fixed << setprecision(3);
    cout << X/Y << " km/l" << endl;
    return 0;
}