#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <string,int> umap;
    
    umap["Smriti"] = 40;
    umap["Token"]  = 30;
    
    for(auto i:umap)
    {
        cout<<i.first<<" "<<i.second;
        cout<<"\n";
    }
    return 0;
}
