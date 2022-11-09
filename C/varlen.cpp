#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[])
{
    cout << argc << endl;
    cout << argv << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(void*) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    return 0;
}
