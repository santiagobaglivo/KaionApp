#include <stdio.h>

int main(){
	
	int cantEquipos = 0;
	int mayor = 0;
	
	int opcion;
	int second_option;
	
	int puntaje[cantEquipos];
	int kills[cantEquipos];
	int top[cantEquipos];
	
	
	char teams[cantEquipos][100];
	
	do{
		printf("\n Welcome to KaionApp v0.2");
		printf("\n \n 1. PUBG Mobile");
		printf("\n 2. CSGO");
		printf("\n 3. Exit \n");
		
		printf("\n Kaion > ");
		fflush(stdin);
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				printf("Indicar la cantidad de equipos: ");
				fflush(stdin);
				scanf("%d", &cantEquipos);
				
				for (int i = 0; i < cantEquipos; i++){
								
					printf("Nombre del equipo: ");
					fflush(stdin);
					scanf("%[^\n]", teams[i]);
					printf("Ingresa la cantida de kills del equipo: ");
					fflush(stdin);
					scanf("%d", &kills[i]);
					printf("Top de la partida: ");
					fflush(stdin);
					scanf("%d", &top[i]);	
					puntaje[i] = kills[i];
					
				}
				
/*				do{
					printf("\n Hubo otra partida? 1. Si 2. No");
					scanf("%d", &second_option);
					
					switch(second_option){
						case 1:
							printf("Indicar la cantidad de equipos: ");
							fflush(stdin);
							scanf("%d", &cantEquipos);
							
							for (int i = 0; i < cantEquipos; i++){
											
								printf("Nombre del equipo: ");
								fflush(stdin);
								scanf("%[^\n]", teams[i]);
								printf("Ingresa la cantida de kills del equipo: ");
								fflush(stdin);
								scanf("%d", &kills[i]);
								printf("Top de la partida: ");
								fflush(stdin);
								scanf("%d", &top[i]);	
								puntaje[i] = puntaje[i] + kills[i];
								
							}
							break;
					}
					
				} while(second_option != 1);	*/
				break;
			case 2:
				printf("\n ERROR: soon ;)");
				break;
			case 3:
				printf("bye");
				break;
			default:
				printf("\n ERROR: You must choose a correct option");

				break;
		}
	} while( opcion != 3);

	
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
