#include<iostream>
using namespace std;
class Area
{
public:
int r,b,l;
void circle()
{
cout<<"Enter radius:";
cin>>r;
cout<<3.14*r*r<<"\n";
}
void rect()
{
cout<<"Enter length and breadth:";
cin>>l>>b;
cout<<l*b<<"\n";
}
};
int main()
{
cout<<"Area Calculator"<<"\n";
Area myarea;
myarea.circle();
myarea.rect();
}