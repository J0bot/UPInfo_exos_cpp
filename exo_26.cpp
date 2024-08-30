#include <iostream>

using namespace std;

int main()
{
    // replaces specified portion of a string
    string str = "Le petit Prince";
    str.replace(3, 6, "grand ");
    cout << str << endl;
}