#include <iostream>
#include <locale.h>
#include <iomanip>
#include<stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    char letras [10] = {'A','B','C','D','E','F','G','H','I','J'}, stop='s', nome [30], fila, linha;
    int i ,j, cadeira;
    int x[10][20]={0};

    while (stop=='s'){
            cout << "\nRESERVA DE LUGAR NO TEATRO:\n " << endl;
            cout << "\n========================================" << endl;
            cout << "\nMAPA DE LUGARES: \n" << endl;

        for (i=0;i<10;i++){
            cout << "\n";
            cout << letras[i] << " | ";
            for (j=0;j<20;j++)
            cout << x[i][j] << " | ";
        }

        cout << "\n" <<" " ;

        for (i=1;i<21;i++){
            cout << setw(4) << i;
        }

        do{
            cout << "\n\nEscolha uma fileira de (A à J ou &) : ";
            cin >> fila;

            if (fila=='&'){
                cout << "\nDeseja continuar (s/n) : ";
                cin >> stop;
            if(stop=='s'){
                cout << "\n\nEscolha uma fileira de (A à J ou &) : ";
                cin >> fila;
            }else{
                return 0;
              }
            }
            fila = toupper(fila);
            linha = fila - 65 ;
            cout << "\nEscolha um assento da fileira de (1 à 20) : ";
            cin >> cadeira;
            cout <<endl;

        }while(cadeira < 1 || cadeira > 20 || fila < 65 || fila > 75);

        system("cls");

        if(x[linha][cadeira-1]==0){
            x[linha][cadeira-1]++;
            cout << "Digite seu Nome:  ";
            cin.ignore();
            cin.getline(nome, 30);
            cout << "\n========================================" << endl;
            cout << "\nReserva feita com sucesso !" << endl;
            cout << "\n========================================" << endl;
            cout << "\n     Ingresso Nominal : "<< nome <<endl;
            cout << "\n========================================" << endl;
            cout << "\nNome da peça: O Fantasma da Opera" << endl;
            cout << "\nHorário: 6º - 19h" << endl;
            cout << "\nLugar:  "<< fila << cadeira <<endl;
            cout << "\nDeseja continuar (s/n) : ";
            cin >> stop;
            system("cls");
        }else{
            cout << "\n========================================" << endl;
            cout << "\nLugar Ocupado!" << endl;
            cout << "\n========================================" << endl;
          }
        }

    cout << "\n\n\n\n\n\n";

    return 0;
}

