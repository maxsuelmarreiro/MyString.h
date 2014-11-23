#include <stdio.h>
#include <stdlib.h>
#include "MyString.h"

int main() {    
	char s[] = "MaxsuelMarreiro";
    char s1[] = "MMM";
    char *s2; 
	
	s2 = mystrdup(s1);
	
	printf("%s",s2);	
	
	//mystrncpy(s1,s2, 4);	
	//printf("%s", mystrncat(s1,s2, 2));
    //printf("%d", mystrlen(s2));
    //printf("%d", mystrncmp(s1,s2,2));

	return 0;
}
