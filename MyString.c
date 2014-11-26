#include <stdlib.h>
#include "MyString.h"

//Recebe uma string s e retorna o tamanho da string s.
int mystrlen(char *s){
	if(s == NULL){
		return 0;
	}
    int qtd=0, i=0;
    
	while(s[i] != '\0'){
      qtd++;
      i++;
    }
    return qtd;    
}

// Compara duas strings s1 e s2 e retorna um valor menor que zero, igual a
// zero ou maior que zero caso a string s1 seja, respectivamente, menor, igual
// ou maior que a string s2.

int mystrcmp(char *s1, char *s2){	
	while(*s1 == *s2){
		if( *s1 == '\0' ){
			return *s1 - *s1;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

// Equivalente a fun��o anterior, exceto que realiza a compara��o apenas dos
// n primeiros caracteres das duas strings.
int mystrncmp(char *s1, char *s2, int n){
	int i=0;
	int j=0;
	
	while(n>0){
		if(s1[i] == '\0' || s1[i] != s2[j]){
			return s1[i] - s2[j];
		}
	i++;
	j++;
	n--;
	}

	return s1[i] - s2[j];
}

// Concatena a strings s2 ao final de s1.
char *mystrcat(char *s1, char *s2){
	int i,j=0;
	//int *v1;
	//v1 = (int*) malloc((mystrlen(s1)+mystrlen(s2))*sizeof(int)); if(v1 == NULL){return 0;}
	int tam = mystrlen(s1)+mystrlen(s2);
	
	for(i=mystrlen(s1); i < tam; i++ ){
		s1[i] = s2[j];
		j++;
	}

	s1[tam] = '\0';

	return s1;
}

// Concatena os n primeiros caracteres de s2 ao final de s1.
char *mystrncat(char *s1, char *s2, int n){
	int i,j=0;
	int temp = mystrlen(s1)+n;
	
	for(i=mystrlen(s1); i < temp; i++){
		s1[i] = s2[j];
		j++;
	}

	s1[temp] = '\0';

	return s1;
}

// Copia o conte�do da string s2 para a string s1.
char *mystrcpy(char *s1, char *s2){
	int temp = 0;
	while (s1[temp] != '\0') {
		s2[temp] = s1[temp];
		temp++;
	}
	s2[temp] = '\0';

	return s2;
}

// Copia os n primeiros caracteres de s2 para a string s1.
char *mystrncpy(char *s1, char *s2, int n){
	int temp = 0;
	while (temp != n) {
		s1[temp] = s2[temp];
		temp++;
	}
	
	s1[temp] = '\0';
	
	return s1;
}

// Aloca mem�ria e retorna uma nova string que � a c�pia da string s.
char *mystrdup(char *s){
	int temp = mystrlen(s)+1;
	char *nova = (char*) malloc(temp*sizeof(char));

	mystrcpy(s, nova);

	return nova;
}
