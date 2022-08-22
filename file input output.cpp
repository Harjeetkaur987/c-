#include<stdio.h>

int main()
{
    FILE *fp;
	fp=fopen("C:/Users/HP/Documents/harjeet.txt","r");
	fprintf(fp,"This is texting for fprintf .....\n");
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
}
