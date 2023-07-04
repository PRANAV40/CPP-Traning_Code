#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int>markMap;     //Initilizing the map
    markMap["Sahil"] = 87;
    markMap["Ritu"] = 81;
    markMap["Shree"] = 97;

    markMap.insert({{"Akash",123},{"Anil",345}});    //Insert the new elements in the map
    map<string, int> :: iterator iter;              //Make iterator for iteration
    for(iter= markMap.begin(); iter!=markMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}