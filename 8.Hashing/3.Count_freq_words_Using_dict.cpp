
#include <bits/stdc++.h>
using namespace std;

void CountFreq(const string &str)
{
  
    unordered_map<string, int> umap;
 
    // breaking input into word using string stream
    stringstream ss(str);  // Used for breaking words
    string word; // To store individual words
    
    /*
    operator << — add a string to the stringstream object.
operator >> — read something from the stringstream object,*/

    //transform(s.begin(),s.end(),s.begin(),::tolower); Remove comment if Case doesn't matter

    while (ss >> word)
    {
        umap[word]++;
    }
  
    unordered_map<string, int>:: iterator itr;
    for (itr = umap.begin(); itr!= umap.end();itr++)
        cout << "(" << itr->first << ", " << itr->second << ")\n";
}
 

int main()
{
    string str = "Hello my name is Smriti  Smriti Pradhan Hello is";
    CountFreq(str);
    return 0;
}
