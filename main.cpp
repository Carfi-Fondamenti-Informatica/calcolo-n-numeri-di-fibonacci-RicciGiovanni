#include <iostream>

using namespace std;

int main()
{
    int n,i=1,b=1,a=0,c;
    cin>>n;
    if(n>=2)
    {
        for(i=1;i<=n;i++)
        {
         
         c=a+b;
         a=b;
         b=c;
         cout<<c<<endl;
        
        }
        
    }
    else
    {
        cout<<"errore"<<endl;
    }

    return 0;
}
