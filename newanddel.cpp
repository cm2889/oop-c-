// New and delete
#include<iostream>
using namespace std;

int main()
{
int *ptr;
ptr = new int (5); // pointer নিলে এই ভাবে  initial করতে হবে
cout<<*ptr<<endl;
delete(ptr);

return 0;
}
