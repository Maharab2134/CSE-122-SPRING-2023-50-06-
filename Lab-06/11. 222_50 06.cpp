//poblem Number: 266A
//Povlem Name: Stones on the Table


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, count=0;
	string stones;
	
	cin>>n;
	cin>>stones;
	
	for(int i=1; i<n; i++){
		if(stones[i]==stones[i-1]){
			stones[i] = stones[i-1];
			count++;
		}		
	}
	cout<<count;
	
	return 0;
}
