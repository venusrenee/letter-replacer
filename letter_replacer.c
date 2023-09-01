#include <stdio.h>
#include <string.h>

int main(){

	int i;
	char input[20];
	char character;
	char replacer;
	
	printf("Please enter a string: ");
	scanf("%s", &input);
	printf("Please enter the character to be replaced: ");
	scanf(" %c", &character);
	printf("Please enter the replacing character: ");
	scanf(" %c", &replacer);
	
	for(i = 0; input[i]; i++){
		if(input[i] == character){
			input[i] = replacer;
		}
	}
	printf("%s", input);
return 0;
}