#include <iostream>
using namespace std;

int main()
{
    int row, col;
    int x = 12;

    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (row = 0; row < 3; row++)
    {

        for (col = 0; col < 4; col++)
        {

            if (arr[row][col] == x)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
