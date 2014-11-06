/* Este programa calcula o troco e de que forma ele deve ser dado.
 * Autor: Mithermayer Menabó Neto
 * Data: 03/11/2014
 */

#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, f; /*indica moedas*/
	int p; /*indica produto*/
	float v; /*indica valor inserido*/
	float q; /*indica valor do produto*/	
	float t; /* indica valor de troco*/

	printf("\n\t1- coca R$3,50 \n\t2- ice R$5,80 \n\t3- guaraná R$2,10 \n\t4- suco R$1,90 \n\t5- café R$0,70\n\n\nQual produto deseja?\n");
	scanf("%d", &p);
		
	if(p==1)
	{
		q = 3.5;
		printf("Você escolheu uma coca!\n");
	}
	else
		if(p==2)
		{
			q = 5.8;
			printf("Você escolheu uma ice!\n");
		}
		else
			if(p==3)
			{
				q = 2.1;
				printf("Você escolheu um guaraná!\n");
			}
			else
				if(p==4)
				{
					q = 1.9;
					printf("Você escolheu um suco!\n");
				}
				else
					if(p==5)
					{
						q = 0.7;
						printf("Você escolheu um café\n");
					}
					else
						printf("Não indentifequei seu produto. Desculpe-me!\n");
	printf("\nQual o valor inserido?\n");
	scanf("%f", &v);

	if(p<=5)
	{
		t = v - q;
		printf("Seu troco é de: R$%f\n\n", t);
	}

	if(t>=1)
	{
		a = t/1;
		t = t - a;
		printf("%d moedas de R$1,00\n", a);
	}
	
	if(t>=0.5 && t<1)
	{
		b = t/0.5;
		t = t - b * 0.5;
		printf("%d moedas de R$0,50\n", b);
	}
	
	if(t>=0.25 && t<0.5)
	{
		c = t/0.25;
		t = t - c * 0.25;
		printf("%d moedas de R$0,25\n", c);
	}
			
	if(t>0.09)
	{
		d = t/0.1 + 0.01;
		t = t - d * 0.1;
		printf("%d moedas de R$0,10\n", d);
	}
	
	if(t>=0.05 && t<0.1)
	{
		e = t/0.05;
		t = t - e * 0.05;
		printf("%d moedas de R$0.05\n", e);
	}
		
	if(t>=0.001 && t<0.05)
	{
		f = t/0.01 + 0.01;
		printf("%d moedas de R$0,01\n", f);
	}
	

	return 0;
}

