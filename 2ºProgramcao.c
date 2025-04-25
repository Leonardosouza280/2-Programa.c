#include <stdint.h>

int main(){
    char Codigodacarta1[5] = "A01";
    char estado1[30] = "Pernambuco";
    char cidade1 [30] = "Recife";
    float PIB1 = 25500000;
    int populacao1 = 250000;
    float area1 = 124000;
    int NPT1 = 25;
    float Densidade_populacinal1, PIB_PER_CAPITAL1;

    char Codigodacarta2[5] = "A02";
    char estado2[30] = "Rio Grande do Norte";
    char cidade2 [30] = "Natal";
    float PIB2 = 15000000;
    int populacao2 = 150000;
    float area2 = 100000;
    int NPT2 = 31;
    float Densidade_populacinal2, PIB_PER_CAPITAL2;

printf("O Codigo da carta é:%s\n", Codigodacarta1); 
printf("O estado da carta é:%s\n", estado1);
printf("A cidade da carta é:%s\n", cidade1);
printf("O pib da carta é: %.2f\n", PIB1);
printf("A popolação da carta é:%d\n", populacao1);
printf("A area da carta é:%.2f\n", area1);
printf("O Número de Pontos turistico da carta é:%d\n", NPT1);

Densidade_populacinal1 = populacao1 / area1;
printf("A densidade populacional da carta é:%.2f\n", Densidade_populacinal1);
PIB_PER_CAPITAL1 = PIB1/ populacao1;
printf("O PIB per Capital da carta é:%.2f\n\n\n", PIB_PER_CAPITAL1);

//Dados da segunda carta.
printf("O Codigo da carta é:%s\n", Codigodacarta2); 
printf("O estado da carta é:%s\n", estado2);
printf("A cidade da carta é:%s\n", cidade2);
printf("O pib da carta é: %.2f\n", PIB2);
printf("A popolação da carta é:%d\n", populacao2);
printf("A area da carta é:%.2f\n", area2);
printf("O Número de Pontos turistico da carta é:%d\n", NPT2);

Densidade_populacinal2 = populacao2 / area2;
printf("A densidade populacional da carta é:%.2f\n", Densidade_populacinal2);
PIB_PER_CAPITAL2 = PIB2/ populacao2;
printf("O PIB per Capital da carta é:%.2f\n\n\n", PIB_PER_CAPITAL2);

printf("***HORA DA SABER QUEM GANHA***\n\n");

if(populacao1 > populacao2){
    printf("Recife (carta01) Venceu em população\n");
}else{
    printf("Natal (Carta02) Venceu em populaçaõ\n");
}
if(area1 > area2){
    printf("Recife (carta01) Venceu em Área\n");
}else{
    printf("Natal (Carta02) Venceu em Área\n");
}
if(PIB1 > PIB2){
    printf("Recife (Carta01) Venceu em PIB\n");
}else{
    printf("Natal (Carta02) Venceu em PIB\n");
}
if(NPT1 > NPT2){
    printf("Recife(Carta01) Venceu em Número de Pontos Turísticos\n");
}else{
    printf("Natal (Carta02) Venceu em Número de Pontos Turísticos\n");
}
if(PIB_PER_CAPITAL1 > PIB_PER_CAPITAL2){
    printf("Recife (Carta01) Venceu em PIB PER CAPITAL\n");
}else{
    printf("Natal (Carta02) Venceu em PIB PER CAPITAL\n");
}
if (Densidade_populacinal1 < Densidade_populacinal2){
    printf("Recife (carta01) Venceu em Densidade Populacional\n");
}else{
    printf("Natal (Carta02) Venceu em Densidade Populacional\n");
}






return 0;
}

