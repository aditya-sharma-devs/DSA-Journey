#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int hIndex(vector<int> &citations){
     int n = citations.size();
        sort(citations.begin(), citations.end());
        for(int i = 0; i < n; i++){
            if(citations[i] >= n-i){
                return n-i;
            }
        }
        return 0;

        // This can be done in O(N) also!
}

int main(){
    vector<int> citations = {3,0,6,1,5};
    cout << "H-Index is : " << hIndex(citations);
}