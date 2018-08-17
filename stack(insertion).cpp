#include<iostream>
using namespace std;
class stack{
	public:
		int a[100],top=-1,i,s1=20;
		int IsFull(){
			if(top==s1-1)
			return 1;
			else
			return 0;
		}
		void push(int ele){
			if (IsFull()){
				cout<<"OverFlow"<<endl;
			}
			else{
				++top;
				a[top]=ele;
			}
		}
		void display(){
			for(i=0;i<=top;i++){
				cout<<a[i];
			}
		}
};
int main(){
	stack s;
	int data;
	int n1;
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
	cout<<"Enter element";
	cin>>data;
	
	s.push(data);
    }
	s.display();
	return 0;
}
