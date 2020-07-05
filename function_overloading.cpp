#include <iostream>
#include <cmath>
using namespace std;

float area(float rad)
{
	float ar = 3.14*rad*rad;
	cout << "The area of the given circle is : " << ar;
}
float area(float a, float b, float c)
{
	float s=(a+b+c)/2;
	float q= s*(s-a)*(s-b)*(s-c);
	float ar = sqrt(q);
	cout << "The area of given triangle is: " << ar;
}
float area(float a, float b)
{
	float ar = a*b;
	cout << "The area of the given rectangle is: " << ar;
}

int main()
{
	cout << "Enter the shape: \n1. Circle\n2. Triangle\n3.Rectangle\n";
	int a;
	cin >> a;
	if(a==1){
		cout << "Enter radius of the circle: ";
		int r;
		cin >> r;
		area(r);
	}
	else if(a==2){
		cout << "Enter the three sides of the triangle: ";
		int b,c,d;
		cin >> b;cin >> c; cin >> d;
		area(b,c,d);
	}
	else if(a==3){
		cout << "Enter the length and breadth of the rectangle: ";
		int l,w;
		cin >> l;cin>>w;
		area(l,w);
	}
	else{
		cout << "Invalid selection";
	}
	return 0;
}
