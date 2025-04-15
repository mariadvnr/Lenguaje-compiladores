#include<stdio.h>

int main()
{
	char cadena[250], palabra[10], cadCopia[10];
	int  cant=0, cad=0, i=0, j=0, y=0, ocur=0, cont=0;
	printf("Ingrese una cadena: ");
	fgets(cadena, 100, stdin);
	printf("Ingrese la palabra buscar: ");
	fgets(palabra, 20, stdin);

	for(i=0; cadena[i]!='\0';i++){
		cad++;
	}

	cad-=1;
	printf("longitud de la cadena: %i\n",cad);
	

	for(i=0; palabra[i]!='\0';i++){
		cant++;
	}
	
	cant-=1;
	printf("longitud de la palabra a buscar: %i\n",cant);
			
	for(i=0; i<cad; i++ ){

				for(j=0; j<cant; j++){
					cadCopia[j]=cadena[i+j];			
				}
				
				if(cadCopia[cant-1]==palabra[cant-1]){
					
					for(y=0; y<cant; y++){
						if(cadCopia[y]==palabra[y]){
							cont++;
							if(cont == cant){
								ocur++;
							}		
						}
					}
					cont=0;
				}		
	}
	
	printf("La palabra %s se repite %i veces en el texto...",palabra, ocur);
	return 0;
}
