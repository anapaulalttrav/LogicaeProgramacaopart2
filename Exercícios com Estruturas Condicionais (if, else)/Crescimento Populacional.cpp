#include <stdio.h>

int main (){
	double popuA = 5000000;
	double popuB = 7000000;
	int anos = 0;
	
	while (popuA <= popuB) {
		popuA += (popuA * 0.03); // Aumento de 3%
        popuB += (popuB * 0.02); // Aumento de 2%
        anos++;
	}
	printf("Anos necessarios: %d\n", anos);
    printf("Pop A: %.0f, Pop B: %.0f\n", popuA, popuB);

    return 0;

}
