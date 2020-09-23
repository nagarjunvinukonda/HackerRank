
//######### Hour Glass---2D_Array DS-----My Own Solution  ###############  Easy- 30 min

#include <bits/stdc++.h>

using namespace std;

int hourglassSum(vector<vector<int>> arr) {

    vector<int> a{};
    int sum;

    for(int i=0; i<6;i++){
        for(int j=0; j<6;j++){

            if(i>0 && j>0 && i<5 && j<5){

                sum = arr.at(i).at(j) + arr.at(i-1).at(j-1) + arr.at(i+1).at(j+1) +    arr.at(i-1).at(j+1) + arr.at(i+1).at(j-1) + arr.at(i-1).at(j) + arr.at(i+1).at(j);

                a.push_back(sum);

            }      

        }

    }

    auto max_num = std::max_element(a.begin(),a.end());

    int result = *max_num;

    return result;

}

int main(){
    
    vector<vector<int>> arr {{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0},{0,0,0,2,0,0},{0,0,1,2,4,0}};
    
    cout<<hourglassSum(arr);
    
    return 0;
    
}




