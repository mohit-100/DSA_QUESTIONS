#include<iostream>
using namespace std;
#define n 20

class  queues {
 int* arr;
 int front;
 int back;
  
  public:
  queues(){
     arr = new int[n];
     front = 0;
     back = 0;
  }
  void push(int x)
   {
    if(back == n)
    {
        cout<<"queues full"<<endl;
    }
      arr[back] = x;
      back++;

    //   if(front == 0)
    //   {
    //      front++;
    //   }
   } 
   void pop()
{
    if(front == back)
    {
        cout << "no element ";
        return;
    }
    front++; // Increment front instead of decrementing
}
    int peak()
    {
        if(front == back)
        {
            cout<<"no elemnt";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front == back)
        {
            return true;
        }
         return false;
    }

};

int main()
{
     queues q;
    q.push(2);
    q.push(3);

    while(!q.empty())
    {
         cout<< q.peak()<< endl;
          q.pop();
    }
    

    // q.pop();
    return 0;
}