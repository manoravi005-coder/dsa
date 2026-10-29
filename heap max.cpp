#include <iostream>
#include<queue>
using namespace std;

int main() 
{
   priority_queue<int>pq;
   pq.push(6);
   pq.push(3);
   pq.push(10);
   pq.push(1);
   pq.push(20);
   pq.top();
   cout << pq.top();
   return 0;
}
