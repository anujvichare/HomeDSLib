#include<iostream>


class temp
{
	private:

		int no;
		char x;
	
	public:
		temp()
		{
			no = 10;
			x = 'A';
		}
	
}
using namespace std;
using namespace HomeDSLib;

int main()
{
	temp tempObj;

	MyStack<temp> obj(10);
	
	obj.Push(tempObj);
	obj.Push(tempObj);
	obj.Push(tempObj);
	obj.Push(tempObj);
	obj.Push(tempObj);


	for(int i = 0; i < 5 ; i++)
	{
		
		cout<<obj.Top()<<endl;
		obj.Pop();
	}

}

