#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,five=0,ten=0,fifteen=0;

	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }

	    int f=0;
	    for(i=0;i<n;i++)
        {
	    if(a[i]==5)
	    {
	        five+=1;
	    }
	    else  if(a[i]==10)
	    {
	        if(five>=1)
	        {
	            five-=1;
	            ten+=1;
	        }
	        else
	        {
              f+=1;


	        }
	    }

	    else if(a[i]==15)
	    {
	        if(ten>=1)
	        {
	            fifteen++;
	            ten--;

	        }
	        else if(five>=2)
	        {
	            five-=2;
	            fifteen++;
	        }
	        else
	        {
	            f+=1;
	        }
	    }
        }
	    //cout<<five<<" "<<ten<<" "<<fifteen<<" "<<f;
       if(f==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;



	}

	return 0;
}
