#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Registros
{
    string nome, rg, tel, ender, produto, desc, valor, qtdComprada, codPedido, dataSaida, dataEntrega;
};

int adicionar(void)
{
    FILE*info_cad;
    info_cad = fopen("Informacoes_Cadastradas.csv","a");
    int p, id;
    id = 0;

    struct Registros cadastros;
    
    if(id <= fprintf(info_cad, "%d", id))
    {
        id++;
    }

    if(id == 0)
    {
        fprintf(info_cad, "Cadastro");
        fprintf(info_cad, "Nome");
        fprintf(info_cad, "Rg");
        fprintf(info_cad, "Telefone");
        fprintf(info_cad, "Endereco");
        fprintf(info_cad, "Produto");
        fprintf(info_cad, "Descricao do produto");
        fprintf(info_cad, "Valor");
        fprintf(info_cad, "Quantidade comprada");
        fprintf(info_cad, "Codigo de rastreio");
        fprintf(info_cad, "Data de saida");
        fprintf(info_cad, "Chegara entre");
        fprintf(info_cad, "\n");
    }
    do
    {
        cout << "\n\n\t\t\t\t\tCADASTRANDO CLIENTE " << id <<"\n\n";

        cout << "\tNome.........: ";
        getline(cin, cadastros.nome);

        cout << "\tRg...........: ";
        getline(cin, cadastros.rg);

        cout << "\tTel..........: ";
        getline(cin, cadastros.tel);

        cout << "\tEndereco.....: ";
        getline(cin, cadastros.ender);
        system("cls");

        cout << "\n\n\t\t\t\t\tPRODUTO COMPRADO\n\n";

        cout << "\tNome do produto.....: ";
        getline(cin, cadastros.produto);

        cout << "\tDescricao do Produto: ";
        getline(cin, cadastros.desc);

        cout << "\tValor do Produto....: R$";
        getline(cin, cadastros.valor);

        cout << "\tQuantidade comprada.: ";
        getline(cin, cadastros.qtdComprada);
        system("cls");

        cout << "\n\n\t\t\t\t\tDESCRICAO DO PEDIDO\n\n";
        cout << "\tCodigo do Pedido...: ";
        getline(cin, cadastros.codPedido);

        cout << "\tData de saida......: ";
        getline(cin, cadastros.dataSaida);

        cout << "\tChegara entre......: ";
        getline(cin, cadastros.dataEntrega);
        system("cls");

        cout << "\n\tCadastro Realizado com sucesso!";
        Sleep(3000);
        system("cls");

        fprintf(info_cad, "%d", id);
        fprintf(info_cad, cadastros.nome.c_str());
        fprintf(info_cad, cadastros.rg.c_str());
        fprintf(info_cad, cadastros.tel.c_str());
        fprintf(info_cad, cadastros.ender.c_str());
        fprintf(info_cad, cadastros.produto.c_str());
        fprintf(info_cad, cadastros.desc.c_str());
        fprintf(info_cad, cadastros.valor.c_str());
        fprintf(info_cad, cadastros.qtdComprada.c_str());
        fprintf(info_cad, cadastros.codPedido.c_str());
        fprintf(info_cad, cadastros.dataSaida.c_str());
        fprintf(info_cad, cadastros.dataEntrega.c_str());
        fprintf(info_cad, "\n")
            
        cout << "\n\t\tDeseja realizar outro cadastro?\n ";
        cout << "\n\tSim -- Digite (1)\n";
        cout << "\n\tNao -- Digite qualquer tecla\n";
        cin >> p;
        system("cls");

        if(p == 1)
        {

            system("cls");
            cin.ignore(1, '\n');
        }
        else
        {
            cout << "Encerrando...";
            Sleep(3000);
            system("cls");
            break;
        }
    }
    while(p == 1);
    fclose(info_cad);
    return 0;
}
