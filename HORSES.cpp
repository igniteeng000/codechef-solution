
#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++){
            cin>>a[i];
        }
        int diff = abs(a[0]-a[1]);
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(abs(a[i]-a[j])<diff && i!=j){
                    diff = abs(a[i]-a[j]);
                }
            }
        }

        cout<<diff<<endl;
    }
	return 0;
}
