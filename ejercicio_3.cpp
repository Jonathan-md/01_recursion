#include<iostream>
using namespace std;

int busca(int A[],int n,int x);

int main(){
	int A[5],x,pos;
	
	cout<<"Ingrese los numeros del arreglo: "<<endl;
	
	for(int i=0;i<5;i++){
		cin>>A[i];
	}
	
	cout<<"Ingrese el numero que quiere encontrar: ";
	cin>>x;
	
	pos=busca(A,5,x);
	
	if(pos != -1){
		cout<<"\nEl valor que busca SI esta dentro del arreglo."<<pos;
	}
	else{
		cout<<"El valor que busca NO esta dentro del arreglo.";
	}
	
	return 0;
}

int busca(int A[],int n,int x){
	if(n==0){
		return -1;
	}
	else{
		if(A[n-1]==x){
			return -1;
		}
		else{
			return busca(A,n-1,x);
		}
	}
}
