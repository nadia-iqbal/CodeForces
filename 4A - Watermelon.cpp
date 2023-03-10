// 196751941	Mar/10/2023 13:16UTC+6	Nadia-Iqbal	4A - Watermelon	GNU C++14	Accepted	30 ms	0 KB


#include <iostream>

using namespace std;

int main()

{
    int w;
    cin >> w;
    if (w % 2 == 0 && w>2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
    
}
