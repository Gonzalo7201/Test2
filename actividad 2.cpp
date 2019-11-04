#include <stdio.h>
#include <conio.h>
main()
{
	int e_num=0, e_num2=0, e_num3=0;
	printf ("Este programa lee 3 numeros diferentes.");
	printf ("Dame el primer valor.");
	scanf ("%d",e_num);
	printf ("Dame el segundo valor.");
	scanf ("%d",e_num2);
	printf ("Dame el tercer valor");
	scanf ("%d",e_num3);
	printf ("\n\n el %d primer valor es", e_num);
	printf ("\n\n el %d segundo valor es", e_num2);
	printf ("\n\n el %d tercer valor es", e_num3);
	printf ("Enter para terminar.");
	getch ();
}
