#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int candies[n];
    cout<<"Enter the elements of your array one by one: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>candies[i];
    }
    int maxCandy = INT_MIN;
    for(int i = 0; i < n; i++){
        maxCandy = max(maxCandy,candies[i]);
    }
    cout<<"The maximum number of candies a kid has is "<<maxCandy<<endl;
    return 0;
}
