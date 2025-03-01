#include <iostream>
#include<vector>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
int pairs=0;

    for(int i=0 ; i<n ; i++){
        if(ar[i]== -1)
            continue;
        for(int k=i+1 ; k<n ; k++){
        if(ar[i] == ar[k]){
            ar[k] = -1;
            pairs++;
            break;
        }
    }
    }
return pairs;
}

int main(){
int n=9;
int a;
vector<int> ar;
for(int i=0 ; i<n ; i++){
    cout<<"saisir: "<<i<<endl;
    cin>>a;
    ar.push_back(a);
}

int r = sockMerchant(n,ar);
cout<<"result: "<<r<<endl;
return 0;
}
