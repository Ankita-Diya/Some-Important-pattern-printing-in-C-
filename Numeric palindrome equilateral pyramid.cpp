#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
       for(int i=0;i<n;i++){
        int col;
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }
        col--;
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
/* Output:
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
*/
