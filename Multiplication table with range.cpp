#include<iostream>
using namespace std;
int main()
{
    int n;
    int range;
    cout << "Enter an integer : " << endl;
    cin >> n;
    cout << "Enter range : ";
    cin >> range;
    for (int i = 1;i<=range;++i){
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}