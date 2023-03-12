// 197053254	Mar/12/2023 17:32UTC+6	Nadia-Iqbal	231A - Team	GNU C++17	Accepted	30 ms	0 KB
//https://codeforces.com/problemset/problem/231/A

#include<iostream>
using namespace std;
int main(){
    int n, p, v, t, solution = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>p>>v>>t;
        if (p+v+t >=2)
        {
            solution++;
        }
        
    }
    cout<<solution<<endl;
}
