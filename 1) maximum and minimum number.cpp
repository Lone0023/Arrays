#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of your array: ";
    cin>>n;
    int age[n];
    cout<<"Enter your ages."<<endl;
    for(int i = 0; i < n; i++){
        cin>>age[i];
    }

    int maxAge = INT_MIN;
    int minAge = INT_MAX;

 /*   for(int i = 0; i < n; i++){
        if(age[i] > maxAge){
            maxAge = age[i];
        }
        if(age[i] < minAge){
            minAge = age[i];
        }
    }
*/

//ANOTHER WAY TO PERFORM THE SAME OPERATION IS

    for(int i = 0; i < n; i++){
        maxAge = max(maxAge,age[i]);
        minAge = min(minAge,age[i]);
    }
    cout<<"Tha maximum age is "<<maxAge<<" years and the minimum age is "<<minAge<<" years.";

    return 0;
}
