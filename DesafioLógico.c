#include <stdio.h>

 int main(){

   // Carta 1
   char estado1 [20];
   char codigo1 [20];
   char cidade1 [20];
   int populacao1;
   float area1;
   float pib1;
   int turisticos1;
   float densidade_pop1;
   float pib_per_capita1;

  // Carta 2
   char estado2 [20];
   char codigo2 [20];
   char cidade2 [20];
   int populacao2;
   float area2;
   float pib2;
   int turisticos2;
   float densidade_pop2;
   float pib_per_capita2;

  

   // Cadastro da carta 1:
   printf("Cadastro da Carta 1\n");
   printf("Digite seu estado: \n");
   scanf("%s", estado1);

   printf("Digite o código: \n ");
   scanf("%s", codigo1);

   printf("Digite sua cidade: \n");
   scanf("%s", cidade1);

   printf("Digite a população:\n");
   scanf("%d", &populacao1);

   printf("Digite sua Área: \n");
   scanf("%f", &area1);

   printf("Digite seu PIB: \n");
   scanf("%f", &pib1);

   printf("Digite os pontos turisticos: \n");
   scanf("%d", &turisticos1);


   //Cálculos da carta 1:
  densidade_pop1 = (float)populacao1 / area1;
  pib_per_capita1 = pib1 / populacao1;



   // Cadastro da carta 2:
   printf("Cadastro da Carta 2\n");
   printf("Digite seu estado: \n");
   scanf("%s", estado2);

   printf("Digite o código: \n ");
   scanf("%s", codigo2);

   printf("Digite sua cidade: \n");
   scanf("%s", cidade2);

   printf("Digite a população: \n");
   scanf("%d", &populacao2);

   printf("Digite sua Área: \n");
   scanf("%f", &area2);

   printf("Digite seu PIB: \n");
   scanf("%f", &pib2);

   printf("Digite os pontos turisticos: \n");
   scanf("%d", &turisticos2);


   //Cálculos da carta 2:

  densidade_pop2 = (float)populacao2 / area2;
  pib_per_capita2 = pib2 / populacao2;



   // Exibição dos Dados da Carta 1:

   printf("**Dados da Carta 1**\n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f Bilhões de reais \n", pib1);
   printf("Pontos Turísticos: %d\n", turisticos1);

   printf ("Densidade Populacional: %f hab/km² \n", densidade_pop1);
   printf("PIB per Capita: %f reais \n", pib_per_capita1);


   // Exibição dos Dados da Carta 2

   printf("**Dados da Carta 2**\n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f Bilhões de reais\n", pib2);
   printf("Pontos Turísticos: %d\n", turisticos2);

   printf("Densidade Populacional: %f hab/km² \n", densidade_pop2);
   printf("PIB per Capita: %f reais \n", pib_per_capita2);



   //Combate das cartas: Popolação

   if (populacao1 > populacao2){

     printf("População: Carta 1 venceu!\n");

  } else {

     printf("População: Carta 2 venceu!\n");

  }

   return 0;

}
