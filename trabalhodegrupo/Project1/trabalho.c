#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	char equipa[15];
	char estadio[30];
	int capacidadeDoEstadio;
	int numerodesocios;
	float fundosdoclube;
	float despesasMensaisdeManuten�aodoEstadio;
	struct tabeladeResultados {
		int numerodeJogos;
		int numerodeVitorias;
		int numerodeEmpates;
		int numerodeDerrotas;
		int numerodeGolos;
		int numerodeGolosSofridos;
	};
	struct treinadoreJogadores {
		char treinador[20];
		struct jogadores {
			char nome[30];
			float vencimento;
			int datadoIniciodoContrato[3];
			int anosdoContrato;
			int for�adoJogador[4];
		};
	};
} dados;

int Main() {



	dados equipasEDados[18];

}