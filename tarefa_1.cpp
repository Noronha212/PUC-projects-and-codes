#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(void)
{
	float raio, area;
	
	printf("este programa calcula a area de qualquer Area\n");
	
	printf("Qual e o raio da sua circunferencia: ");
	scanf("%f", &raio);
	
	   
	
	area = PI * (raio*raio);
	
	printf("a area da sua circunferencia e igual a %.2f\n", area);
	printf("fim do ptograma, obrigado");
	
	system("pause");
	return 0;
}