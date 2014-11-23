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
	//
	//if(s == NULL){
	//	return 0;
	//}
	
    if(mystrlen(s1) < mystrlen(s2)){
          return -1;
    }else if(mystrlen(s1) > mystrlen(s2)){
          return 1;
    }else{
          return 0;
    }
}

// Equivalente a função anterior, exceto que realiza a comparação apenas dos
// n primeiros caracteres das duas strings.
int mystrncmp(char *s1, char *s2, int n){
	int i, igual = 0;
	
	for(i=0; i<n; i++){
		if(s1[i] == s2[i]){
			igual++;
		}else{
			return -1;
		}
	}
	return 0;
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


char *mystrcpy(char *s1, char *s2){}
char *mystrncpy(char *s1, char *s2, int n){}
char *mystrdup(char *s){}
