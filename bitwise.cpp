#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n , m , rem;
    cout<<"ENTER ANY NUMBER : ";
    cin>>n;
    vector <int> v;
    int temp = n;
    while(temp > 0)
    {
        rem = temp % 2;
        v.push_back(rem);
        temp /= 2;
    }
    vector<int> ::iterator it;
    for(it = v.begin() ; it != v.end() ; ++it)
    {
        cout<<*it<<"  ";
    }
    int o;
    reverse(v.begin(),v.end());
    cout<<endl<<"ENTER THE BIT YOU WANT TO SET : ";
    cin>>m;
    cout<<endl<<"ENTER THE BIT YOU WANT TO RESET : ";
    cin>>o;
    v.at(o) = 0;
    v.at(m) = 1;
    reverse(v.begin(),v.end());
    for(it = v.begin() ; it != v.end() ; ++it)
    {
        cout<<*it<<"  ";
    }
    int sum = 0;
    int j = 0;
    for(it = v.begin() ; it != v.end() ; ++it)
    {
        sum = sum + (*it * pow(2,j));
        cout<<sum<<endl;
        j++;
    }
    cout<<endl<<"DECIMAL NUMBER IS : "<<sum<<endl;
    return 0;
}
//setting a 1 bit to 0 is called reset. done by and
//changing the bit from 0 to 1 is called setting. done by or