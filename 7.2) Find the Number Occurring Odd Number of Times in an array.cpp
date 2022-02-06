#include<iostream>
using namespace std;
void odd_check(int nums[7])
{
    int Count;
    for(int i = 0; i<7; i++){
        Count = 1;
        for(int j = i + 1; j<7; j++){
            if(nums[i]== nums[j]){
                Count = Count + 1;
            }
        }
        if(Count%2!=0){
            cout<<"The number occuring odd times is "<<nums[i]<<endl;;
            break;
        }
    }
    if(Count%2==0)
        cout<<"no number occuring odd times.";
}
int main()
{
    int nums[7] = {1, 2, 3, 2, 3, 1, 3};
    odd_check(nums);


}
