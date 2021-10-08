/*
    Autores: Alexandre Debortoli de Souza
    Data: Outubro - 2021
    UNIVALI - Algoritmos e Programação - Professor: Rafael Ballotin Martins
    Trabalho 2 - Jogo da Forca

    Objetivo: Programar em C++ um jogo da forca onde uma palavra será selecionada 
    aleatoriamente entre 10 palavras de 6 caracteres e o jogador terá 10 tentativas para descobrir
    todas as letras e consequentemente acertar a palavra.
*/
#include <iostream>
#include <time.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int selectMenu, randomSelect, tentativas, acertos; // Controle dos laços de repetições
    char letra1, letra2, letra3, letra4, letra5, letra6; // Caracteres que compõe a palavra selecionada
    char lPrint1='_',lPrint2='_',lPrint3='_',lPrint4='_', lPrint5='_', lPrint6='_'; // Caracteres em display
    char inputChar; //Caracter de input do jogador
    
    do
    {
        system("cls");
        cout << "---------- Menu ----------\n" << "Digite o número da opção desejada\n";
        cout << "1-Jogar / 2-Sobre / 3-Fim\n";
        cin >> selectMenu;

        if(selectMenu == 1) // JOGAR
        {
            tentativas = 10;
            acertos = 0;

            srand(time(NULL));
            randomSelect = rand() % 10 + 1;

            switch (randomSelect) // Selecao palavra aleatória
            {
                case 1:
                    // "CANETA"
                    letra1 = 'C';
                    letra2 = 'A';
                    letra3 = 'N';
                    letra4 = 'E';
                    letra5 = 'T';
                    letra6 = 'A';
                    break;
                case 2:
                    // "TOMADA"
                    letra1 = 'T';
                    letra2 = 'O';
                    letra3 = 'M';
                    letra4 = 'A';
                    letra5 = 'D';
                    letra6 = 'A';
                    break;
                case 3:
                    // "TRILHA"
                    letra1 = 'T';
                    letra2 = 'R';
                    letra3 = 'I';
                    letra4 = 'L';
                    letra5 = 'H';
                    letra6 = 'A';
                    break;
                case 4:
                    // "ATIRAR"
                    letra1 = 'A';
                    letra2 = 'T';
                    letra3 = 'I';
                    letra4 = 'R';
                    letra5 = 'A';
                    letra6 = 'R';
                    break;
                case 5:
                    // "MACACO"
                    letra1 = 'M';
                    letra2 = 'A';
                    letra3 = 'C';
                    letra4 = 'A';
                    letra5 = 'C';
                    letra6 = 'O';
                    break;
                case 6:
                    // "CARETA"
                    letra1 = 'C';
                    letra2 = 'A';
                    letra3 = 'R';
                    letra4 = 'E';
                    letra5 = 'T';
                    letra6 = 'A';
                    break;
                case 7:
                    // "QUINTA"
                    letra1 = 'Q';
                    letra2 = 'U';
                    letra3 = 'I';
                    letra4 = 'N';
                    letra5 = 'T';
                    letra6 = 'A';
                    break;
                case 8:
                    // "GOOGLE"
                    letra1 = 'G', 
                    letra2 = 'O';
                    letra3 = 'O';
                    letra4 = 'G';
                    letra5 = 'L';
                    letra6 = 'E';
                    break;
                case 9:
                    // "DIURNO"
                    letra1 = 'D';
                    letra2 = 'I';
                    letra3 = 'U';
                    letra4 = 'R';
                    letra5 = 'N';
                    letra6 = 'O';
                    break;
                case 10:
                    // "SOCIAL"
                    letra1 = 'S';
                    letra2 = 'O';
                    letra3 = 'C';
                    letra4 = 'I';
                    letra5 = 'A';
                    letra6 = 'L';
                    break;
                default:
                    cout << "Número aleatório gerado inválida!" << endl; // Debug do rand()
                    break;
            }

            do
            {
                system("cls");
                cout << "Tentativas: " << tentativas << endl;
                cout << "Acertos: " << acertos << endl;
                cout << endl;
                cout << lPrint1 << " " << lPrint2 << " " << lPrint3 << " " << lPrint4 << " " << lPrint5 << " " << lPrint6 << endl;
                cout << "Digite uma letra: ";
                cin >> inputChar;

                if(inputChar == letra1)
                {
                    lPrint1 = inputChar;
                    acertos++;
                }
                if(inputChar == letra2)
                {
                    lPrint2 = inputChar;
                    acertos++;
                }
                if(inputChar == letra3)
                {
                    lPrint3 = inputChar;
                    acertos++;
                }
                if(inputChar == letra4)
                {
                    lPrint4 = inputChar;
                    acertos++;
                }
                if(inputChar == letra5)
                {
                    lPrint5 = inputChar;
                    acertos++;
                }
                if(inputChar == letra6)
                {
                    lPrint6 = inputChar;
                    acertos++;
                }

                tentativas--;
                
            } while (tentativas != 0 && acertos != 6);

            // RESULTADOS
            if(tentativas == 0) // PERDEU
                cout << "\nPERDEU.\n" << endl;

            if(acertos == 6) // GANHOU
            {
                system("cls");
                cout << "Tentativas: " << tentativas << endl;
                cout << "Acertos: " << acertos << endl;
                cout << endl;
                cout << lPrint1 << " " << lPrint2 << " " << lPrint3 << " " << lPrint4 << " " << lPrint5 << " " << lPrint6 << endl;
                cout << "\nGANHOU!\n" << endl;;
            }

            system("pause");
        }
        else if(selectMenu == 2) // SOBRE
        {
            cout << "--- Equipe de Desenvolvimento ---\n"; // Autores
            cout << "Alexandre Debortoli de Souza\n";
            cout << "Paula Gama\n";
            cout << "Victor Nascimento\n";
            cout << "Mykaella Teodoro\n";

            cout << "\n--- Data ---\n"; // Data
            cout << "Outubro/2021\n";

            cout << "\n--- Professor e Disciplina ---\n"; // Professor e Disciplina
            cout << "Rafael Ballotin Martins";
            cout << " - Algoritmos e Programação\n";

            cout << "\n--- Regra ---\n"; // Regra
            cout << "Usar somente letras maiúsculas nas tentativas\n" << endl;

            system("pause");
        }

    } while (selectMenu != 3); // FIM
    
    return 0;
}