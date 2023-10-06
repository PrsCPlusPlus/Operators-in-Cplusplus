/*
    PRN : 22070123087
    Exp 4 : To set and shift bits of a number 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>m;
    bitset<16> bitset1(n);
    bitset<16> bitset2(m);
    int n1;
    cout<<"BINARY OF "<<n<<" IS : "<<bitset1<<endl;
    cout<<"WHICH BIT DO YOU WANT TO SET IN "<<n<<" : ";
    cin>>n1;
    bitset1[n1] = 1;
    int np = (int)(bitset1.to_ullong());
    cout<<"BITSET AFTER SET IS : "<<bitset1<<endl;
    int n2;
    cout<<"HOW MANY BITS DO YOU WANT TO SHIFT LEFT : ";
    cin>>n2;
    int p = np<<n2;
    bitset<16> bitset3(p);
    cout<<"THE NUMBER IS : "<<bitset3<<endl;
    cout<<"DECIMAL IS : "<<p<<endl;
    return 0;
}
/*
OUTPUT
ENTER ANY NUMBER : 5
ENTER THE SECOND NUMBER : 23
BINARY OF 5 IS : 0000000000000101
WHICH BIT DO YOU WANT TO SET IN 5 : 1
BITSET AFTER SET IS : 0000000000000111
HOW MANY BITS DO YOU WANT TO SHIFT LEFT : 2
THE NUMBER IS : 0000000000011100
DECIMAL IS : 28
PS D:\C++\operators>
*/