#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

int main(void)

{

   FILE *pFile;

   int c51;         

   int sum=0;

   char poem[50];


	printf("�ΰ�Ū�Ҧ�Ū��data.txt\n");

	printf("Ū�����e���G\n"); 

   pFile=fopen("data.txt", "r");

   if (pFile==NULL)

   {  

      exit(1); 

   }

    rewind(pFile);

    while ((fgets(poem, 50, pFile)) != NULL)

       printf("%s", poem);

       printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}
