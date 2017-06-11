#include <stdio.h>
#include <stdlib.h>


int main(int argc,char* argv[]){
	FILE *fp;
	int ch;
	fp = fopen(argv[1],"r");
	while((ch = fgetc(fp)) != EOF){
		switch(ch){
			case '\r':
				break;

			case '\n':
				printf("\\n");
				break;

			default:
				putchar(ch);
				break;
		}
	}
	fclose(fp);
	return EXIT_SUCCESS;
}

