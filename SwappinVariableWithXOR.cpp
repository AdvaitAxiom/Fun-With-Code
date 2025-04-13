#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;

    a = 5;
    b = 6;

    //Swapping
    a = a^b;
    b = a^b;
    a = a^b;

    cout<< a <<" "<<b<<endl;
    return 0;
}