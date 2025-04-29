#include <stdio.h>
#include <string.h>
#include <math.h>

// Structure for a point
struct Point {
    float x, y;
};

// Structure for a shape
struct Shape {
    char name[20];
    int numVertices;
    struct Point vertices[4];
};

// Function to calculate distance between two points
float distance(struct Point a, struct Point b) {
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

// Function to calculate perimeter
float calculatePerimeter(struct Shape s) {
    float perimeter = 0;
    for (int i = 0; i < s.numVertices; i++) {
        perimeter += distance(s.vertices[i], s.vertices[(i + 1) % s.numVertices]);
    }
    return perimeter;
}

// Function to calculate area
float calculateArea(struct Shape s) {
    if (s.numVertices == 3) {
        // Triangle area using Heron's formula
        float a = distance(s.vertices[0], s.vertices[1]);
        float b = distance(s.vertices[1], s.vertices[2]);
        float c = distance(s.vertices[2], s.vertices[0]);
        float s_val = (a + b + c) / 2;
        return sqrt(s_val * (s_val - a) * (s_val - b) * (s_val - c));
    } else if (s.numVertices == 4) {
        // Rectangle area: assume axis-aligned
        float length = distance(s.vertices[0], s.vertices[1]);
        float width = distance(s.vertices[1], s.vertices[2]);
        return length * width;
    }
    return 0;
}

// Function to input shape details
void inputShapes(struct Shape shapes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for shape %d:\n", i + 1);
        printf("Enter name (Triangle or Rectangle): ");
        scanf("%s", shapes[i].name);

        if (strcmp(shapes[i].name, "Triangle") == 0) {
            shapes[i].numVertices = 3;
        } else if (strcmp(shapes[i].name, "Rectangle") == 0) {
            shapes[i].numVertices = 4;
        } else {
            printf("Unsupported shape. Defaulting to Triangle.\n");
            shapes[i].numVertices = 3;
            strcpy(shapes[i].name, "Triangle");
        }

        for (int j = 0; j < shapes[i].numVertices; j++) {
            printf("Enter vertex %d (x y): ", j + 1);
            scanf("%f %f", &shapes[i].vertices[j].x, &shapes[i].vertices[j].y);
        }
    }
}

// Function to display all shape details
void displayShapes(struct Shape shapes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nShape %d: %s\n", i + 1, shapes[i].name);
        printf("Vertices:\n");
        for (int j = 0; j < shapes[i].numVertices; j++) {
            printf("(%.2f, %.2f) ", shapes[i].vertices[j].x, shapes[i].vertices[j].y);
        }
        printf("\nPerimeter: %.2f\n", calculatePerimeter(shapes[i]));
        printf("Area     : %.2f\n", calculateArea(shapes[i]));
    }
}

// Function to find and display shape with the largest area
void shapeWithLargestArea(struct Shape shapes[], int n) {
    float maxArea = 0;
    int index = 0;
    for (int i = 0; i < n; i++) {
        float area = calculateArea(shapes[i]);
        if (area > maxArea) {
            maxArea = area;
            index = i;
        }
    }

    printf("\n--- Shape with Largest Area ---\n");
    printf("Name: %s\n", shapes[index].name);
    printf("Area: %.2f\n", maxArea);
}

// Function to check if a point lies inside a rectangle (axis-aligned)
int isPointInsideRectangle(struct Shape rect, struct Point p) {
    if (rect.numVertices != 4) return 0;

    float minX = rect.vertices[0].x, maxX = rect.vertices[0].x;
    float minY = rect.vertices[0].y, maxY = rect.vertices[0].y;

    for (int i = 1; i < 4; i++) {
        if (rect.vertices[i].x < minX) minX = rect.vertices[i].x;
        if (rect.vertices[i].x > maxX) maxX = rect.vertices[i].x;
        if (rect.vertices[i].y < minY) minY = rect.vertices[i].y;
        if (rect.vertices[i].y > maxY) maxY = rect.vertices[i].y;
    }

    return (p.x >= minX && p.x <= maxX && p.y >= minY && p.y <= maxY);
}

int main() {
    int n;
    printf("Enter number of shapes: ");
    scanf("%d", &n);

    struct Shape shapes[n];
    inputShapes(shapes, n);
    displayShapes(shapes, n);
    shapeWithLargestArea(shapes, n);

    // Check if a point lies inside a rectangle
    struct Point testPoint;
    printf("\nEnter point to check (x y): ");
    scanf("%f %f", &testPoint.x, &testPoint.y);

    for (int i = 0; i < n; i++) {
        if (strcmp(shapes[i].name, "Rectangle") == 0) {
            if (isPointInsideRectangle(shapes[i], testPoint)) {
                printf("Point lies inside Rectangle %d.\n", i + 1);
            } else {
                printf("Point does NOT lie inside Rectangle %d.\n", i + 1);
            }
        }
    }

    return 0;
}
