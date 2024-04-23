#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(void)
{
	float raio, area, a, b, soma;
	int auxiliar;
	
	do{
		
 	    printf("escolha uma das tres opcoes abaixo: \n");
		printf("1 - cacular area da circunferencia\n");
		printf("2 - somar dois numeros qualquer\n");
		printf("3 - sair\n");
		scanf("%d", &auxiliar);
		
		switch(auxiliar)
		{
		case 1:
		    printf("informe o valor do raio: ");
			scanf("%f", &raio);
			
			if( raio >= 0){
	    	
	            area = PI * (raio*raio);
	            printf("a area da sua circunferencia e igual a %.2f\n\n", area);
            
		    }else{
		       
		        printf("valor invalido\n\n");
		    
		    }
		    break;
		
		case 2:
			printf("quais sao os dois valores que voce quer somar(separados por espaco): ");
		    scanf("%f %f", &a, &b);
		    
		    soma = a + b;
		    
		    printf("sua soma foi igual a %.1f\n\n", soma);
		    break;
		    
		case 3:
			raio = -1;
			break;
			
		default:
			break;
		}
			
    } while(raio > 0);
	 
	
	printf("fim do ptograma, obrigado\n");
	
	system("pause");
	return 0;
}
