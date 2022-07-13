#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   fp = fopen("E:/test.txt", "a+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fprintf(fp,"ceshishuju111 \n"); 
	char buff[255];
	fscanf(fp,"%s",buff); 
   fclose(fp);
}
