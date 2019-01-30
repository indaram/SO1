/*
Mathematical polygon represented as linked list of points.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Structured types */
typedef struct polygonNode {
	double x;
	double y;
	struct polygonNode *next;
} polygonNode;

/* Function prototypes */
void printPolygon(const polygonNode *);
void addPolygonPoint(polygonNode **, double, double);
double polygonPerimeter(const polygonNode *);
polygonNode *freePolygon(polygonNode *);

/* Main function */
int main(void)
{
	polygonNode *polygon = NULL;

	/* Empty polygon */
	printf("Empty:\n- Points: ");
	printPolygon(polygon);
	printf("\n- Perimeter: %.1f\n\n", polygonPerimeter(polygon));
	polygon = freePolygon(polygon);

	/* Rectangle */
	addPolygonPoint(&polygon, 0.0, 0.0);
	addPolygonPoint(&polygon, 2.5, 0.0);
	addPolygonPoint(&polygon, 2.5, 2.0);
	addPolygonPoint(&polygon, 0.0, 2.0);
	printf("Rectangle:\n- Points: ");
	printPolygon(polygon);
	printf("\n- Perimeter: %.1f\n\n", polygonPerimeter(polygon));
	polygon = freePolygon(polygon);

	/* Triangle */
	addPolygonPoint(&polygon, -1.0, 0.0);
	addPolygonPoint(&polygon, 1.0, 0.0);
	addPolygonPoint(&polygon, 0.0, 1.0);
	printf("Triangle:\n- Points: ");
	printPolygon(polygon);
	printf("\n- Perimeter: %.1f\n\n", polygonPerimeter(polygon));
	polygon = freePolygon(polygon);

	getchar();
	return 0;
}

/* Print polygon to the console */
void printPolygon(const polygonNode *polygon)
{
	const polygonNode *node = polygon;

	if (node)
	{
		printf("(%.1f, %.1f)", node->x, node->y);
		while ((node = node->next) != NULL)
			printf(" - (%.1f, %.1f)", node->x, node->y);
	}
}

/* Append point to polygon */
void addPolygonPoint(polygonNode **polygonPtr, double x, double y)
{
	polygonNode *newNode;

	/* Allocate new node */
	if ((newNode = (polygonNode *)malloc(sizeof(polygonNode))) == NULL)
		return;
	newNode->x = x;
	newNode->y = y;
	newNode->next = NULL;

	/* Append node to polygon */
	if (*polygonPtr)				// List not empty
	{
		polygonNode *node = *polygonPtr;
		while (node->next != NULL)
			node = node->next;
		node->next = newNode;
	}
	else							// Not empty
		*polygonPtr = newNode;
}

/* Determine polygon's perimeter */
double polygonPerimeter(const polygonNode *polygon)
{
	double perimeter = 0.0;

	// At least two points in polygon
	if (polygon && polygon->next)
	{
		const polygonNode *node = polygon;
		double dx;
		double dy;

		// Sum up distances between neighboring points
		while (node->next)
		{
			dx = node->x - node->next->x;
			dy = node->y - node->next->y;
			perimeter += sqrt(dx * dx + dy * dy);
			node = node->next;
		}

		// Add distance from last to first point (close polygon)
		dx = node->x - polygon->x;
		dy = node->y - polygon->y;
		perimeter += sqrt(dx * dx + dy * dy);
	}
	return perimeter;
}

/* Free memory of polygon list */
polygonNode *freePolygon(polygonNode *polygon)
{
	polygonNode *node = polygon;

	while (node)
	{
		polygonNode *freeNode = node;
		node = node->next;
		free(freeNode);
	}
	return NULL;
}
