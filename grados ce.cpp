#include<stdio.h>
#include<math.h>
main()
{
	float celsius, fahrenheit;
	
	printf("Ingresa los grados fahrenheit para convertir a celsius: ");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5/9;
	printf("Los grados en celsius son: %f\n" , celsius);
	
	printf("Ingresa los grados celsius para convertir a fahrenheit: ");
	scanf("%f",&celsius);
	fahrenheit=(9/5.0)*celsius+32;
	printf("Los grados en celsius son: %f" ,fahrenheit);
	
	return 0;
}
