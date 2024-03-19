#include<bits/stdc++.h>
using namespace std;
float func(float x)
{
    return pow(x,3)-2*x-5;
}
int main()
{
    float a,b,x,x1,i=0;
    cin>>a>>b;
    while(1){
        x=(a*func(b)-b*func(a))/(func(b)-func(a));
        if(func(x)<0){
            a=x;
        }
        else if(func(x)>0){
            b=x;
        }
        x1=(a*func(b)-b*func(a))/(func(b)-func(a));
        i++;
        if(func(x)==func(x1))
            break;
    }
    cout<<"Root :"<<x1<<"   Iteration:"<<i<<endl;
}


