#include <iostream>
#include <vector>

using namespace std;

void buble_sort(vector<int> vec, int n)
{
    for (int i = 0; i < n - 1; i++) {
        cout << vec[i] << ", " 
        /*
        for (int j = n -1; j > i; j--) {
            if( vec[j] > vec[j-1] )
                swap 
        } */
    }
    cout << endl;
}

int main()
{
    vector<int> vec {4, 2, 3, 5, 1};

    buble_sort(vec, vec.size());
}