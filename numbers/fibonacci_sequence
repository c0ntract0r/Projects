#include <iostream>

int main()
{
    int num_1 = 0, num_2 = 1, Term = 0;
    int to_n = 0;

    std::cout << "How many Fibonacci numbers you want to generate? :";
    std::cin >> to_n;

    for (int i = 0; i <= to_n; ++i)
    {
        if (i == 0)
        {
            std::cout << "Term 0 = " << num_1 << std::endl;
            continue;
        }
        if (i == 1)
        {
            std::cout << "Term 1 = " << num_2 << std::endl;
            continue;
        }

        Term = num_1 + num_2;
        num_1 = num_2;
        num_2 = Term;

        std::cout << "Term " << i << " = " << Term << std::endl;
        
    }

    return 0;
}
