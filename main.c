#include <stdio.h>
#include <stdlib.h>
#include "MyString.h"

int main() {    
	char s1[] = "AAB";
	char s2[] = "AAA";
	
	char a1[] = "AAA";
	char a2[] = "AAB";
	
	char b1[] = "AAA";
	char b2[] = "AAA";
	
    char *s3 = "XXXX"; 
	
	s3 = mystrdup(s1);
	
	printf("%d", mystrncmp(s1,s2,3));	
	printf("%d", mystrncmp(a1,a2,3));	
	printf("%d", mystrncmp(b1,b2,3));	
	//mystrncpy(s1,s2, 4);	
	//printf("%s", mystrncat(s1,s2, 2));
    //printf("%d", mystrlen(s2));
    //printf("%d", mystrncmp(s1,s2,2));

	return 0;
}
