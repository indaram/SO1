#define _CRT_SECURE_NO_DEPRECATE
#define PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


double distanceKm(double lat1, double lon1, double lat2, double lon2);
void sumDistance(double *waypointsLonLat, int nCities);
double degToRad(double);

int main(void)
{
	int waypointsNum = 1;	
	double *waypointsLonLat;
	int counter = 0;

	printf("Enter number of waypoints: ");

	while (scanf("%d", &waypointsNum) != 1 || waypointsNum < 1)
	{
		while (getchar() != '\n'); 
		{
			printf("Try again (expected number >= 0): ");
		}
	}
	while (getchar() != '\n');

	waypointsLonLat = (double *)malloc(2 * waypointsNum * sizeof(double));

	printf("Enter waypoints as '<latitude> <longitude>':\n");

	for (int i = 0; i < waypointsNum; i++)
	{

		printf("Waypoint %d:\n", i + 1);

		for (int j = 0; j < 2; j++)
		{
			while (scanf("%lf", &waypointsLonLat[counter]) != 1 )
			{
				while (getchar() != '\n');
				{
					printf("Invalid input: ");
				}
			}

			getchar();

			counter++;
		}
		
	}
	sumDistance(waypointsLonLat, counter);
	
	free(waypointsLonLat);

	getchar();
	return 0;

}


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

double degToRad(double deg)
{
	return (deg * PI / 180);
}

void sumDistance(double *waypointsLonLat, int nCities)
{
	double sumAllDistanes = 0.0;
	double lat2;
	double lon2;
	for (int i = 0; i < (nCities - 2); i += 2)
	{
			double lat1 = waypointsLonLat[i];
			double lon1 = waypointsLonLat[i+1];

			if (i + 2 >= nCities)
			{
				lat2 = waypointsLonLat[0];
				lon2 = waypointsLonLat[1];
			}
			else
			{
				lat2 = waypointsLonLat[i+2];
				lon2 = waypointsLonLat[i+3];
			}

			double currentDistance = distanceKm(lat1, lon1, lat2, lon2);
			
			sumAllDistanes = sumAllDistanes + currentDistance;
	}
	printf("By taking this route you will travel %.1lf km. = \n", sumAllDistanes);
}