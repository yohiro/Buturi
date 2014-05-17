#include<stdio.h>

int i,j;

int main()
{
	printf("<!DOCTYPE html>\n");
	printf("<meta charaset=\"UTF-8\">\n");
	printf("<title>99</title>\n");
	printf("<hl>99</hl>\n");
	printf("<table>\n");
	printf("<tr>\n");
	printf("<th>\n");
	printf("<tr>");

	for (; j<10; j++){
		for (; i<10; i++){
			if (i == 0 && j == 0){
				printf("<th>");
			}
			else if (i == 0 || j == 0){
				printf("<th>%d",i+j);
			}
			else{
				printf("<th>%d", i*j);
			}
		}
		printf("\n");
	}
	return 0;
}