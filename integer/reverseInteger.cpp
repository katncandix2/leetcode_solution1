//7. Reverse Integer
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int num = 0;
    cin>>num;

    if(num<0){bool flag= true;}
    vector <int> vec;

    while(num!=0)
    {
        int current = num % 10;
        vec.push_back(current);
        num /=10;
    }

    int res = 0;
    for(int i = 0;i<vec.size();++i)
    {
        res += vec[i] * pow(10,i) ;
    }

    cout<<res;

    return 0;

}

