#include<iostream>
using namespace std;
void check(int nums[], int n, int x)
{
     for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i]+nums[j]==x){
                cout<<nums[i]<<" , "<<nums[j]<<endl;
            }
        }
     }
}
int main()
{
    int n;
    cout<<"Enter the size of your array: "; cin>>n;
    int *nums = new int[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the element for position ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    int x;
    cout<<"Enter the value of x: "; cin>>x;
    check(nums,n,x);
    delete[]nums;
    nums = NULL;
    return 0;
}
