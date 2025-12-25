#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream cin("teleport.in");
    ofstream cout("teleport.out");
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int direct = abs(a-b);
    int viaTeleportC = abs(a-c) + abs(b-d);
    int viaTeleportD = abs(a-d) + abs(b-c);
    int result = min(direct, min(viaTeleportC, viaTeleportD));
    cout << result;
}