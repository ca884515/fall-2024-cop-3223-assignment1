# include <stdio.h>
# include <math.h>
# define PI 3.14159





double calculateDistance(){
    int x1;
    int x2;
    int y1;
    int y2;
    // Get user input for points
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    printf("Enter x2: ");
    scanf("%d", &x2);
    printf("Enter y2: ");
    scanf("%d", &y2);
    // Calculate distance using user input
    double Distance;
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    // Code equation for finding distance taken from online forum.
    Distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("The distance between the two points is %.3lf\n", sqrt(Distance));
    return sqrt(Distance);
}


double calculatePerimeter(){
    double radius = calculateDistance();

    double perimeter = 2 * PI * radius;
    printf("The perimeter of the city encompassed by your request is: %lf", perimeter);
    return 3.0;
}

double calculateWidth() {
    double width = calculateDistance() * 2;
    printf("The width of the city encompassed by your request is: %lf", width);
    return 2.0;
}

double calculateHeight() {
    calculateWidth();
    return 1.0;
}

double calculateArea() {
    double distance = calculateDistance();
    double area = PI * distance * distance;
    printf("The area of the city encompassed by your request is: %lf", area);
}


int main(int argc, char **argv){
    return 1;
}
