#include <stdio.h>

int main(int argc, char** argv){
	/*int id;
	char code[50];
		
	printf("Enter id: ");
	scanf("%d", &id);
	
	printf("Enter code: ");
	scanf("%s", code);
	
	printf("values %d %s", id, code);*/
	
	for (int i=0; i < argc; i++) {
		printf("%s ", argv[i]);
	}
	
	char input[50];
	for (int j=0; j < argc; j++) {
		scanf("%s", input);	
		printf("%s ", input);
	}
	
    return 0;
}
