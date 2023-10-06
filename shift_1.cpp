/*
    PRN : 22070123087
    Exp 4 : Setting and resetting bit using bitwise operators
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , n1 , n2;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    bitset<4> bitset1(n);
    cout<<bitset1<<endl;
    cout<<"WHICH BIT DO YOU WANT TO SET : ";
    cin>>n1;
    cout<<"WHICH BIT TO RESET : ";
    cin>>n2;
    int temp = n;
    int l_shift = 1 << n1;
    int reset = 1 << n2;
    bitset<4> l(l_shift);
    bitset<4> r(reset);
    // cout<<l<<endl;
    // cout<<r<<endl;
    int m = n | l_shift;
    int o = temp ^ reset;
    bitset<4> bitset2(m);
    bitset<4> bitset3(o);
    cout<<bitset2<<endl;
    cout<<"NEW NUMBER AFTER SET = "<<m<<endl;
    cout<<bitset3<<endl;
    cout<<"NEW NUMBER AFTER RESET = "<<o<<endl;
    return 0;
}
/*
OUTPUT
PS D:\C++\operators> ./shift_1.exe
ENTER ANY NUMBER : 5
0101
WHICH BIT DO YOU WANT TO SET : 3
WHICH BIT TO RESET : 2
1101
NEW NUMBER AFTER SET = 13
0001
NEW NUMBER AFTER RESET = 1
PS D:\C++\operators>
*/