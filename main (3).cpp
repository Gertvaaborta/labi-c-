#include <bits/stdc++.h>
using namespace std;
string otvet(string a){
    string otv = "";
    string glasnie = "aeiouAEIOU";
    int i = 0;
    for (int i=0; i<a.length(); i++) {
        bool glas=false;
        for (int j=0; j<glasnie.length();j++) {
            if (a[i]==glasnie[j]) {
                glas = true;break;
            }
        }
        if (!glas) otv+=a[i];
    }
    return otv;
}
int main()
{
    string a;cin>>a;cout<<otvet(a)<<"\n";
}