#include <iostream>
#include <string>

using namespace std;

string reverse(const string& str)
{
    if (str.length() == 0 )  //문자여 끝에 도달하는 경우 리턴
        return "";
    else
        return reverse(str.substr(1)) + str[0];
}

int main()
{
    cout << reverse("Hello") << endl; 

}