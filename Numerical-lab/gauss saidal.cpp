#include<bits/stdc++.h>
using namespace std;
void print(float *a,int n)
{
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<*(a+i)<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cout<<"How many Equation :";
    cin>>n;
    float a[n][n+1];
    int m_indx[n];
    cout<<"Fill up "<<n<<"x"<<n+1<<" Matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cin>>a[i][j];
        }
        int max=0;
        for(int k=1;k<n;k++)
        {
            if(abs(a[i][max])<=abs(a[i][k]))
                max=k;
        }
        m_indx[i]=max;
    }
    float v[n]={0};
    int k=0;
    float p;
    while(k!=1000)
    {
        for(int i=0;i<n;i++)
        {
            p=0;
            for(int j=0;j<n;j++)
            {
                if(j==m_indx[i])
                {
                    continue;
                }
                //cout<<v[m_indx[i]]<<"="<<a[i][n]<<"-"<<a[i][j]<<"x"<<v[j]<<" /"<<a[i][m_indx[i]]<<endl;
                p=(p+(a[i][j]*v[j]));
            }
            v[m_indx[i]]=(a[i][n]-p)/a[i][m_indx[i]];
            cout<<endl;
        }
        print(v,n);
        cout<<endl;
        k++;
    }
}


