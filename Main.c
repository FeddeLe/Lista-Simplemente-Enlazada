#include "header.h"

int main (void)
{
	_pNodo Lista_inicial;

	Lista_inicial = (_pNodo) malloc (sizeof(Node));

	Lista_inicial -> next = NULL;

	int input = 1;

	char apellido [30];

	char *auxiliar;


	while (input != 0)
	{
        printf("--Menu Selection--\n");
        printf("0.Close\n");
        printf("1.Show List\n");
        printf("2.Enter Person\n");
        printf("3.Surname Search\n");
        printf("4.Delete Person\n");
        scanf("%d",&input);

		switch (input)
		{
			case 0:
			printf("Goodbye!\n");
			input = 0;
			break;

			case 1:
			Display_List(Lista_inicial);
			break;

			case 2:
			Add_Person(Lista_inicial);
			break;

			case 3:
			auxiliar = apellido;
			printf("Enter Surname\n");
			scanf("%s",apellido);
			Surname_Search(Lista_inicial,auxiliar);
			break;

			case 4:
			auxiliar = apellido;
			printf("Enter Surname\n");
			scanf("%s",apellido);
			Delete_Person(Lista_inicial,auxiliar);
			break;
		}
	}
	free(Lista_inicial);
	return 0;
}
