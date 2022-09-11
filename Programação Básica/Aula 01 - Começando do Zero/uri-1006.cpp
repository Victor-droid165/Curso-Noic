/**
 * @file uri-1006.cpp
 * @author Victor Rodrigues
 * @brief Problema 1006 - Média 2 - Adaptado por Neilor Tonin, URI  Brasil
 * @version 0.1
 * @date 2022-09-11
 * @copyright Copyright (c) 2022
 */

/*
    Descrição do Problema:

    Timelimit: 1

    Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do
    aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota
    pode ir de 0 até 10.0, sempre com uma casa decimal.

    Entrada
    O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

    Saída
    Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal e com
    um espaço em branco antes e depois da igualdade. Assim como todos os problemas, não esqueça de imprimir o fim
    de linha após o resultado, caso contrário, você receberá "Presentation Error".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c;
    const double pa = 2, pb = 3, pc = 5;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1);
    cout << "MEDIA = " << (a*pa + b*pb + c*pc)/(pa + pb + pc) << endl;
    return 0;
}