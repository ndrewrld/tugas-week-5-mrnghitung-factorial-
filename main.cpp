#include <iostream>
using namespace std;


int main()
{

    cout << "program factorial" << endl;

    int a, h = 1;

    cout << "masukan angka : ";
    cin >> a;

    for (int i = 1; i <= a; ++i)
    {
        h = h * i;
    }

    cout << "hasil factorial " << a << "adalah" << h << endl;


    system("pause");
    return 0;
}