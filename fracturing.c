// Ivan Harrison 
// 5619059

#include <stdio.h>
#include <math.h>

int findx1(){ // Function to ask user for x1
    int first_x; 
    printf("Enter x1: \n");
    scanf("%d", &first_x); 

    return first_x; 
}

int findy1(){ // Function to ask user for y1
    int first_y; 
    printf("Enter y1: \n");
    scanf("%d", &first_y); 

    return first_y; 
}

int findx2(){ // Function to ask user for x2
    int second_x; 
    printf("Enter x2: \n");
    scanf("%d", &second_x); 

    return second_x; 
}

int findy2(){ // Function to ask user for y2
    int second_y; 
    printf("Enter y2: \n");
    scanf("%d", &second_y); 

    return second_y; 
}

double findDistance(double x1,double y1,double x2,double y2){ // Math function to find the distance of the points provided

    double distance1, distance2, distance3, d_total; 
    distance1 = (x2-x1)*(x2-x1); // Subtract then multiply together
    
    distance2 = (y2-y1)*(y2-y1); // Subtract then multiply together

    distance3 = distance1 + distance2; // Combining the two outcomes

    d_total = sqrt(distance3); // Squaring the total from the previous equations

    return d_total; 

}

double calculateDistance(){ // Function to state distance between points
    double x1 = findx1(); // Calling on functions to ask for user input
    double y1 = findy1(); 
    double x2 = findx2(); 
    double y2 = findy2();

    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); 
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); 

    double distance= findDistance(x1, y1, x2, y2); // Calling function to return the distance

    printf("The distance between the two points is %lf\n", distance);

    return distance; 
}

double calculatePerimeter(){ // Function to fine perimeter of the circle
    double x1 = findx1(); // Calling function to ask for user input
    double y1 = findy1(); 
    double x2 = findx2(); 
    double y2 = findy2();
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); 
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); 

    #define PI 3.14159  // Defining pi as 3.14159

    double distance = findDistance(x1, y1, x2, y2); // Calling function to return the distance
     
    double perimeter = PI * distance; // Calculating the perimeter of the circle
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter); 

    return 2;
}

double calculateArea(){ // Function to find area of the circle 
    double x1 = findx1(); // Calling function to ask for user input
    double y1 = findy1(); 
    double x2 = findx2(); 
    double y2 = findy2();
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); 
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); 

    double distance = findDistance(x1, y1, x2, y2); // Calling function to return distance
    double area = (0.25 * PI) * distance; // Calculating the area of the circle
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 2;
}

double calculateWidth(){ // Function to find the width of the circle
    double x1 = findx1(); // Calling functions to ask for user input
    double y1 = findy1(); 
    double x2 = findx2(); 
    double y2 = findy2();
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); 
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); 

    double distance = findDistance(x1, y1, x2, y2); // Calling function to return distance
    printf("The width of the city ecompassed by your request is %lf\n", distance); 

    return 2;
}

double calculateHeight(){ // Function to find height of the circle
    double x1 = findx1(); // Calling function to ask for user input
    double y1 = findy1(); 
    double x2 = findx2(); 
    double y2 = findy2();
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1); 
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2); 

    double distance = findDistance(x1, y1, x2, y2); // Calling function to return distance
    printf("The height of the city ecompassed by your request is %lf\n", distance);

    return 2;
}

int main(int argc, char **argv){ // Main function to call other functions 
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0; 
}


