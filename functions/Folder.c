#include <stdio.h>
#include <stdlib.h>

void createFolder(){
	#ifdef _WIN32
		system("md exerc; md avaliacoes; md notas");
	#else
		system("mkdir exerc; mkdir avaliacoes; mkdir notas");
	#endif
}

int main(){
	createFolder();
	return 0;
}