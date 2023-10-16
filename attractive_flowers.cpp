#include<iostream>
#include<vector>
using namespace std;
int main(){

    cin.tie(nullptr)->sync_with_stdio(false); // is used to untie cin from its output stream and disable synchronization between C++ and C I/O streams for improved input/output performance. and used in cp mostly

    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    constexpr int temp = 1e3 + 10; // , the use of constexpr in this code snippet benefits the program by allowing the compiler to compute a constant value at compile time, resulting in improved efficiency, constant expression usage, and enhanced code readability. It eliminates the need to calculate this value repeatedly at run time, which can be especially beneficial for large-scale or performance-critical applications.
    int mineven = temp;

    int sum = 0;
    for(auto x : v){
        x -= x%2 == 0; // == hamesa 1 or 0 hi deta hai
        mineven = min(mineven,x);
        sum += x;
    }

    cout<< sum - (n%2 == 0 ? mineven:0)<<endl; // condition ? expression_if_true : expression_if_false



    


    return 0;
}