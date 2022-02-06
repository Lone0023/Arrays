#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n; cout<<endl;
    int *nums = new int[n];
    for(int i=0; i<n; i++){
        cout<<"Enter the element for position ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    int c = (n * (n+1))/2;
    cout<<"Total number of subarrays will be: "<<c<<endl; cout<<endl;
    int sum;
    int max_sum = INT_MIN;
    for(int i=0; i<n; i++){
            sum = 0;
        for(int j = i; j<n; j++){
            sum = sum + nums[j];
            max_sum = max(sum,max_sum);

        }
    }
    cout<<"The maximum sum of a contiguous sub array will be "<<max_sum<<endl;
    delete[]nums;
    nums = NULL;
    return 0;
}
