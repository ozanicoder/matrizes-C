#include <stdio.h>
#include <locale.h>
/*#include <stdlib.h>
#include <stdint.h>
#include <conio.h>*/
#include <string.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	char noms[2][10];
	
	printf("Qual é o nome do colégio onde o jovem Emílio Miguel do 2º ano de MTI estuda?");
	scanf("%10[^\n]", noms[0]);
	/*fflush("stdin");
	system("cls");
    */
    printf("Agora troque a ordem das palavras do nome\n");
    scanf("%10[^\n]", noms[1]);
    
	printf("Segundo você o colégio chama-se %s\n que ao contrário fica %s", noms[0], noms[1]);
	
	return 0;
}