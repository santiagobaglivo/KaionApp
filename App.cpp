#include <stdio.h>

int main(){
	
	int cantEquipos = 0;
	int mayor = 0;
	

	printf("Indicar la cantidad de equipos: ");
	scanf("%d", &cantEquipos);	

	fflush(stdin);
	
	int puntaje[cantEquipos];
	int kills[cantEquipos];
	int top[cantEquipos];
	char teams[cantEquipos][100];
	
	fflush(stdin);
	
	for (int i = 0; i < cantEquipos; i++){
		
		printf("Nombre del equipo: ");
		scanf("%[^\n]", teams[i]);
		printf("Ingresa la cantida de kills del equipo: ");
		scanf("%d", &kills[i]);
		printf("Top de la partida: ");
		scanf("%d", &top[i]);	
		puntaje[i] = kills[i];
		fflush(stdin);

	}
	
	for(int v = 0; v < cantEquipos; v++){
		switch(top[v]){
			case 1:
				puntaje[v] = puntaje[v] + 20;
				break;
			case 2:
				puntaje[v] = puntaje[v] + 14;
				break;
			case 3:
				puntaje[v] = puntaje[v] + 10;
				break;
			case 4:
				puntaje[v] = puntaje[v] + 8;
				break;
			case 5:
				puntaje[v] = puntaje[v] + 7;
				break;
			case 6:
				puntaje[v] = puntaje[v] + 6;
				break;
			case 7:
				puntaje[v] = puntaje[v] + 5;
				break;
			case 8:
				puntaje[v] = puntaje[v] + 4;
				break;		
			case 9:
				puntaje[v] = puntaje[v] + 3;
				break;
			case 10:
				puntaje[v] = puntaje[v] + 2;
				break;
			case 11:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 12:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 13:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 14:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 15:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 16:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 17:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 18:
				puntaje[v] = puntaje[v] + 1;
				break;		
			case 19:
				puntaje[v] = puntaje[v] + 1;
				break;
			case 20:
				puntaje[v] = puntaje[v] + 1;
				break;											
			default:
				printf("bug");	
		}
	}
	
	fflush(stdin);
	
	for(int y = 1; y < cantEquipos + 1; y++){
		
		printf("%d. Equipo: ", y);
		printf("%s \n", teams[y - 1]);
		printf("%d. Kills: ", y);
		printf("%d \n", kills[y - 1]);
		printf("%d. Top: ", y);
		printf("%d \n", top[y - 1]);
		printf("%d. Puntaje: ", y);
		printf("%d \n", puntaje[y - 1]);

	}
	
	return 0;
}

