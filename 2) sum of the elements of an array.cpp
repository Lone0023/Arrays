#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int sum[n];
    cout<<"Enter the elements of your array one by one: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>sum[i];
    }
    int add = 0;
    for(int i = 0; i < n; i++){
        add = add + sum[i];
    }
    cout<<"The sum of the elements present inside your array is "<<add<<endl;
    return 0;
}
