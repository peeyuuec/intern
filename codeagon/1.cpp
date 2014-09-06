
#include <iostream>
#include <iomanip>
#include <vector>
#include <ext/hash_map>
#include <algorithm>
#include <set>

using namespace std;
using namespace __gnu_cxx;
bool comp(pair<char, int> i, pair<char, int> j)
        {return i.second < j.second;}
void ComputePartialOrder(vector<string>& dict, vector< pair<char, int> >& order)
{
    hash_map <char, int> s;
    set< pair<char, char> > orderPair;

    for(int i = 0; i < dict.size(); ++i)
    {
        for(int j = 0; j < dict[i].size(); ++j){
            s.insert(make_pair(dict[i][j], 0));
        }
    }

    for(int i = 0; i < dict.size() - 1; ++i){
        string str1 = dict[i];
        string str2 = dict[i + 1];

        int j = 0;
        while(str1[j] == str2[j]){
            j ++;
        }
        orderPair.insert(make_pair(str1[j], str2[j]));
    }

    bool changed = true;
    while(changed)
    {
        changed = false;
        for(set< pair<char, char> >::iterator it = orderPair.begin(); it != orderPair.end(); ++it){
        	
            int ord1 = s[it->first];
            int ord2 = s[it->second];

            if(ord2 != max(ord1 + 1, ord2)){
                changed = true;
                s[it->second] = ord1 + 1;
            }
        }
    }

    for(hash_map <char, int>::iterator it = s.begin(); it != s.end(); ++ it){
    	cout<<it->first<<it->second<<endl;
        order.push_back(make_pair(it->first, it->second));
    }

    sort(order.begin(), order.end(), comp);
       
    int aux = 0;
    for(vector< pair<char, int> >::iterator it = order.begin(); it != order.end(); ++it){
    	if(it->second == aux){
    		cout << it->first;
    	}
    	else
    	{
    		aux = it->second;
    		cout<<" "<<it->first;
    	}
    
    }
}

int main(int argc, char* argv[])
{
    vector<string> dict;
    vector<pair<char, int> > order;
    
    int w;
    cin >> w;
    
    for(int i =0; i < w; i++)
    {
    	string S;
    	cin >> S;
    	dict.push_back(S);
    }
   // dict.push_back("abc");
   // dict.push_back("aca");
   // dict.push_back("ca");
    
    ComputePartialOrder(dict, order);

 return 0;
}
