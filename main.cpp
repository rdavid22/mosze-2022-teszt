#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];

    std::cout << "1-100 ertekek duplazasa\n";
    
    // Fill dynamic array with elements
    for (int i = 1; i < N_ELEMENTS+1; i++)
    {                                                             
        *(b+i-1) = i * 2;
    }
    
    // Iterating through dynamic array and printing it's items
    for (int i = 1; i < N_ELEMENTS+1; i++)                     
    {                                                   
        std::cout << "Ertek: " << *(b+i-1) << '\n';
    }

    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0;

    // Calculating average
    for (int i = 1; i < N_ELEMENTS+1; i++)
    {
        atlag += *(b+i-1);
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
