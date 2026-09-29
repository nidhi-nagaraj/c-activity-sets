#include <stdio.h>
#include <math.h>

struct point
{
    float x, y;
};

typedef struct point Point;

Point input()
{
    Point p;

    printf("Enter coordinate x and y: ");
    scanf("%f%f", &p.x, &p.y);

    return p;
}

float find_distance(Point p1, Point p2)
{
    float distance;

    distance = sqrt((p1.x - p2.x) * (p1.x - p2.x)
                  + (p1.y - p2.y) * (p1.y - p2.y));

    return distance;
}

void output(Point p1, Point p2, float distance)
{
    printf("The distance between (%f,%f) and (%f,%f) is %f\n",
           p1.x, p1.y, p2.x, p2.y, distance);
}

int main()
{
    Point p1, p2;
    float distance;

    p1 = input();
    p2 = input();

    distance = find_distance(p1, p2);

    output(p1, p2, distance);

    return 0;
}
