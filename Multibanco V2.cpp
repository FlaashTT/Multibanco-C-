#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;          //Interface

//senha:1234
int main (){
    //string
    int name;
    //money
    int lp;
    //pass
    int senha,saldo,resposta,resposta1,top;
    //kok
    float nib,A;
    double euro;
    //kak
    int AB;
    int dia,mes,ano;
    int tr;
    int desc1;
    int desc2;
    int desc3;
    //...
    float mont;
    float inta;
    int ref;

    while (name = 12){

    string name;
    cout<<"Diz o teu nome:";
    getline(cin, name);
    Sleep(1000);
    system("cls");


    if (name.length() > 12)
    {
        cout<<"Caracteres Ultrapassados\n";
    }else 
    {
        cout<<"Bem vindo "<< name << endl;
        Sleep(1000);
        system("cls");
        break;    
    }
    }
    
    cout<<"Introduza quando Dinheiro tèm no cartao, sem caracteres\n";
    cout<<"=>>";
    cin>>lp;
    system("cls");
    


    while (senha=1)
    {
        cout<<"Bem-Vindo ao Multibanco\n";
        cout<<"Digite a Senha:";
        cin>>senha;
        while (senha != 1234)
        {
            cout<<"Senha Incorreta:";
            cin>>senha;
        }
        cout<<"Acesso Permitido";
        Sleep(1000);
        system ("cls");

    cout<<"\n";
    cout<<"Loading ";
    char x = 219;
    for(int i=0 ; i<35 ; i++)
    {
        cout<<x;
        if(i<10)
        Sleep(300);
        if(i>=10 && i<20)
        Sleep(150);
        if(i>=10)
        Sleep(25);
        

    }   
        system("cls"); 
        break;
    }
    while (top != 2){
    cout<<"==================================\n";
    cout<<"1-Levantamentos\n";
    cout<<"2-Transferencias\n";
    cout<<"3-Descontos Multibanco\n";
    cout<<"4-Pagamentos de Servicos\n";
    cout<<"==================================\n";
    cout<<"Escolha qual deseja escolher:";
    cin>>resposta;
    Sleep (1000);
    system ("cls");

    switch (resposta){
        case 1:
    cout<<"=====================\n";
    cout<<"1-20 euros\n";
    cout<<"2-40 euros\n";
    cout<<"3-100 euros\n";
    cout<<"4-200 euros\n";
    cout<<"5-300 euros\n";
    cout<<"Sua escolha\n";
    cout<<"=====================\n";
    cout<<"==>";
    cin>>resposta1;
    Sleep (350);
    system ("cls");

        if (resposta1==1){

            cout<<"======================\n";
            cout<<"Foi Levantado 20 euros para a sua carteira\n";
            cout<<"O seu Saldo ficara "<<lp-20<<"\n";
            cout<<"======================\n";
        
        }
        if (resposta1==2){

            cout<<"======================\n";;
            cout<<"Foi Levantado 40 euros para a sua carteira\n";
            cout<<"O seu Saldo ficara "<<lp-40<<"\n";
            cout<<"======================\n";
        
        }
        if (resposta1==3){

            cout<<"======================\n";
            cout<<"Foi Levantado 100 euros para a sua carteira\n";
            cout<<"O seu Saldo ficara "<<lp-100<<"\n";
            cout<<"======================\n";
        
        }
        if (resposta1==4){

        cout<<"======================\n";
        cout<<"Loading\n";
        cout<<"Foi Levantado 200 euros para a sua carteira\n";
        cout<<"O seu Saldo ficara "<<lp-200<<"\n";
        cout<<"======================\n";
        
        }
        if (resposta1==5){

            cout<<"======================\n";
            cout<<"Foi Levantado 40 euros para a sua carteira\n";
            cout<<"O seu Saldo ficara "<<lp-40<<"\n";
            cout<<"======================\n";
        
        }

        if (resposta1 < 0 || resposta1 > 6 ){

            cout<<"======================\n";
            cout<<"Loading\n";
            cout<<"Foi Levantado "<<resposta1<<" euros para a sua carteira\n";
            cout<<"O seu Saldo ficara "<<lp-resposta1<<"\n";
            cout<<"======================\n";
        
        }

        cout<<"Deseja fazer mais alguma Operacao?\n";
        cout<<"1-Sim ou 2-Nao\n";
        cin>>top;
        Sleep(350);
        system ("cls");
        break;

        case 2:
            cout<<"==========================\n";
            cout<<"Introduza o NIB de 18 Digitos:";
            cin>>nib;
            cout<<"Intoduza a Importancia a Tranferir:";
            cin>>euro;
            cout<<"============================\n";
            Sleep(350);
            system ("cls");

            cout<<"===========================\n";
            cout<<"Loading\n";
            Sleep(350);
            cout<<"A Tranfencia a ser enviada com o NIB "<<nib<<" com a respetivo dinheiro de "<<euro<<" euros\n";
            cout<<"===========================\n";

            cout<<"Deseja fazer mais alguma Operacao?\n";
            cout<<"1-Sim ou 2-Nao\n";
            cin>>top;
            Sleep(350);
            system ("cls");
            break;

        case 3:
            cout<<"Descontos Multibanco:\n";
            cout<<"========================\n";
            cout<<"1>>SL Benfica\n";
            cout<<"2>>Sporting\n";
            cout<<"3>>FC Porto\n";
            cout<<"==>";
            cin>>tr;
            system ("cls");

        if (tr==1){
            cout<<"SL Benfica fornece descontos\n";
            cout<<"==============================\n"; 
            cout<<"Introduza o numero de cartao do Banco\n";
            cin>>AB;
            cout<<"Introduza a Dia:\n";
            cin>>dia;
            cout<<"Introuduza o Mes:\n";
            cin>>mes;
            cout<<"Introduza o Ano:\n";
            cin>>ano;
            cout<<"===========================\n";
            desc1=lp/16;
            cout<<"O Cartao "<<AB<<" com expiracao ate "<<dia<<"/"<<mes<<"/"<<ano<<" vai ser descontado ate a conclusao!\n";
            cout<<"O desconto de SL Benfica vai ser depositado no Banco.\n";
            cout<<"Todos os meses sera descontado "<<desc1<<"\n";
            cout<<"========================\n";
        }
        if (tr==2){
            cout<<"Sporting fornece descontos\n";
            cout<<"==============================\n";
            cout<<"Introduza o numero de cartao do Banco\n";
            cin>>AB;
            cout<<"Introduza a Dia:\n";
            cin>>dia;
            cout<<"Introuduza o Mes:\n";
            cin>>mes;
            cout<<"Introduza o Ano:\n";
            cin>>ano;
            cout<<"===========================\n";
            desc2=lp/20;
            cout<<"O Cartao "<<AB<<" com expiracao ate "<<dia<<"/"<<mes<<"/"<<ano<<" vai ser descontado ate a conclusao\n";
            cout<<"O desconto de Sporting vai ser depositado no Banco\n";
            cout<<"Todos os meses sera descontado\n"<<desc2<<"\n";
            cout<<"========================\n";
        }
        if (tr==3){
            cout<<"FC Porto fornece descontos\n";
            cout<<"==============================\n";
            cout<<"Introduza o numero de cartao do Banco\n";
            cin>>AB;
            cout<<"Introduza a Dia:\n";
            cin>>dia;
            cout<<"Introuduza o Mes:\n";
            cin>>mes;
            cout<<"Introduza o Ano:\n";
            cin>>ano;
            cout<<"===========================\n";
            desc3=lp/12;
            cout<<"O Cartao "<<AB<<" com expiracao ate "<<dia<<"/"<<mes<<"/"<<ano<<" vai ser descontado ate a conclusao\n";
            cout<<"O desconto de FC Porto vai ser depositado no Banco\n";
            cout<<"Todos os meses sera descontado\n"<<desc3<<"\n";
            cout<<"========================\n";
        }
                
        cout<<"Deseja fazer mais alguma Operacao?\n";
        cout<<"1-Sim ou 2-Nao\n";
        cin>>top;
        Sleep(350);
        system ("cls");

        case 4:
            cout<<"Pagamentos de Servicos\n";
            cout<<"========================\n";
            cout<<"Entidade (5)\n";
            cin>>inta;
            cout<<"Referencia (9)\n";
            cin>>ref;
            cout<<"Montante (Euros)\n";
            cin>>mont;
            cout<<"========================\n";
            cout<<"O pagamento foi concluido com as informacoes dadas de\n";
            cout<<"="<<inta<<"\n";
            cout<<"="<<ref<<"\n";
            cout<<"="<<mont<<"\n";  
        
        cout<<"Deseja fazer mais alguma Operacao?\n";
        cout<<"1-Sim ou 2-Nao\n";
        cin>>top;
        Sleep(350);
        system ("cls");
        break;
        default:
            cout<<"==>> ERROO / Invalido\n";
            Sleep(350);
            system("cls");
        }//case

    }//While

    if (top=2){
    cout<<"===============\n";
    cout<<"Volte Sempre\n"; 
    cout<<"===============";
    }

return 0;       
}//main