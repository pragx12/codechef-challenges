  #include<bits/stdc++.h>
using namespace std ;
int main(){
	
	
	int t,a,n;
	cin>>t;


for(int j=0; j<=10000; j++){
	j=j;
}

	while(t--){
		set<int>s;
		cin>>n;

		while(n--){
			cin>>a;
			if(a>0)s.insert(a);

		}
	cout<<s.size()<<"\n";
	}
	return 0;
}