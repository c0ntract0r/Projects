#include <iostream>
#include <iomanip>


int main()
{    
    int iterations = 0, precision = 0;
    double sum = 0;
    double pi;
    
    std::cout << "Leibniz formula for pi C++.\n\nEnter number of iterations: ";
    std::cin >> iterations;

    std::cout << "Enter precision for pi: ";
    std::cin >> precision;
    
	
    double var = -1;
    for (double i = 1; i < iterations; i= i+2) {
    var = -var;
	sum = sum + var*(1/i);
	}
	
	pi = sum*4;
	
	std::cout << "Pi: ";
	std::cout << std::fixed<< std::setprecision(precision) << pi;
	std::cout << " with " << iterations << " iterations.\n";
	
    return 0;
}

