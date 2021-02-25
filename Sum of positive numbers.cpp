#include<iostream>
using namespace std;
int main()
{
    int i;
    int sum = 0;
    cout << "Enter an integer : ";
    cin >> i;
    while( i>=0 ){
        sum += i;
        cout << "Enter an integer : ";
        cin >> i;
    }
    cout << "SUM = " << sum << endl;
    return 0;
}