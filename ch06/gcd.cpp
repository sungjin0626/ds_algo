#include <iostream>
#include <numeric>

using namespace std;

int gcd(int a, int b)
{
    if( b == 0 )
        return (a);
    else
        return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int gcd1 = gcd(10, 15);
    int lcm1 = lcm(10, 15);
    
    cout << gcd1 << endl;
    cout << lcm1 << endl;

    gcd1 = std::gcd(10, 15);
    lcm1 = std::lcm(10, 15);

    cout << gcd1 << endl;
    cout << lcm1 << endl;
}