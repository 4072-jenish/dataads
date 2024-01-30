#include<iostream>

using namespace std;

class take{
	
	public :
		int r,l,w,h;
	
};
class print {
	 
	 public :
	 	void out(){
        cout <<"Enter r :- "<<endl;
		cin <<r;
		cout <<"Enter length of triangle :- " << endl;
		cin <<l<<endl;
		cout << "Enter width of rectangle :- "<<endl;
		cin<<w;
		cout << "Enter higth of rectengle :- "<<endl;
		cin<<h;
	 	cout<<"area of circle is :-"<<3.14*r*r<<endl;
	 	cout<<"area of triangle is :-"<<l*l*l<<endl;
	 	cout<<"area of rectangle is :-"<<w*h<<endl;
};

int main(){
	        
	 print p1;
	 p1.out();
	 return 0;
}

