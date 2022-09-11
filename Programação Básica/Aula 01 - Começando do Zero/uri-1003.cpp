/**
 * @file uri-1003.cpp
 * @author Victor Rodrigues
 * @brief Problema 1003 - Soma Simples - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Timelimit: 1

    Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à
    variável SOMA. A seguir escrever o valor desta variável.

    Entrada
    O arquivo de entrada contém 2 valores inteiros.

    Saída
    Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade
    seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de
    linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int SOMA = a+b;
    cout << "SOMA = " << SOMA << endl;
    return 0;
}