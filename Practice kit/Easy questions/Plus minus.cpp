//Given an array of integers, calculate the fractions of its elements that are positive, 
//negative, and are zeros. Print the decimal value of each fraction on a new line.
//
//alternative Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int p=0,n=0,z=0,a,i,j;
    cin>>j;
    for(i=0;i<j;i++){
        cin>>a;
        
        if(a>0)
            p++;
        else if(a<0)
            n++;
        else
            z++;
    }
    
    printf("%.3f\n",(float)p/j);
    printf("%.3f\n",(float)n/j);
    printf("%.3f",(float)z/j);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

//#######################################################################################

//my code:

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n]={};
    for (int i = 1; i <= n; i++) {

        cin>>arr[i];
       
    }

    int countp =0, countn = 0, countz=0;

    double h,j,k;

    for(int i=0;i<n;i++){
        if(arr[i]>0)
        {
            countp++;
        }
        else if(arr[i]<0)
        {
            countn++;
        }
        else if(arr[i]==0)
        {
            countz++;
        }
    }

    h = countp/n;
    j = countn/n;
    k = countz/n;

    cout << fixed << setprecision(6) << h <<endl; 
    cout << fixed << setprecision(6) << j <<endl; 
    cout << fixed << setprecision(6) << k <<endl;
  
    return 0;
}

//(((((((((((((((dosnt run test case))))))))))

