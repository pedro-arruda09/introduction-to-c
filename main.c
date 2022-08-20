#include "stdio.h"

int main() {

  printf("VENDA DE BEBIDAS");
  int idade;
  printf("\nInforme a sua idade: ");
  scanf("%i", &idade);

  if(idade < 18) {
    printf("\nVocê não pode comprar bebidas.");
  }
  else {
    printf("\nEscolha a sua bebida: ");
    printf("\n1. Whisky");
    printf("\n2. Vodka");
    printf("\n3. Cerveja");
    printf("\n4. Cachaça");

    int opcao;
    printf("\n\nDigite a sua opção: ");
    scanf("%i", &opcao);

    int escolha, quantidade;
    float valor_total;
    
    switch(opcao) {

      case 1: 
        printf("\n100. Red Label: R$200");
        printf("\n101. Johnnie Walker: R$150");
        printf("\n102. White Horse: R$140");
        printf("\n103. Jack Daniel's: R$300");
        
        printf("\nEscolha o seu whisky: ");
        scanf("%i", &escolha);

        printf("\nDigite a quantidade: ");
        scanf("%i", &quantidade);

        switch(escolha) {
          case 100:
            valor_total = 200 * quantidade;
            break;
          case 101:
            valor_total = 150 * quantidade;
            break;
          case 102:
            valor_total = 140 * quantidade;
            break;
          case 103: 
            valor_total = 300 * quantidade;
            break;
          default:
            printf("\nOpção inválida");
            break;
        }
        
        break;

      case 2:
        printf("\n200. Orloff: R$60");
        printf("\n201. Natasha: R$40");
        printf("\n202. Slova: R$30");

        printf("\nEscolha a sua vodka: ");
        scanf("%i", &escolha);

        printf("\nDigite a quantidade: ");
        scanf("%i", &quantidade);

        switch(escolha) {
          case 200:
            valor_total = 60 * quantidade;
            break;
          case 201:
            valor_total = 40 * quantidade;
            break;
          case 202:
            valor_total = 30 * quantidade;
            break;
          default:
            printf("\nOpção inválida");
            break;
        }
        
        break;

      case 3: 
        printf("\n300. Heineken: R$4");
        printf("\n301. Eisenbahn: R$3");
        printf("\n302. Skol: R$1.50");

        printf("\nEscolha a sua cerveja: ");
        scanf("%i", &escolha);

        printf("\nDigite a quantidade: ");
        scanf("%i", &quantidade);

        switch(escolha) {
          case 300:
            valor_total = 4 * quantidade;
            break;
          case 301:
            valor_total = 3 * quantidade;
            break;
          case 302:
            valor_total = 1.50 * quantidade;
            break;
          default:
            printf("\nOpção inválida");
            break;
        }
        
        break;

      case 4:
        printf("\n400. Pitú: R$8");
        printf("\n401. Ypioca: R$20");
        printf("\n402. Sagatiba: R$22");

        printf("\nEscolha a sua cachaça: ");
        scanf("%i", &escolha);

        printf("\nDigite a quantidade: ");
        scanf("%i", &quantidade);

        switch(escolha) {
          case 400:
            valor_total = 8 * quantidade;
            break;
          case 401:
            valor_total = 20 * quantidade;
            break;
          case 402:
            valor_total = 22 * quantidade;
            break;
          default:
            printf("\nOpção inválida");
            break;
        }
        
        break;

      default: 
        printf("\nOpção inválida");
    }

    if(quantidade > 100) {
      printf("\nVocê comprou %i bebida(s) de código %i, totalizando R$%f", quantidade, escolha, valor_total * 0.65);
    }
    else if(quantidade > 50) {
      printf("\nVocê comprou %i bebida(s) de código %i, totalizando R$%f", quantidade, escolha, valor_total * 0.7);
    }
    else if (quantidade > 5) {
      printf("\nVocê comprou %i bebida(s) de código %i, totalizando R$%f", quantidade, escolha, valor_total * 0.9);
    }
    else if(quantidade >= 1) {
      printf("\nVocê comprou %i bebida(s) de código %i, totalizando R$%f", quantidade, escolha, valor_total);
    }
    else {
      printf("\nA quantidade foi inválida");
    }
  }
  
}