#include<iostream>
using namespace std;

int main()
{
    int n = 4;

   for(int i =0; i<n ; i++){
    char ch = 'A';
    for(int j=0; j<n;j++){
        // cout << j; //for number pattern
        // cout<< "*"; //for star pattern
        cout << ch<< " ";
        ch = ch +1; //implicit type converson ASCI values
    }
    cout<<endl;
   }

    
    return 0;
}

    
// Write Generic Logic
// like today n=4  tommorow it can be 5, 6 ,7...etc
// the outer loop = number of rows we have in our pattern , which is n
// the inner loop tells you what to print in thw row
// in square pattern you see in every single line 1 to n numbers are getting printed
// patterm is 1 2 3 4
         //   1 2 3 4
         //   1 2 3 4
//  as you can see this not a continous pattern the number stops at 4 