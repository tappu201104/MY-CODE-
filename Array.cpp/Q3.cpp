// Print Row index with max sum.
#include <iostream>
#include<climits>
using namespace std;

int main()
{
   
   int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
            int index = -1, sum = INT_MIN, row, col, i, j;
            for (i = 0; i < row; i++)

            {
                int total = 0;
                for (j = 0; j < col; j++){
                    total += arr[j][i];
                }
                if (total > sum)

                {
                    sum = total;
                    index = i;
                }    
}
cout <<"Index"<< index<<" row index with max sum";
return 0;
}