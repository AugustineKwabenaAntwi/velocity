#include <stdio.h>

int main()
{
	float initial_velocity;
	float acceleration;
	float time;
	float final_velocity;

	printf("This program calculates the final velocity of a moving body \n !!INSTUCTIONS FOR USE FOR ACCURACY \n 1. Provide acceleration[a] in ms^(-2) \n 2. Provide initial velocity[u] in ms^(-1)\n 3. Provide time[t] in seconds\n	");

	start: printf("Provide acceleartion[a] value here > ");
	scanf("%f",&acceleration);

	printf("Provide time[t] value here > ");
	scanf("%f",&time);

	if (time<0){
		printf("Time cannot be less than zero");
		goto start;

	};

	printf("Provide initial_velocity[u] value here > ");
	scanf("%f",&initial_velocity);


	final_velocity = initial_velocity + (acceleration*time);
	printf("final_velocity[v] = %0.2fm/s\n",final_velocity);

	return 0;
}
