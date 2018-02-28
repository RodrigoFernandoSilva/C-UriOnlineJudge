#include <stdio.h>

int main() {
	int horas;
	int minutos;
	int segundos;

	scanf("%d", &segundos);
	
	horas = segundos % 3600;
	horas = (segundos - horas) / 3600;
	segundos -= horas * 3600;

	minutos = minutos % 60;
	minutos = (segundos - minutos) / 60;
	segundos -= minutos * 60;

	printf("%d:%d:%d\n", horas, minutos, segundos);

	return 0;
}