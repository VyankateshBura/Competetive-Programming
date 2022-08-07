#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long int N,M;
        cin>>N>>M;
        vector<long long int> unhapp(N), freq(N+1,0);
        vector<pair<long long int,long long int>> relation;
        for(long long int i=0;i<N;i++){
            cin>>unhapp[i];
        }
        for(long long int i=0;i<M;i++){
            long long int x,y;
            cin>>x>>y;
            relation.push_back({x,y});
            freq[x]++;
            freq[y]++;
        }

        
        if(M&1){
            //Store the x count;
            long long int ans= INT_MAX;
            for(long long int i=1;i<N;i++){
                if(freq[i]&1){
                    ans = min(ans,unhapp[i-1]);
                }
                
            }
            for(auto x:relation){
                if(!(freq[x.first]&1)&&!(freq[x.second]&1)){
                    ans = min(ans,unhapp[x.first-1]+unhapp[x.second-1]);
                }
            }
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}