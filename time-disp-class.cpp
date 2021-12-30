#include <iostream>
#include <iomanip>
using namespace std;
class Time {
    int h,m,s;
    public:
    void read();
    void print();
}T;
void Time::read() {
    cout<<"Hours ?"; cin>>h;
    cout<<"Minutes ?"; cin>>m;
    cout<<"Seconds ?"; cin>>s;
}
void Time::print() {
    cout<<setw(2)<<setfill('0')<<h<<':';
    cout<<setw(2)<<setfill('0')<<m<<':';
    cout<<setw(2)<<setfill('0')<<s<<endl;
    cout<<(h*3600+m*60+s);
}
int main() {
	T.read();
	T.print();
	return 0;
}
