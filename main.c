#include <stdio.h>
#include <stdlib.h>
#include "MyString.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    
	char s[] = "MAXSUELMARREIRODASCHAGAS";
    char s1[] = "ddd";
    char s2[] = "DDDD";

	printf("%s", mystrncat(s1,s2, 4));


    //printf("%d", mystrlen(s2));
    //printf("%d", mystrncmp(s1,s2,2));

	return 0;
}
