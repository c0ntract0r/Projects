#include <iostream>
#include <iomanip>

int main()
{   
    int i = 0, iteration = 0, precision = 0;
    double factorial = 1, euler_num = 1.0;

    std::cout << "Enter a non-negative number: ";
    std::cin >> iteration;

    std::cout << "Enter precision for Euler's number:";
    std::cin >> precision;

    while (iteration > 0 && i <= iteration)
    {
        ++i;
        factorial = factorial * i;
        euler_num += 1/(factorial);
    }

    std::cout << "Pi: ";
	std::cout << std::fixed<< std::setprecision(precision) << euler_num;
	std::cout << " with " << iteration << " iterations.\n";

    return 0;
}
