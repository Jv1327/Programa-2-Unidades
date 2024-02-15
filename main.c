#include<stdio.h>

int main () {
	
char op;
int n1, n2;

printf ("Digite um Número: ");
scanf ("%d", &n1);

printf ("Digite o segundo Número: ");
scanf ("%d", &n2);

printf ("Digite a Operação Desejada:");
scanf (" %c", &op);

switch (op) {
	case '+':
		printf ("Resultado:%d", n1+n2);
	break;
	
	case '-':
		printf ("Resultado:%d", n1-n2);
	break;
	
	case 'X':
		printf ("Resultado:%d", n1*n2);
	break;
	
	case '/':
		printf ("Resultado:%d", n1/n2);
	break;
	
	default:
		printf("Operador invalido");
	break;
}
}