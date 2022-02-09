#include<iostream>
using namespace std;
void Array_rotation(int nums[], int s, int where_to_rotate_from)
{
    cout<<"[ ";
    for(int i = where_to_rotate_from; i<s; i++){
        cout<<nums[i]<<"  ";
    }
    for(int i = 0; i<where_to_rotate_from; i++){
        cout<<nums[i]<<"  ";
    }
    cout<<"]";
}
int main()
{
    int n;
    cout<<"Enter the size of array: "; cin>>n; cout<<endl;
    int *nums = new int[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter the element at index ["<<i<<"]: ";
        cin>>nums[i];
    }
    cout<<endl;
    cout<<"The elements in this array is [ ";
    for(int i = 0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
    int Rotate;
    cout<<"Enter the index from which you want to rotate the array: ";
    cin>>Rotate; cout<<endl;
    int i =1;
    do{
        if(Rotate<=n && Rotate>=0){
            cout<<"Value taken in succesfully."<<endl<<endl;
            cout<<"The rotated array is: ";
            Array_rotation(nums, n, Rotate);
            break;
        }
        else{
            cout<<"Enter a index from 0 to "<<n<<" from where you want to rotate the array: ";
            cin>>Rotate;
                if(Rotate<=n && Rotate>=0){
                    cout<<endl;
                    cout<<"Value taken in succesfully."<<endl<<endl;
                    cout<<"The rotated array is: ";
                    Array_rotation(nums, n, Rotate);
                    break;
                    }
        cout<<endl;
        i++;
        }
    }while(i<3);
    if(i == 3){
        cout<<"-----Process Terminated-----"<<endl;
    }
    return 0;
}
