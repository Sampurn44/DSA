#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    while (w--)
    {
        int size;
        cin >> size;
        int dev[size];
        vector<int> sampurn;
        for (int z=0;z<size;z++)
        {cin >> dev[z];}
        int z=0,x=size-1,k=sampurn[0];
        while (z<size/2||x>=size/2)
        {
            sampurn.push_back(dev[x] - dev[z]);
            z++;
            x--;
        }
        for (int z=0;z<sampurn.size()-1;z++)
        {
             if (sampurn[z]<sampurn[z+1])
            {   k=-1;
                break;
            }
            if (sampurn[z]<0)
            { k=-1;
                break;
            }}
        if (sampurn[sampurn.size() - 1]<0)
        {cout<<-1<<endl;}
        else
        { cout<<k<<endl;}
    }
    return 0;
}