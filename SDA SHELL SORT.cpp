#include <iostream>
#include <conio.h>

using namespace std;
int main ()

{
	int val [100];
	int i,n,t;
	
	cout<<endl;
	cout<<"\t\t\tPengurutan Shell Sort \n\n\n";
	cout<<"Masukkan jumla data yang ingin diurutkan : ";cin>>n;
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<"Nilai ke-"<<1+i<<" : ";cin>>val[i];
	}
	
	for(int w=n/2; w>0;w=w/2)
	{
	for(int x=w;x<n;x++)
	{
	for(int y=x-w;y>=0;y-=w)
	{
	if(val[y+w]<val[y])
	{
		t=val[y+w];
		val[y+w]=val[y];
		val[y]=t;
	}
	}
	}	
}
cout<<"Data Yang telah diurutkan menggunakan shell sort\n";
cout<<endl;
for(i=0;i,n;i++)
{
	cout<<val[i]<<" ";
}
getch();
}


