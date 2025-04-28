#include <stdio.h>
#include <math.h>

struct Coordinates {
    float xCoord;
    float yCoord;
};

float computeDistance(struct Coordinates pointA, struct Coordinates pointB) {
    return sqrt((pointB.xCoord - pointA.xCoord) * (pointB.xCoord - pointA.xCoord) +
                (pointB.yCoord - pointA.yCoord) * (pointB.yCoord - pointA.yCoord));
}

int isPointInsideRectangle(struct Coordinates test, struct Coordinates bottomLeft, struct Coordinates topRight) {
    return (test.xCoord >= bottomLeft.xCoord && test.xCoord <= topRight.xCoord &&
            test.yCoord >= bottomLeft.yCoord && test.yCoord <= topRight.yCoord);
}

int main() {
    struct Coordinates firstPoint, secondPoint, targetPoint, rectBottomLeft, rectTopRight;

    printf("Enter coordinates of the first point (x y): ");
    scanf("%f %f", &firstPoint.xCoord, &firstPoint.yCoord);

    printf("Enter coordinates of the second point (x y): ");
    scanf("%f %f", &secondPoint.xCoord, &secondPoint.yCoord);

    printf("Distance between points: %.2f\n", computeDistance(firstPoint, secondPoint));

    printf("Enter coordinates of the point to check (x y): ");
    scanf("%f %f", &targetPoint.xCoord, &targetPoint.yCoord);

    printf("Enter coordinates of bottom-left corner of the rectangle (x y): ");
    scanf("%f %f", &rectBottomLeft.xCoord, &rectBottomLeft.yCoord);

    printf("Enter coordinates of top-right corner of the rectangle (x y): ");
    scanf("%f %f", &rectTopRight.xCoord, &rectTopRight.yCoord);

    if (isPointInsideRectangle(targetPoint, rectBottomLeft, rectTopRight)) {
        printf("The point (%.2f, %.2f) lies within the rectangular boundary.\n",
               targetPoint.xCoord, targetPoint.yCoord);
    } else {
        printf("The point (%.2f, %.2f) does not lie within the rectangular boundary.\n",
               targetPoint.xCoord, targetPoint.yCoord);
    }

    return 0;
}
