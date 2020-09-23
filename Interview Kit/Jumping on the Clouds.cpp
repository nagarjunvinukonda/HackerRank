
//#############
//My code---Jumping on clouds
//###############

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int c[100];
    for(int i=0; i<n ; i++){
        cin>>c[i];
    }
    int curr =0;
    int last = n-1;
    int jump =0;

    while(curr<last){
        if(c[curr +2] ==0){

            jump++;
            curr = curr+2;
        }
        else if (c[curr+1]==0){
            jump++;
            curr++;
        }

        else{
            curr++;
        }
    }
    cout<<jump;

    return 0;
}
