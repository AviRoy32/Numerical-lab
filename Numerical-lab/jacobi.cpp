#include<bits/stdc++.h>
using namespace std;
float val[3][4];
int find_big(int a)
{
    if(fabs(val[a][0])>=fabs(val[a][2])+fabs(val[a][1]))
    {
        return 0;
    }
    if(fabs(val[a][1])>=fabs(val[a][0])+fabs(val[a][2]))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
void change(int a,int b)
{
    float temp;
    for(int i=0;i<4;i++)
    {
        temp=val[a][i];
        val[a][i]=val[b][i];
        val[b][i]=temp;
    }
}
void rearrange()
{
    for(int i=0; i<3; i++)
    {
        if(find_big(i)!=i)
        {
            change(find_big(i),i);
        }
    }
}
int main()
{
    float e,x,y,z,x1,y1,z1,e1,e2,e3;
    int c=1;
    cout<<"Enter the value(Coefficient) of every equation:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>val[i][j];
        }
    }
    rearrange();
    cout<<"The rearranges equations:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<val[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter Tolarable error: ";
    cin>>e;
    x1=y1=z1=0;
    cout<<"c"<<"\t"<<"x"<<"\t"<<"y"<<"\t"<<"z"<<"\t"<<endl;
    do
    {
        x=(val[0][3]-(val[0][1]*y1)-(val[0][2]*z1))/val[0][0];
        y=(val[1][3]-(val[1][0]*x1)-(val[1][2]*z1))/val[1][1];
        z=(val[2][3]-(val[2][0]*x1)-(val[2][1]*y1))/val[2][2];
        cout<<c<<"\t"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<endl;
        e1=fabs(x1-x);
        e2=fabs(y1-y);
        e3=fabs(z1-z);
        c++;
        x1=x;
        y1=y;
        z1=z;
    }while(e1>e && e2>e && e3>e);
    cout<<endl;
    cout<<"Solutions: "<<endl;
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    cout<<"Z = "<<z<<endl;
    return 0;
}
