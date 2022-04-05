#include <stdio.h>

int main()
{
	float initial_velocity;
	float acceleration;
	float time;
	float final_velocity;

	printf("Provide acceleartion[a] value here > ");
	scanf("%f",&acceleration);

	printf("Provide time[t] value here > ");
	scanf("%f",&time);

	printf("Provide initial_velocity[u] value here > ");
	scanf("%f",&initial_velocity);

	final_velocity = initial_velocity + (acceleration*time);
	printf("final_velocity[v] = %0.2fm/s\n",final_velocity);

	return 0;
}
