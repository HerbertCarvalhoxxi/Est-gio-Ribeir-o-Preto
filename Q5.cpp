#include <stdio.h>;
#include <string.h>

int main(){
	
	char string[11];
	char reverseString[11];
	
	printf("Digite a palavra que sera invertida: ");
	fgets(string, sizeof(string), stdin);
	
	int lenght = strlen(string) - 1;
	
	
	for(int i = 0; i < lenght; i++){
		reverseString[i] = string[lenght - i - 1];
		
	}
	printf("String invertida: %s\nString Original: %s", reverseString, string);
}