// PascalsTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Function to print the Pascal's Triangle

void print_pascal(int row_num)
{
    // Loop to print each row
    for (int n = 1; n <= row_num; n++)
    {
        // Loop to print spaces for triangular display
        for (int r = 1; r < row_num - n + 1; r++)
            cout << " ";
                    
            // Loop to print values using Combinations logic
            int val = 1;
            for (int r = 1; r <= n; r++)
            {
                cout << val << " ";
                val = val * (n - r) / r;
            }
            cout << endl;
        
    }
}

int main()
{
    // Number of rows for Pascal's Triangle
    int row_num = 9;

    // Function call to print Pascal's Triangle
    print_pascal(row_num);

    return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
