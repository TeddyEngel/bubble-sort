//
//  main.cpp
//  BubbleSort
//
//  Created by Teddy Engel on 24/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <vector>
#include <iostream>

void PrintVector(std::vector<int>& values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}

void Swap(std::vector<int>& values, const int& n1, const int& n2)
{
    int nTmp = values[n1];
    values[n1] = values[n2];
    values[n2] = nTmp;
}

void BubbleSort(std::vector<int>& values)
{
    bool bSwapped = true;

    while (bSwapped)
    {
        bSwapped = false;
        for (int i = 0; i < values.size() - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                Swap(values, i, i + 1);
                bSwapped = true;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    std::vector<int> values = {10, 0, 2, 5, -4, 2, 4};

    std::cout << "Unsorted collection:" << std::endl;
    PrintVector(values);
    BubbleSort(values);
    std::cout << "Sorted collection:" << std::endl;
    PrintVector(values);
    return 0;
}