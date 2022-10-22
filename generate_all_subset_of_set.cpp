#include<iostream>
using namespace std;
//Write programme to generate all possible subsets of set

void subsets(int arr[] , int n)
{
    for (int i = 0; i < (1<<n); i++)                      // (1<<n) is (2^n)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1<<j))                              
            {
                cout<<arr[j];
            }
            
        }
        cout<<endl;
    }
    
}
int main()
{
    int arr[4] = {1 , 2 , 3 , 4};
    subsets(arr , 4);
    return 0;
}