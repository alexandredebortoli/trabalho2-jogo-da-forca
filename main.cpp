/*
    Autor: Alexandre Debortoli de Souza
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
    char lPrint1, lPrint2, lPrint3, lPrint4, lPrint5, lPrint6; // Caracteres em display
    char inputChar; //Caracter de input do jogador
    // Variáveis para não repetir as palavras
    bool check1=false, check2=false, check3=false, check4=false, check5=false;
    bool check6=false, check7=false, check8=false, check9=false, check10=false; 
    bool checkRand; // Controle caso rand() repita
    int checkAll=0; // Controle caso todas as palavras sejam utilizadas
    
    do
    {
        system("cls");
        cout << "---------- Menu ----------\n" << "Digite o número da opção desejada\n";
        cout << "1-Jogar / 2-Sobre / 3-Fim\n";
        cin >> selectMenu;

        if(checkAll == 10) // Quando todas as palavras forem usadas...
        {
            system("cls");
            cout << "Não há mais palavras.\n\nObrigado por jogar!\n" << endl;
            selectMenu = 3; // Sair
        }

        if(selectMenu == 1) /*************************** JOGAR ***************************/
        {
            tentativas = 10;
            acertos = 0;
            checkRand = false;
            lPrint1 = '_';
            lPrint2 = '_';
            lPrint3 = '_';
            lPrint4 = '_';
            lPrint5 = '_';
            lPrint6 = '_';
            
            // GERAR PALAVRA ALEATÓRIO
            while(checkRand != true)
            {
                srand(time(NULL));
                randomSelect = rand() % 10 + 1;

                switch (randomSelect) // Selecao palavra aleatória
                {
                    case 1:
                        // "CANETA"
                        if(check1 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'C';
                        letra2 = 'A';
                        letra3 = 'N';
                        letra4 = 'E';
                        letra5 = 'T';
                        letra6 = 'A';

                        check1 = true;
                        break;
                    case 2:
                        // "TOMADA"
                        if(check2 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'T';
                        letra2 = 'O';
                        letra3 = 'M';
                        letra4 = 'A';
                        letra5 = 'D';
                        letra6 = 'A';
    
                        check2 = true;
                        break;
                    case 3:
                        // "TRILHA"
                        if(check3 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'T';
                        letra2 = 'R';
                        letra3 = 'I';
                        letra4 = 'L';
                        letra5 = 'H';
                        letra6 = 'A';

                        check3 = true;
                        break;
                    case 4:
                        // "ATIRAR"
                        if(check4 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'A';
                        letra2 = 'T';
                        letra3 = 'I';
                        letra4 = 'R';
                        letra5 = 'A';
                        letra6 = 'R';

                        check4 = true;
                        break;
                    case 5:
                        // "MACACO"
                        if(check5 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'M';
                        letra2 = 'A';
                        letra3 = 'C';
                        letra4 = 'A';
                        letra5 = 'C';
                        letra6 = 'O';

                        check5 = true;
                        break;

                    case 6:
                        // "CARETA"
                        if(check6 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'C';
                        letra2 = 'A';
                        letra3 = 'R';
                        letra4 = 'E';
                        letra5 = 'T';
                        letra6 = 'A';

                        check6 = true;
                        break;
                    case 7:
                        // "QUINTA"
                        if(check7 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'Q';
                        letra2 = 'U';
                        letra3 = 'I';
                        letra4 = 'N';
                        letra5 = 'T';
                        letra6 = 'A';

                        check7 = true;
                        break;
                    case 8:
                        // "GOOGLE"
                        if(check8 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'G', 
                        letra2 = 'O';
                        letra3 = 'O';
                        letra4 = 'G';
                        letra5 = 'L';
                        letra6 = 'E';

                        check8 = true;
                        break;
                    case 9:
                        // "DIURNO"
                        if(check9 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'D';
                        letra2 = 'I';
                        letra3 = 'U';
                        letra4 = 'R';
                        letra5 = 'N';
                        letra6 = 'O';

                        check9 = true;
                        break;
                    case 10:
                        // "SOCIAL"
                        if(check10 == true)
                        {
                            checkRand = true;
                            break;
                        }

                        letra1 = 'S';
                        letra2 = 'O';
                        letra3 = 'C';
                        letra4 = 'I';
                        letra5 = 'A';
                        letra6 = 'L';

                        check10 = true;
                        break;
                    default:
                        cout << "Número aleatório gerado inválida!" << endl; // Debug do rand()
                        system("pause");
                        break;
                }

                if(checkRand == true)
                    checkRand = false; // Repetir o loop pois rand() repetiu
                else
                    checkRand = true; // Sair do loop
            }

            // INTERAÇÃO DO JOGO
            do
            {
                system("cls");
                cout << "Tentativas: " << tentativas << endl;
                cout << "Acertos: " << acertos << endl;
                cout << endl;
                cout << lPrint1 << " " << lPrint2 << " " << lPrint3 << " " << lPrint4 << " " << lPrint5 << " " << lPrint6 << endl;
                cout << "Digite uma letra: ";
                cin >> inputChar;

                // Checar se char digitado corresponde a algum char da palavra
                if(inputChar == letra1 && lPrint1 == '_')
                {
                    lPrint1 = inputChar;
                    acertos++;
                }
                if(inputChar == letra2 && lPrint2 == '_')
                {
                    lPrint2 = inputChar;
                    acertos++;
                }
                if(inputChar == letra3 && lPrint3 == '_')
                {
                    lPrint3 = inputChar;
                    acertos++;
                }
                if(inputChar == letra4 && lPrint4 == '_')
                {
                    lPrint4 = inputChar;
                    acertos++;
                }
                if(inputChar == letra5 && lPrint5 == '_')
                {
                    lPrint5 = inputChar;
                    acertos++;
                }
                if(inputChar == letra6 && lPrint6 == '_')
                {
                    lPrint6 = inputChar;
                    acertos++;
                }

                tentativas--;
                
            } while (tentativas != 0 && acertos != 6);

            checkAll++; // Adiciona número de palavras usadas

            // RESULTADOS
            system("cls");
            cout << "Tentativas: " << tentativas << endl;
            cout << "Acertos: " << acertos << endl;
            cout << endl;
            cout << lPrint1 << " " << lPrint2 << " " << lPrint3 << " " << lPrint4 << " " << lPrint5 << " " << lPrint6 << endl;

            if(acertos == 6) // GANHOU
                cout << "\nGANHOU!\n" << endl;
            else if(tentativas == 0) // PERDEU
                cout << "\nPERDEU.\n" << endl;

            system("pause");
        }
        else if(selectMenu == 2) /*************************** SOBRE ***************************/
        {
            system("cls");
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

    } while (selectMenu != 3); /*************************** FIM ***************************/
    
    return 0;
}