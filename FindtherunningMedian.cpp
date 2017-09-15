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


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    
    cout << fixed;
    cout.precision(1);
       
    double ans;
    priority_queue<int> left;
    priority_queue<int, vector<int>, greater<int> > right;
    
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
        
        if(a_i == 0){
            left.push(a[a_i]);
        }else if(a[a_i] < left.top()){
            left.push(a[a_i]);
        }else{
            right.push(a[a_i]);
        }
        
        if(left.size() <  right.size()){
            left.push(right.top());
            right.pop();
        }else if(left.size() >  right.size()+1){
            right.push(left.top());
            left.pop();
        }
        
        
        if(left.size() == right.size()){
            //even
            ans = ((double)left.top() + (double)right.top())*0.5;
        }else{
            ans = left.top();
        }
        
        cout << ans << endl;   
    }
    return 0;
}
