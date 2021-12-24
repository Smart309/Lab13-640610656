#include<iostream>
using namespace std;

int gcd(int, int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x , int y)
{
    int sum ;
    if (x%y==0)
    {
        sum = y;
    }else{
        sum = gcd(y,x%y);
    }
    return sum ;
}