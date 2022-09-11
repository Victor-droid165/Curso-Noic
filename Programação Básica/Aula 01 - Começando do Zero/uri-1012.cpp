/**
 * @file uri-1012.cpp
 * @author Victor Rodrigues
 * @brief Problema 1012 - Área - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida,
    calcule e mostre:
    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B.

    Entrada
    O arquivo de entrada contém três valores com um dígito após o ponto decimal.

    Saída
    O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima,
    sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser
    apresentado com 3 dígitos após o ponto decimal.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << A*C/2 << endl;
    cout << "CIRCULO: " << 3.14159 * (C*C) << endl;
    cout << "TRAPEZIO: " << (A+B)*C/2.0 << endl;
    cout << "QUADRADO: " << B*B << endl;
    cout << "RETANGULO: " << A*B << endl;
    return 0;
}