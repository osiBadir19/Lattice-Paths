#include <stdio.h>


// i choose to use a double because it can hold large numbers

double factorial(int n) {
    // Function to calculate factorial of n
    double fact = 1.0;
    int i;


    if (n <= 1)
        return 1;
    else {
        for (i = 1; i <= n; i++)
            fact *= i;
        return fact;
    }
}

int main() {
    int gridH = 20;  // Horizontal dimension
    int gridV = 20;  // Vertical dimension
    
    // Calculate total number of routes using factorial approach
    double numerator = factorial(gridH + gridV);
    double denominator = factorial(gridH) * factorial(gridV);    
    // Perform double division
    double total_routes = numerator / denominator;
    printf("Total routes in a %d x %d grid: %f\n", gridH, gridV, total_routes);

    
    return 0;
}
