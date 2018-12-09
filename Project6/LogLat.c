/*
Author: Indara Millan
Date: 14.11.2018

𝑑=6378.388∙cos−1(sin𝑙𝑎𝑡1∙sin𝑙𝑎𝑡2+cos𝑙𝑎𝑡1∙cos𝑙𝑎𝑡2∙cos(𝑙𝑜𝑛2−𝑙𝑜𝑛1))
Δ𝑦=111.3∙|𝑙𝑎𝑡1−𝑙𝑎𝑡2|
Δ𝑥=111.3∙cos(𝑙𝑎𝑡1+𝑙𝑎𝑡22)∙|𝑙𝑜𝑛1−𝑙𝑜𝑛2|
1° × π/180

*/

#define _CRT_SECURE_NO_DEPRECATE
#define PI 3.1416
#include <stdio.h>
#include <math.h>

//fUNCTIONS
int isNorthernHemisphere(double);
int isSouthernHemisphere(double);
double distanceKm(double,double,double,double);
double localDistance(double, double, double, double);
double degToRad(double);
double radToDeg(double);

//GLOBAL VARIABLES
double lat1 = 53.557078, lon1 = 10.023109, lat2= 48.858363, lon2 = 2.294481, dist;
//double lat1, lon1, lat2, lon2;


int main() {
	//getting 4 values
	/*printf("Place 1: Latitud \n");
	scanf("%lf",&lat1);
	getchar();

	printf("Place 1: Longitud \n");
	scanf("%lf", &lon1);
	getchar();

	printf("Place 2: Latitud \n");
	scanf("%lf", &lat2);
	getchar();

	printf("Place 2: Longitud \n");
	scanf("%lf", &lon2);
	getchar();*/

	//calling function to know the hemisphere, both functions are simples booleans
	if (isNorthernHemisphere(lat2) == 1){
	printf("Is it a Northern Hemisphere: True\n");
	}
	else {
		printf("Is it a Northern Hemisphere: False\n");
	}
	if (isSouthernHemisphere(lat2) == 1) {
		printf("Is it a Southern Hemisphere: True\n");
	}
	else {
		printf("Is it a Southern Hemisphere: False\n");
	}

	printf("Global Distance %.1f\n", distanceKm(lat1, lon1, lat2, lon2));
	printf("Local Distance %.1f\n", localDistance(lat1, lon1, lat2, lon2));


		getchar();
		return (0);
}

int isNorthernHemisphere(double lat2) {

	if (lat2 > 0) {
		return(1);
	}
	else {
		return(0);
	}

}
int isSouthernHemisphere(double lat2)
{

	if (lat2 < 0) {
		return(1);
	}
	else {
		return(0);
	}
}

/*calculating global distance in km
in order to start calculating we're converting 4 var from Degrees to Radians.
Then, we get Delta Longitud and Delta Latitud
using following formulas:
 d = sin²(ΔlatDifference/2) + cos(lat1).cos(lt2).sin²(ΔlonDifference/2))
 d = 2.atan2(√a, √(1−a))
 Multiply result for the Radio of Earth and we get the Kilometers
*/
double distanceKm(double lat1, double lon1, double lat2, double lon2)
{

	lat1 = degToRad(lat1);
	lon1 = degToRad(lon1);
	lat2 = degToRad(lat2);
	lon2 = degToRad(lon2);
	
	double sinTotal = sin(lat1) * sin(lat2);
	double cosTotal = cos(lat1) * cos(lat2) * cos(lon2 - lon1);

	return 6378.388 *  acos(sinTotal + cosTotal);
}

/*calculating loca distance in km
in order to start calculating we need all values in degrees.
Then, we get Delta Latitud by the following formula:
lat = (lat1 + lat2)/ 71.5
to be exact with the 71.5, we will convert 

*/
double localDistance(double lat1, double lon1, double lat2, double lon2) {

	double latRad = degToRad((lat1 + lat2) / 2.0);
	double dx = 111.3 * cos(latRad) * (lon1 - lon2);
	double dy = 111.3 * (lat1 - lat2);

	return sqrt(dx * dx + dy * dy);
}

double degToRad(double deg) {
	return (deg * PI / 180);
}

double radToDeg(double rad) {
	return (rad * 180 / PI);
}