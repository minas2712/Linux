#include <iostream>
#include "complex.h"
using namespace std;
template <class T>
 void BubbleSort(T data[],int n){
	cout<<"Old array is:\n";
   for(int i = 0; i<3; ++i) {
        cout <<"("<<data[i].getRe()<<","<<data[i].getIm()<<")\n";
   }
for(int i = 0; i<3; ++i) {
   for(int j = i+1; j<3; ++j)
   {
      if(data[j].absvalue() < data[i].absvalue()) 
	swap(data[i],data[j]);
      	}
}
	cout <<"Sorted Complex numbers array:\n";
	for(int i = 0; i<3; ++i) {
   		data[i].Display();
	}

}
int main() {
    Complex n1(2,3), n2(5,-6);
   Complex res;
Complex c[3];

c[0]=Complex(-9,2);
//c[0].setIm(2);
c[1].setRe(6);
c[1].setIm(-5);
c[2].setRe(-9);
c[2].setIm(3);
double n=3;
res= n1+n2;
  res.Display();
  Complex res2;
res2=n1-n2;
  res2.Display();
cout<<"absolute value of";
n1.Display();
cout<< "is "<<n1.absvalue()<<"\n";
Complex res1;
res1=n1*n;
res1.Display();
BubbleSort(c,3);
    return 0;
}
