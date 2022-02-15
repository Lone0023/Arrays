#include<iostream>
using namespace std;
int main()
{
    int n,Count_0=0,Count_1=0;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int *nums = new int{n};
    cout<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements in the array are."<<endl;
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<endl<<endl;

    for(int i = 0; i<n; i++){
        if(nums[i]==0){
            Count_0= Count_0 + 1;
        }
        if(nums[i]==1){
            Count_1= Count_1 + 1;
        }
    }
    cout<<"The number of zeros present in this array is "<<Count_0<<" and the number of ones present in this array is "<<Count_1<<"."<<endl;
    delete []nums;
    return 0;
}
