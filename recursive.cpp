#include<iostream>
using namespace std;
void print(int n,string a){
    if(n ==0){
        return;
    }
    cout << a << endl;
    print(n-1,a);
}
int main(){
    print(3,"hello");
}