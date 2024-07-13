#include<stdio.h>
int main()
{
FILE *fp;
	char ch;
	fp = fopen("source.txt", "a+");
	if(fp== NULL)
        	printf("can't open the file");
	while (1)             {
		ch = fgetc(fp); 
		if (ch == EOF)
			break;
		printf("%c", ch);        	}
   printf("\nAFTER WRITTING TO THE FILE CONTENTS IS\n ");
	fputs("\n OK BYE !!",fp);
	fclose(fp); 
}

