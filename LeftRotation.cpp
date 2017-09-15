#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    vector<int> b(n);
    
    //n=5 k=4
//    for(int i = k ; i < n ; i++){
//        b.push_back(a.at(i));
//    }    
//    for(int j = 0 ; j < k ; j++){
//        b.push_back(a.at(j));
//    }

    //n-k+i % n
    // 1 + i % 5
    // 1+4 % n = 0
    // 1+0 % 5 = 1
    // 1+1 % 5 = 2
    // 1+2 % 5 = 3
    // 1+3 % 5 = 4
    
    for(int i = 0 ; i < n ; i++){
        b[(n-k+i)%n] = a[i];
    }
    
    return b;
    
}

int main(){
    
    int n;
    int k;
    
    //input
    
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    
    vector<int> output = array_left_rotation(a, n, k);
    
    
    //output
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
