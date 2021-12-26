#include <iostream>
using namespace std;

void primefind(int a[],int n,int &k) {
    k=0;
    for(int i=2;i<n;i++) {
        int flag=1;
        for(int j=2;j<=i/2;j++)
        if(i%j==0)
        flag=0;
        if(flag)
        a[k++]=i;
    }
}

void sumdisp(int a[],int n,int k) {
    for(int i=0;i<=k/2+1;i++)
    for(int j=k/2+1;j<k;j++)
    if(a[i]+a[j]==n)
    cout<<n<<'='<<a[i]<<'+'<<a[j]<<endl;
}

int main() {
	int a[100],n,k;
	cin>>n;
	primefind(a,n,k);
	sumdisp(a,n,k);
	return 0;
}
