  #include<iostream> 
using namespace std; 
 float power(int e ); 
 float power(int g, int h); 
  int main() 
  { 
      int g,h,i; 
      cout<<"enter the value of a,b and c \n"; 
      cin>>g>>h>>i; 
      power(g); 
      power(h,i); 
      return 0; 
} 
float power(int e) 
{ 
    int result=1,i, f=3; 
    for(i=1;i<=f;i++) 
    { 
        result=result*e; 
    } 
    cout<<"Result 1 is: "<<result<<endl; 
return 0; 
} 
float power(int e,int f) 
{ 
    int result=1,i; 
    for(i=1;i<=f;i++) 
    { 
        result=result*e; 
    } 
    cout<<"\n Result 2 is: "<<result; 
return 0; 
}         

