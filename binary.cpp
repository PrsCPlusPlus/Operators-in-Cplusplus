#include<iostream>
#include<bitset>
/*
    PRN : 22070123087
    Aim : Right Shift and left shift
*/
using namespace std;
int main()
{
    int n , rem;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    bitset<8> bitset1(n);
    cout<<bitset1<<endl;
    int n1 = n<<3;
    bitset<8> bitset2(n1);
    cout<<"LEFT SHIFT : "<<bitset2<<endl;
    int n2 = n>>4;
    bitset<8> bitset3(n2);
    cout<<"RIGHT SHIFT : "<<bitset3<<endl;
    int temp = n;
    return 0;
}
/* OUTPUT

*/
