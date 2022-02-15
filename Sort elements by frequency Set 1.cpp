#include<iostream>
using namespace std;
int main()
{
    int s;
    cout<<"Enter the size of your array: "; cin>>s; cout<<endl<<endl;
    int *nums = new int[s];
    for(int i = 0; i<s; i++){
        cout<<"Enter the element at position ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements present in your array is."<<endl;
    for(int i = 0; i<s; i++){
        cout<<nums[i]<<"  ";
    }
    int Count;
    for(int i = 0; i<s; i++){
        for(int j = i+1; j<s; j++){
            if(nums[i]==nums[j]){
                Count = Count + 1;
            }
        }
    }
    cout<<Count;
}
