#include <iostream>
using namespace std;
 class stack{
  private:
   int * _arr;
   int _top;
   int _size;
  public:
   void push(const int value);
   void pop();
   void print();
   stack();
   ~stack();
};

 stack::stack(){
  _size=100;
  _arr = new int [_size];
  _top = -1;
}
 void stack::print(){
  if(_top!=-1){
    for(int i=0 ; i<=_top; ++i){
          cout<<_arr[i]<<endl;
    }
  }else
    cout<< "Stack is empty"<<endl;
 }
 void stack::push(const int value){
  if(_top+1 == _size){
    int * tmp = new int [2*_size];   
    for(int m = 0; m < _size; ++m){
     tmp[m] = _arr[m];    
    }
   delete [] _arr;
   _arr = tmp;
   _size = (2*_size);
  }   
   _arr[++_top] = value;
 }

 void stack::pop(){
   if(_top == -1) {
       cout<<"stack is empty"<<endl; 
   }
   --_top;
}
 stack::~stack(){
  delete [] _arr;
  _arr = NULL;
 }
  int main(){
   stack test;
   test.push(5);
   test.push(9);
   test.print();
   test.pop();
   test.print();
   test.pop();
   test.print();
      
 }





