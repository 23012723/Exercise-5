#include <iostream>
#include <cmath>
using namespace std;

double values(int x,int a,int y,int b){

double distance = sqrt(pow((x - a), 2.0) + pow((y - b), 2.0));
return distance;

}
int main()
{
 int x,a;
 int y,b;

cout<<"Calculate the euclidean distance between two points"<<endl;
cout<<" "<<endl;
cout<<"Enter the value of x1: ";
cin>>x;
cout<<"Enter the value of x2: ";
cin>>a;
cout<<"Enter the value of y1: ";
cin>>y;
cout<<"Enter the value of y2: ";
cin>>b;

double result= values(x,a,b,y);
cout<<"The distance between point 1 and point 2 is "<<result<<endl;
}
