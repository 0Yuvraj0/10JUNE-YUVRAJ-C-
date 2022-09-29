// Shared via Compiler App https://g633x.app.goo.gl/TPlw
#include<iostream>
 using namespace std;
 class matrix
 {
 private:
     int a[5],b[5],c[5],d;
 public:
     matrix()
     {
         a[5]=0,b[5]=0,c[5]=0,d=1;
     }
     void getvalue()
     {
         cout<<"Enter the first matrix : ";
         for(int d=1;d<=5;d++)
         {
             cin>>a[d];
         }
         cout<<"Enter the second matrix : ";
         for(d=1;d<=5;d++)
         {
         cin>>b[d];
         }
         for(d=1;d<=5;d++)
         {
             c[d]=a[d]+b[d];
         }
     
     }
     void displayvalue()
     {
         cout<<"Two 1D matrix addition is : ";
         for(d=1;d<=5;d++)
         {
         cout<<" "<<c[d]<<endl;
         }
     }
     matrix operator+(matrix);
 };
 matrix matrix :: operator + (matrix m)
 {
     matrix m1;
     int x=a[d]+m.a[d];
     int y=b[d]+m.b[d];
     int z=c[d]+m.c[d];
     m1.a[d]=x;
     m1.b[d]=y;
     m1.c[d]=z;
     return m1;
 }
 int main()
 {
     matrix ma;
     ma.getvalue();
     ma.displayvalue();
     
 }