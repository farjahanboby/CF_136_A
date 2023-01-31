#include <iostream>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n;
    int arr[n];
    for(i=1;i<=n;i++){
        cin>>m;
        arr[m]=i;
    }
     for(i=1;i<=n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
}
/*
1 2 3 4
2 3 4 1
+++++++
4 1 2 3


1 2 3 4 5
1 3 5 2 4
+++++++++
1 4 2 5 3
enter each elements, index number is that specific element,

*/
