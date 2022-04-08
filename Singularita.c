#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	
	SetConsoleTitle("Singularita");
	int vaha, hustotatela;
	hustotatela = 985; 
	
	float pi, objem; //hustota tela s odkazem na wikipedii lol
	pi = 3.14;
	
	double konst, polomerPrvni, polomerDruhy, polomerFinal, potrebnahmotnost; //fakt chabrovsky velky cislo
	konst = 0.00000000000000000000000000148; //todle je gravitacni konstantus spolecne s rychlosti svetla na druhou
	
	printf("Zadej svou vahu v kg: ", vaha);
	scanf("%d", &vaha);
	
	printf("-------------------------------- \n \n \n");
	
	objem = (float) vaha / hustotatela; //vypocita objem koule z tveho tela (fakt picovina)
	
	printf("Objem kule z tvyho tela by byl %0.15f metru ctverecnich LOL ted vypocitame polomer", objem);
	
	printf("\n-------------------------------- \n \n \n");
	
	polomerPrvni = (double) 6 * objem / pi; //prvni cast vypoctu nevim ssakujes
	
	polomerDruhy = (double) pow(polomerPrvni, (1.0/3.0)); //druha cast KAMO JA VUBEC NEVIM JESTLI TO POCITA TO CO MA XDDDDDDDDDDD
	
	polomerFinal = polomerDruhy / 2; //no debil su, ale vyresil jsem to
	
	printf("Kamo kula z tvyho tela ma polomer krasnych %0.15lf metru HIHIHIHA jdem to dopocitat", polomerFinal);
	
	printf("\n-------------------------------- \n \n \n");
	
	potrebnahmotnost = (double) polomerFinal / konst; //kamo coze ?
	
	printf("Takze jo, potrebujes vazit jeste %0.0lf kilogramu, aby se z tebe stala gravitacni singularita <3", potrebnahmotnost); //melo by to vyjit kladne takze ez - realne se z nej singularita stane pri jeho aktualni hmotnosto plus to cislo bez jeho hmotnosti ale koho to sere visco
}
