#include <stdio.h>

void mostrar_banner() {
    printf("\n");
    printf("  ╔════════════════════════════════════════════╗\n");
    printf("  ║  ██████╗██╗   ██╗ █████╗  ██████╗██╗  ██╗  ║\n");
    printf("  ║ ██╔════╝██║   ██║██╔══██╗██╔════╝██║ ██╔╝  ║\n");
    printf("  ║ ██║     ██║   ██║███████║██║     █████╔╝   ║\n");
    printf("  ║ ██║     ██║   ██║██╔══██║██║     ██╔═██╗   ║\n");
    printf("  ║ ╚██████╗╚██████╔╝██║  ██║╚██████╗██║  ██╗  ║\n");
    printf("  ║  ╚═════╝ ╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝  ║\n");
    printf("  ╚════════════════════════════════════════════╝\n");
    printf("\n");
}

void menu() {
    printf("╔═════════════════════════════╗\n");
    printf("║         OPCIONES            ║\n");
    printf("╠═════════════════════════════╣\n");
    printf("║  1. + Suma                  ║\n");
    printf("║  2. - Resta                 ║\n");
    printf("║  3. * Multiplicación        ║\n");
    printf("║  4. / División              ║\n");
    printf("║  5. CTRL + C  Salir         ║\n");
    printf("╚═════════════════════════════╝\n");
}

int main(void)
{
	mostrar_banner();
	int entrada1, entrada2, opcion;
	printf("Ingresa un numero: ");
	scanf("%d", &entrada1);
	printf("Ingresa otro numero: ");
	scanf("%d", &entrada2);
	menu();
	printf("Selecciona una opción(1, 2, 3, 4, 5): ");
	scanf("%d", &opcion);
	if (opcion == 1)
		printf("\n Resultado: %d\n", entrada1+entrada2);
	if (opcion == 2)
		printf("\n Resultado: %d\n", entrada1-entrada2);
	if (opcion == 3)
		printf("\n Resultado: %d\n", entrada1*entrada2);
	if (opcion == 4)
		printf("\n Resultado: %d\n", entrada1/entrada2);
	return 0;

}
