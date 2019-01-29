#define _CRT_SECURE_NO_DEPRECATE
#define PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
	double latitude;
	double longitude;
} geoCoords;

geoCoords *coordinates;

double distanceKm(double lat1, double lon1, double lat2, double lon2);
void sumDistance(int waypointsNum);
double degToRad(double);

int main(void)
{
	int waypointsNum;
	

	printf("Enter number of waypoints: ");

	while (scanf("%d", &waypointsNum) != 1 || waypointsNum < 1)
	{
		while (getchar() != '\n');
		{
			printf("Try again (expected number >= 0): ");
		}
	}
	while (getchar() != '\n');

	coordinates = (geoCoords *)malloc(waypointsNum * sizeof(geoCoords));

	if (coordinates == NULL)
	{
		exit(EXIT_FAILURE);
	}

	printf("Enter waypoints as '<latitude> <longitude>':\n");

	for (int i = 0; i < waypointsNum; i++)
	{

		printf("Waypoint %d:\n", i + 1);

		
			while (scanf("%lf %lf", &coordinates[i].latitude, &coordinates[i].longitude) != 2)
			{
				while (getchar() != '\n');
				{
					printf("Invalid input: ");
				}
			}

			while (getchar() != '\n');

		
	}
	sumDistance(waypointsNum);

	free(coordinates);

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

void sumDistance(int waypointsNum)
{
	double sumAllDistanes = 0.0;

	for (int i = 0; i < (waypointsNum - 1); i++)
	{
		double lat1 = coordinates[i].latitude;
		double lon1 = coordinates[i].longitude;
		double lat2 = coordinates[i+1].latitude;
		double lon2 = coordinates[i+1].longitude;
	

		double currentDistance = distanceKm(lat1, lon1, lat2, lon2);

		sumAllDistanes = sumAllDistanes + currentDistance;
	}
	printf("By taking this route you will travel %.1lf km. = \n", sumAllDistanes);
}