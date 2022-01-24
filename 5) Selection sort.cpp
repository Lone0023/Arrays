#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int Nums[n];
    cout<<"Enter the elements of your array one by one: ";
    for(int i = 0; i < n; i++){
        cin>>Nums[i];
    }
     for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(Nums[j] < Nums[i]){
                int temp = Nums[j];
                Nums[j] = Nums[i];
                Nums[i] = temp;
            }
        }
    }
    cout<<"The elements of your array after sorting is: ";
    for(int i = 0; i < n; i++){
        cout<<Nums[i]<<" ";
    }

    return 0;
}
