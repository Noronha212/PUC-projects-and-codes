#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main(void)
{
	int i;
	float raio, area;
	
	printf("---------este programa calcula a area de qualquer Area----------\n");
		
 	printf("Qual e o raio da sua circunferencia: ");
	scanf("%f", &raio);
	  
	  
	    if( raio > 0){
	    	
	      area = PI * (raio*raio);
	      printf("a area da sua circunferencia e igual a %.2f\n", area);
        
		}else{
			
    	 
		  printf("valor invalido, tente novamente\n");
		  printf("fim do ptograma, obrigado\n");
        }  
	
	system("pause");
	return 0;
}
