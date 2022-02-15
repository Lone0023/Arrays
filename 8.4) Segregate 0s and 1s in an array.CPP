#include<iostream>
using namespace std;
int main()
{
    int n,Count=0;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int *nums = new int{n};
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
        if(nums[i]<0||nums[i]>1){
            cout<<"Enter only 0 and 1 as your input in the array."<<endl;
            cout<<"Enter the element at index ["<<i<<"]: ";
            cin>>nums[i];
        }
    }
    cout<<endl;
    cout<<"The elements in the array are."<<endl;
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;
    for(int i = 0; i<n; i++){
        if(nums[i]<1){
            Count= Count + 1;
        }
    }
    cout<<"The number of zeros present in this array is "<<Count<<" and the number of ones present in this array is "<<n-Count<<"."<<endl;
    delete []nums;
    return 0;
}
