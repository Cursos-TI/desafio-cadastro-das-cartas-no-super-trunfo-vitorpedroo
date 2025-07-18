#include <stdio.h>
int main() {
   // variaveis das cartas
   char estado1, estado2;
   char codigo1[4], codigo2[4];
   char nome1[50], nome2[50];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int turismo1, turismo2;


   // entrada de dados primeira carta

   printf("===== CARTA 1 ===== \n");

   printf("Informe a letra do primeiro estado (De 'A' a 'H'): \n");
   scanf(" %c", &estado1);

   printf("Informe o codigo do estado(ex: A01, B03): \n");
   scanf(" %s", &codigo1);

   printf("Informe o nome da cidade: \n");
   scanf(" %[^\n]", &nome1);

   printf("Informe a populacao da cidade: \n");
   scanf(" %d", &populacao1);

   printf("Informe a area da cidade(em Km²): \n");
   scanf(" %f", &area1);

   printf("Informe o PIB da cidade(em bilhões de reais): \n");
   scanf(" %f", &pib1);

   printf("Quantidade de pontos turisticos da cidade: \n");
   scanf(" %d", &turismo1);

   // entrada de dados segunda carta

   printf("===== CARTA 2 ===== \n"); 
   printf("Informe a letra do segundo estado (De 'A' a 'H'): \n");
   scanf(" %c", &estado2);  

   printf("Informe o codigo do estado(ex: A01, B03): \n");
   scanf(" %s", &codigo2);

   printf("Informe o nome da cidade: \n");
   scanf(" %[^\n]", &nome2);

   printf("Informe a populacao da cidade: \n");
   scanf(" %d", &populacao2);

   printf("Informe a area da cidade(em Km²): \n");
   scanf(" %f", &area2);

   printf("Informe o PIB da cidade(em bilhões de reais): \n");
   scanf(" %f", &pib2);

   printf("Quantidade de pontos turisticos da cidade: \n");
   scanf(" %d", &turismo2);


   // saida de dados primeira carta
   printf("===== CARTA 1 ===== \n");
   printf("Estado: %c\n", estado1);
   printf("codigo: %s\n", codigo1);
   printf("Nome da cidade: %s\n", nome1);
   printf("Populacao: %d\n", populacao1);
   printf("Area: %.2f Km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Pontos turisticos: %d\n", turismo1);

   // saida de dados segunda carta
   printf("===== CARTA 2 ===== \n");
   printf("Estado: %c\n", estado2);
   printf("codigo: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome2);
   printf("Populacao: %d\n", populacao2);
   printf("Area: %.2f Km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Pontos turisticos: %d\n", turismo2);



   return 0;
}