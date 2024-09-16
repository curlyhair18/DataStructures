#include<iostream>
#include<vector>
using namespace std;

int sumofele(vector<vector<int> >v1){
        int sum=0;
        for(int i =0; i<v1.size(); i++ ){
            for(int j=0; j<v1[i].size(); j++){
                sum= sum+v1[i][j];
            }
        }
        return sum;
}
int main(){
    vector<vector<int> > v3;
    
    vector<int>v1;
    vector<int>v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    v2.push_back(23);
    v2.push_back(22);
    v2.push_back(33);
    v2.push_back(44);

    v3.emplace_back(v1);
    v3.emplace_back(v2);

    cout<<sumofele(v3);

    return 0;
}