#include<stdio.h>
int fact(int n);
int coeficiente(int x, int y);

int main (){
	int exp, i,j, c, resul[exp], cont=0, ele=0;
	printf("Binomio: ");
	printf("\nIngrese el exponente: ");
	scanf("%d", &exp);
	
	ele=exp;
	for(i=0;i<=exp;i++){
		for(j=0; j<=i;j++){
			c=coeficiente(i,j);
			printf(" %d", c);
			if(cont==exp){
				resul[j]=coeficiente(i,j);
				
			}
		}
		cont++;
		printf("\n");
	}
	
	printf("\n\nEl resultado del binomio es:\n");
	
	for(i=0; i<=exp; i++){
		
		if(i<exp){
			
			printf("%dx^%d +", resul[i], ele);
		}
		else if (i==exp){
			printf("%d", resul[i]);
		}
		ele--;
		printf(" ");
		
	}
	 
	return 0;
}

int fact(int n){
	int i, a=1;
	for(i=1; i<=n; i++)
		a*=i;
	
	return a;
}

int coeficiente(int x, int y){
	int c=0;
	c=fact(x)/(fact(y)*fact(x-y));
	return c;	
}




