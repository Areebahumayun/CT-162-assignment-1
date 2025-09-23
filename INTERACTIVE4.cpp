#include<stdio.h>
int main()
{ 
    char ch;
    printf("Enter a character=");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
    {
    	printf("is an uppercase letter\n");
	}
	else if(ch >= 'a' && ch<='z'){
		printf("is an lowercase letter\n");
	}
	else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");                
    } 
    else {
        printf("Special character\n");     
    }

    return 0;
}