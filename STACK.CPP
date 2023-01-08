#include<iostream.h>
#include<conio.h>
#define M 5
class Stack
{
private:
	int a[M];
	int i,e,top;
public:
	Stack(){
	top=-1;
	}
	void push(){
	if(top==M-1){
	cout<<"\nStack Overflow";
	}
	else{
	cout<<"\nEnter the element : ";
	cin>>a[top+1];
	cout<<"\nPosition : "<<top+1<<"\tValue : "<<a[top+1];
	top++;
	} }
	void pop(){
	if(top==-1){
	cout<<"\nStack Underflow";
	}
	else{
	e=a[top];
	cout<<"\nPostion : "<<top<<"\tValue : "<<e;
	top--;
	}}
	void display(){
	for(i=top;i>=0;i--){
	cout<<"\nPosition : "<<i<<"\tValue : "<<a[i];
	}
}
};
int main(){
clrscr();
int choice,exit=1;
Stack s;
do{
cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
cout<<"\nEnter the choice : ";
cin>>choice;
switch(choice){
case 1:
	s.push();
	break;
case 2:
	s.pop();
	break;
case 3:
	s.display();
	break;
case 4:
	exit=0;
	break;
}
}while(exit);
getch();
return 0;
}

