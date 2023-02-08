#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int space=0;space<n-i-1;space++){
            cout<<" ";
        }
        for(int star=0;star<i+1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }
       for(int i=0;i<n;i++){
        for(int space=0;space<i+1;space++){
            cout<<" ";
        }
        for(int star=0;star<n-i-1;star++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}
/* Output:
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
