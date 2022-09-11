/**
 * @file uri-1004.cpp
 * @author Victor Rodrigues
 * @brief Problema 1004 - Produto Simples - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Timelimit: 1

    Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação
    à variável PROD. A seguir mostre a variável PROD com mensagem correspondente.   

    Entrada
    O arquivo de entrada contém 2 valores inteiros.

    Saída
    Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco antes e depois
    da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará
    a mensagem: “Presentation Error”.
*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int PROD = a*b;
    cout << "PROD = " << PROD << endl;
    return 0;
}