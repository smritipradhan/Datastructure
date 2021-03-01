#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map <string,double> umap;
    
    umap["PI"] = 3.14;
    umap["root2"] = 1.414;
    umap["root3"] = 1.732;
    umap["log10"] = 2.302;
    umap["loge"] = 1.0;
    
    string key = "PI";
    
    if(umap.find(key) == umap.end())
    {
        cout<<"Not found \n";
    }
    else
    {
        cout<<"Found\n";
        cout<<key<<" "<<umap[key]<<"\n";
    }
    
    
    key = "Lambda";
    if(umap.find(key) == umap.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
    
    
    
    
    
    //Displaying all the keys
    unordered_map<string,double> ::iterator itr;
    
    for(itr = umap.begin();itr!=umap.end();itr++)
    {
    cout<<"\n";    
     cout<<itr->first<<"   "<<itr->second;   
    }
    
    return 0;
}
