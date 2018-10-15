#include <bits/stdc++.h>
using namespace std;
struct S{
    S* child[2];
    S* parent;
    long long p;
    S(){
        child[0]=NULL;
        child[1]=NULL;
        parent=NULL;
        p=0;
    }
};
/*void update(S* root){
    if(root->child[0] && root->child[1]){
        root->p=root->child[0]->p+root->child[1]->p;
    }
    else if(root->child[0])root->p=root->child[0]->p;
    else if(root->child[1])root->p=root->child[1]->p;
    if(root->parent)update(root->parent);
}*/
void insert(S *root,string s,int l){
    if(l==-1){
    	root->p++;
        return;
    }
    int x=s[l]-'0';
    if(!root->child[x]){
        S *temp = new S();
        root->child[x]=temp;
        temp->parent=root;
    }
    root->p++;
    insert(root->child[x],s,l-1);
    
}
void ans(S* root,string s,string k,int l,long long &fin){
    if(l==-1)return;
    if(s[l]=='1'){
        if(k[l]=='1'){
            if(root->child[1])fin+=root->child[1]->p;
            if(root->child[0]){
                ans(root->child[0],s,k,l-1,fin);
            }
        }
        else{
            if(root->child[1]){
                ans(root->child[1],s,k,l-1,fin);
            }
        }
    }
    else{
        if(k[l]=='0'){
            if(root->child[0]){
                ans(root->child[0],s,k,l-1,fin);
            }
        }
        else{
            if(root->child[0])fin+=root->child[0]->p;
            if(root->child[1]){
                ans(root->child[1],s,k,l-1,fin);
            }
        }
    }
}
long long solve(vector<long long> a, int k) {

    long long mx=k;
    S *root=new S();
    for(int i=0;i<a.size();i++){
        mx=max(mx,1LL*a[i]);
    }
    int sz=(int)ceil(1.0*log2(mx))+1;
    string kk="";
    for(int i=0;i<sz;i++){
        kk=kk+char(k%2+'0');
        k/=2;
    }
    long long temp=0,fin=0;
    string hh;
    for(int i=0;i<sz;i++)hh+='0';
    insert(root,hh,sz-1);
    for(int i=0;i<a.size();i++){
        temp^=a[i];
        long long y=temp;
        string h="";
        for(int i=0;i<sz;i++){
            h=h+char(y%2+'0');
            y/=2;
       }
       ans(root,h,kk,sz-1,fin);
       insert(root,h,sz-1);
    }
    return fin;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>n>>k;
		vector<long long> v;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		cout<<solve(v,k)<<endl;
	}
	return 0;
}