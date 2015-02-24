//
//  main.cpp
//  BubbleSort
//
//  Created by Teddy Engel on 24/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <iostream>

void PrintVector(std::vector<int>& values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}

void BubbleSort(std::vector<int>& values)
{

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