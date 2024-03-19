#include<bits/stdc++.h>
using namespace std;
float func(float x)
{
    return pow(x,3)-2*x-5;
}
float func2(float x)
{
    return 3*pow(x,2)-2;
}
int main()
{
    float a,b,x,x1,i=0;
    cin>>a;
    while(1){
        x=a-func(a)/func2(a);
        a=x;
        x1=a-func(a)/func2(a);
        i++;
        if(func(x)==func(x1))
            break;
    }
    cout<<"Root :"<<x1<<"   Iteration:"<<i<<endl;
}


