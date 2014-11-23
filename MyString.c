#include <stdlib.h>
#include "MyString.h"

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

int mystrcmp(char *s1, char *s2){
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

int mystrncmp(char *s1, char *s2, int n){
	// Equivalente a função anterior, exceto que realiza a comparação apenas dos
	// n primeiros caracteres das duas strings.
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
char *mystrncat(char *s1, char *s2, int n){
	int i,j=0;
	
	for(i=n; i < n*2; i++ ){
		s1[i] = s2[j];
		j++;
	}
	
	s1[n*2] = '\0';
	
	return s1;
}
char *mystrcpy(char *s1, char *s2){}
char *mystrncpy(char *s1, char *s2, int n){}
char *mystrdup(char *s){}
