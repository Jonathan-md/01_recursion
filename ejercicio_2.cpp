#include<iostream>
using namespace std;

int sum(int A[],int n);

int main(){
	int A[5],result;
	
	cout<<"Ingrese los numeros para la suma: "<<endl;
	for(int i=0;i<5;i++){
		cin>>A[i];
	}
	
	result=sum(A,5);
	
	cout<<"\nLa suma es: " <<result;
	
	return 0;
}

int sum(int A[],int n){
	if(n==0){
		return 0;
	}
	else{
		return A[n-1]+sum(A,n-1);
	}
}
