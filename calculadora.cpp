#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

double x, y;
int operacao;
char continuar = 's', trocarnum = 'n';

void menu() {
    cout << "\tEscolha a operacao:\n1: adicao\n2: subtracao\n3: multiplicacao\n4: divisao\n5: potenciacao\n6: raiz quadrada\n";
}

void calcular(double x, double y, int operacao) {
    switch (operacao) {
        case 1:
            cout << "Resultado: " << x + y;
            break;
        case 2:
            cout << "Resultado: " << x - y;
            break;
        case 3:
            cout << "Resultado: " << x * y;
            break;
        case 4:
            while (y == 0) {
                cout << "Voce infelizmente nao pode dividir por 0, tente outro valor para y: ";
                cin >> y;
            }
            cout << fixed << setprecision(2) << "Resultado: " << x / y;
            break;
        case 5:
            cout << "Resultado: " << pow(x, y);
            break;
        case 6:
            cout << fixed << setprecision(2);
            cout << "Raiz de " << x << ": " << sqrt(x) << "\nRaiz de " << y << ": " << sqrt(y);
            break;
    }
    cout << endl;
}

int main() {
    cout << "\tBem vindo a calculadora!\n";

    while (true) {
        if (continuar == 's' || trocarnum == 's') {
            cout << "Digite dois numeros:\n";
            
            while (!(cin >> x >> y)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Entrada invalida! Digite dois números válidos.\n";
            }
        }

        while (true) {
            menu();
            cin >> operacao;

            if (cin.fail() || operacao < 1 || operacao > 6) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Opcao invalida, digite um numero de 1 a 6.\n";
                continue;
            }

            system("cls");
            calcular(x, y, operacao);

            cout << "Deseja fazer outra operacao com os mesmos numeros? (s/n): ";
            cin >> continuar;

            while (continuar != 's' && continuar != 'n') {
                cout << "Entrada invalida! Digite apenas 's' ou 'n': ";
                cin >> continuar;
            }

            if (continuar == 'n') {
                break;
            }
        }
        cout << "\nDeseja trocar os numeros? (s/n): ";
        cin >> trocarnum;

        while (trocarnum != 's' && trocarnum != 'n') {
            cout << "Entrada invalida! Digite apenas 's' ou 'n': ";
            cin >> trocarnum;
        }

        if (trocarnum == 'n') {
            cout << "Fechando calculadora, obrigado por usar!\n";
            break;
        }
    }

    return 0;
}
