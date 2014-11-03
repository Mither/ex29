/* Este programa calcula o troco e de que forma ele deve ser dado.
 * Autor: Mithermayer Menabó Neto
 * Data: 03/11/2014
 */

#include <stdio.h>

int main(void)
{
	int p; /*indica produto*/
	float v; /*indica valor do produto*/

	printf(" 1- coca R$3,50 \n 2- ice R$5,80 \n 3- guarana R$2,10 \n 4- suco R$1,90 \n 5- café R$0,70\n\n\n Qual produto deseja?\n");
	scanf("%d", &p);
	printf(" Qual o valor inserido?\n");
	scanf("%f", &v);

	return 0;
}

