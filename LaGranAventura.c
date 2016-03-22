#include <stdio.h>

int main (void) {

	int linuxop;
	printf ("¿Te gusta linux?\n[1, positivo; 0, negativo]\n");
	scanf ("%i",&linuxop);
	if (linuxop  == 1) {
		printf ("Usted debe de tener un CI de almenos 130.\n");	
	} else {
		printf ("Usted sufre de autismo.\n");
	}

	//HABILIDADES
	int autoestima;

	//DECISIONES
	int firstop,realfirstop,secondop,thirdop;

	printf ("Cómo sea, ¿estás preparado para vivir la mayor aventura del terminal de linux?\n");
	scanf ("%i",&firstop);
	if (firstop == 1) {
		printf ("Felicidades\n");
	} else {
		printf ("Pues me da igual, lo vamos a hacer, sino, cierra el terminal\n");
	}

	//Primera decisión (ARBOL o MUERTE):
	printf ("Estas en un bosque:\n-Morirse [0].\n-Subirse a un árbol[1].\n");
	scanf ("%i",&realfirstop);
	if (realfirstop == 1) {
		autoestima = 0;
		autoestima = autoestima + 1;
		printf ("Te subes al árbol, te sientes bien y subes tu autoestima.\n\nY tu dirás mi querido amigo aburrido, ¿que es la autoestima?, tranquilo, no sufres de autismo (creo), esto es una habilidad en el juego que espero que te sirva para conseguir atajos dentro de la ramificación del juego, aunque probablemente se quede en una simple puntuación. Tu autoestima actual es de [%i]\n",autoestima);
		//Segunda decisión (RÍO o ÁRBOL):
		printf ("Ahora que tienes autoestima decides empezar a caminar, caminas unos tres metros y te empiezas a marear...\n\n...¡MUERES!...\nde cansancio porque no tienes alimento:\n-Ir a buscar alimentos a un río cercano[0]\n-Subirse de nuevo a un árbol.[1]\n");
		scanf ("%i",&secondop);
		if  (secondop == 1) {
			printf ("Es un árbol de unos 10 metros, no es frutal, ¿que esperabas?, debería revertir tu cagada como Operador que soy pero lo reservaré para otra cagada...supongo.\nCómo sea, bajas del árbol y decides ir al río desesperado y te encuentras... sabes, ya no parece que esté narrando sino que te estoy hablando a tí no haces más que cagarla -_-. Por dónde iba: Estas en el bosque y te encuentras (faltas de ortografía) un oso, pero cómo siempre la cagas lo mato yo por tí, consigues un pez que recién había pescado el oso por tí patán inútil y ahora debes utilizar la piel del oso para calentarte cómo en esa saga sobrevalorada que no voy a nombrar. Muy bien ahora sí, haz lo que tienes que hacer, pedazo de subnormal:\n-Abrirle la piel al oso sin ningún tipo de desquicia a tu persona[1]\n-No hacer nada, y dejar que la noche pasé, sentir escalofríos en tu nariz y acabar sin orejas, ¡NO!, sin nariz[0].");
			if (thirdop == 1) {

		//>Meterse dentro de la asquerosa piel de un animal.
		//>Un oso, ahí te lo digo todo y no te digo nada.
		//Fin de la segunda decisión (RÍO o ÁRBOL):
		} else {
			printf ("Yo no comprendo a las razas inferiores cómo tu.\n");
			scanf ();
			printf ("Te deseo lo peor, tu muerte no es más que un segundo para este universo, no, de hecho ya eres un segundo para el planeta, no serás recordado ni por tu prima, ¿me oyes?, ni por tu jodida prima. Eres un inútil pero aquí tienes tu autoestima: 1, sin embargo te lo escribo en forma de variable para que lo puedas verificar:[%i]",autoestima);
			
	//Fin de la primera decisión:
	} else {
	printf ("Pues te moriste :)\n");
	}
}

