#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
int principal_amount,s;          
    float rate;
    int time_period;
    cin>>principal_amount>>rate>>time_period;
    
    s=(principal_amount*rate*time_period)/100;
    cout<<s;
    return 0;
}
