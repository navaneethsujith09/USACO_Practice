#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream cin("word.in");
    ofstream cout("word.out");
    vector<string> word;
    int n, k;
    cin >> n >> k;
    int length = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        word.push_back(s);
        length += s.length();
    }  
    
}