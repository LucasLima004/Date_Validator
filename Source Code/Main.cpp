#include<iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
    int vezes=1;
    int dias,mes,ano,mesaux;
    int janeiro=31;
    int fevereiro=28;
    int marco=31;
    int abril=30;
    int maio=31;
    int junho=30;
    int julho=31;
    int agosto=31;
    int setembro=30;
    int outubro=31;
    int novembro=30;
    int dezembro=31;
    int cont=0;

    while (vezes==1){
        time_t timer;
        struct tm *horarioLocal;
        time(&timer); 
        horarioLocal = localtime(&timer); 
        int anoAtual = horarioLocal->tm_year + 1900;


        cout<<"Digite o ano que você quer validar. \n";
        cin>>ano;
        if(((ano)%4)==0){
            fevereiro=29;
        }
        cout<<"Digite o mês(numeral) que você quer validar. \n";
        cin>>mes;
        cout<<"Digite o dia que você quer validar. \n";
        cin>>dias;
        switch (mes)
        {
        case 1: mesaux = janeiro;
            break;
        case 2: mesaux = fevereiro;
            break;
        case 3: mesaux = marco;
            break;
        case 4: mesaux = abril;
            break;
        case 5: mesaux = maio;
            break;
        case 6: mesaux = junho;
            break;
        case 7: mesaux = julho;
            break;
        case 8: mesaux = agosto;
            break;
        case 9: mesaux = setembro;
            break;
        case 10: mesaux = outubro;
            break;
        case 11: mesaux = novembro;
            break;
        case 12: mesaux = dezembro;
            break;
        default: cout<<"Digite um mês válido.\n";
            break;
        }
        if (dias<=mesaux){
            if(ano>anoAtual){
                cout<<"Digite um dia que realmente seja válido\n";
                cout<<"Digite o número 1 e tecle enter para prosseguir ou 0 para cancelar.\n";
                cin>>vezes;
            }else{
                cout<<"Data validada, ela está de acordo com o formato!\n";
                cout<<"Digite o número 1 e tecle enter para prosseguir ou 0 para cancelar.\n";
                cin>>vezes;
            }
        }else{
            cout<<"Digite um dia que realmente seja válido\n";
            cout<<"Digite o número 1 e tecle enter para prosseguir ou 0 para cancelar.\n";
            cin>>vezes;
        }
    }
}
