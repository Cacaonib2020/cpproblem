#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){//2~その数自身の二乗根全て探索(k1の√n/n倍高速)
	int n,j=2;
  int p[70001]={2},l=0;
	cin >> n;
	while(l!=n){
		int i = 2;
		int prime = 1;
		while(i*i <= j&&prime){
			if(j%i==0){
				prime=0;
			}
			i++;
		}
		if(prime){
      l++;
      p[l] = j;
    }
		j++;
	}
  cout << p[n-1]<<endl;
	return 0;
}