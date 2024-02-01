
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <ctime>


int main()
{
    const int strok = 3, stolbcov = 3;
    int i, j, k, z, maxofmin, minofmax;
    int matr[strok][stolbcov]; //= { {7,-1,-4,1},{4,2,3,2},{2,2,3,2},{4,-3,7,-2} };
    int max[stolbcov], min[strok];
       srand(time(0));
     for (i = 0; i < strok; i++)
         for (j = 0; j < stolbcov; j++)
             matr[i][j]=rand()%51+1;     
    for (i = 0; i < strok; i++)
    {
        std::cout << "\n";
        for (j = 0; j < stolbcov; j++)
        {
            std::cout << std::setw(3) << matr[i][j];
        }
    }
    std::cout << std::endl;
    j = 0;
    for (i = 0; i < strok; i++)
    {
        for (j = 0; j < stolbcov; j++)
        {
            min[i] = matr[i][j];
            if (min[i] > matr[i][j])
                min[i] = matr[i][j];
        }
    }
    j = 0;
    for (j = 0; j < stolbcov; j++)
    {
        i = 0;
        max[j] = matr[i][j];
        for (i = 0; i < strok; i++)
            if (max[j] < matr[i][j])
                max[j] = matr[i][j];

    }
    maxofmin = min[0];
    for (i = 0; i < strok; i++)
        if (maxofmin < min[i])
            maxofmin = min[i];
    minofmax = max[0];
    for (i = 0; i < stolbcov; i++)
        if (minofmax > max[i])
            minofmax = max[i];
    if (minofmax > maxofmin)
        std::cout << "Sedlovix tochek net" << std::endl;
    else
        std::cout << "Sedlovie tochki = " << std::endl;
    for (i = 0; i < strok; i++)
        if (min[i] == maxofmin)
            for (j = 0; j < stolbcov; j++)
                if (max[j] == minofmax)
                    std::cout << i << " " << j << std::endl;
    system("pause");
    return 0;
}