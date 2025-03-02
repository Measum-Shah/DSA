#include<iostream>
using namespace std;

int main()
{
    int n = 3;
    int num = 1;
    for(int i=0 ; i<n ; i++){
        for(int j =0;j<n;j++){
           cout << num; 
           num++;
           cout<<" ";
        }
       cout<<endl;
    }

    
    return 0;
}

// outer loop = n times
// see we have 1 2 3 then 4 5 6 then 7 8 9
// the only thing we understand that each line only prints three or n numberrs
// so inner loop also runs n times