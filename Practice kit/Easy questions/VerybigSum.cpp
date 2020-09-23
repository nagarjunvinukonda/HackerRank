
//Calculate and print the sum of the elements in an array, 
//keeping in mind that some of those integers may be quite large.

//###########################   my code:  ######################

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {

    long int h;

    h = accumulate(ar.begin(),ar.end(),0ll);

    return h;

    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;

    vector<long> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
       

       cin>>ar[i];
    }

    long result = aVeryBigSum(ar);

    fout << result << "\n";

    fout.close();

    return 0;
}


