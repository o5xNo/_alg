#include<iostream>
#include<map>
#include <vector>
#include <algorithm>
#include<queue>
#include<math.h>
using namespace std;

#define endl '\n'
#define all(x) x.begin(),x.end()



int main(){

    int n;
    cin>>n;
    unsigned long long dp[n]={0};

    for(int i=0;i<=n;i++){
        if(n==0)dp[n]=1;
        else dp[n]=2*dp[n-1];
    }
    cout<<dp[n];
}