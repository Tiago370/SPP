#include<stdio.h>
#include "strip.h"
#include<iostream>
Strip::Strip(unsigned int W, unsigned int n){
    this->n = n;
    this->W = W;
    this->H = 0;
}

Strip::~Strip(){}

void Strip::readInstance(char* arquiv){
    FILE *arq;
	arq = fopen(arquiv, "r");
	if (arq == NULL){  // Se houve erro na abertura
		printf("Problemas na abertura do arquivo\n");
    	return;
  	}
    int erroLeitura, W, H, n;
  	//ler a largura, a altura e o número de itens
	erroLeitura = fscanf(arq, "%d %d", &W, &H);
    erroLeitura = fscanf(arq, "%d", &n);
    this->W = W;
    this->H = H;
    this->n = n;
    //ler os itens
    for(int i = 0; i < n; i++){
        int w, h;
        erroLeitura = fscanf(arq, "%d %d", &w, &h);
        this->itens.push_back(Rect(w,h));
    }
  	fclose(arq);
    if(erroLeitura == EOF) cout << "Erro de leitura" << endl;
    //criar a matriz de colisão
    for(int i = 0; i < W; i++){
        this->collisionMatrix.push_back({});
        for(int j = 0; j < W; j++){
            this->collisionMatrix[j].push_back(false);
        }
    }
}
