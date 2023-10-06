#include<iostream>
/*
PRN : 22070123087
Exp 4 : Different operators in C++
*/
using namespace std;
int main()
{
    int n1 , n2;
    cout<<"ENTER THE FIRST NUMBER : ";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER : ";
    cin>>n2;
    cout<<"ADDITION = "<<n1+n2<<endl;
    cout<<"SUBTRACTION = "<<n1-n2<<endl;
    bool com = n1 > n2;
    cout<<"COMPARISION = "<<com<<endl;
    int band = n1 & n2;
    cout<<"BITWISE AND = "<<band<<endl;
    int bor = n1 | n2;
    cout<<"BITWISE OR = "<<bor<<endl;
    int bxor = n1 ^ n2;
    cout<<"BITWISE XOR = "<<bxor<<endl;
    int bnot = ~n1;
    cout<<"BITWISE NOT = "<<bnot<<endl;
    int rshift = n1 >> 1;
    cout<<"RIGHT SHIFT OF n2 = "<< rshift<<endl;
    return 0;
}
/*
OUTPUT 
PS D:\C++\operators> ./operators
ENTER THE FIRST NUMBER : 35
ENTER THE SECOND NUMBER : 42
ADDITION = 77
SUBTRACTION = -7
COMPARISION = 0
BITWISE AND = 34
BITWISE OR = 43
PS D:\C++\operators>
*/
//changing the bit from 0 to 1 is called setting . Done by or.