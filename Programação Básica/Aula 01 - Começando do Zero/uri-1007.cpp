/**
 * @file uri-1007.cpp
 * @author Victor Rodrigues
 * @brief Problema 1007 - Diferença - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Timelimit: 1

    Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo
    produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

    Entrada
    O arquivo de entrada contém 4 valores inteiros.

    Saída
    Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco
    antes e depois da igualdade.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << a*b-c*d << endl;
    return 0;
}