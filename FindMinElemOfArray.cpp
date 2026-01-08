#include <iostream>
#include <valarray>
#include <stdlib.h>
#include <math.h>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    int nElems;
    std::cout << "Input a count of elements in array\r\n";
    std::cin >> nElems;
    if (nElems == 0)
    {
        std::cout << "Empty arrays not allowed\r\n";
        std::cin.ignore();
        std::cin.get();
        return 1;
    }
    std::valarray<int> iNumbers(nElems);
    srand(time(nullptr));
    std::cout << "Generating array by filling " << nElems << " elements\r\n";
    for (int i = 0; i < nElems; i++)
    {
        iNumbers[i] = 1 + rand() % 100;
        std::cout << iNumbers[i] << " ";
    }
    int iMin = iNumbers[0];
    int nIndex = 0;
    for (int i = 1; i < nElems; i++)
    {
        if (iNumbers[i] < iMin)
        {
            iMin = iNumbers[i];
            nIndex = i;
        }
    }
    std::cout << "\r\nFound minimum element: " << iMin
    		  << " with index " << nIndex << "\r\n";
    std::cin.ignore();
    std::cin.get();
}
