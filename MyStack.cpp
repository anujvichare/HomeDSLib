
namespace HomeDSLib
{
	template<class T>
	class MyStack
	{
		private:
			int mTopStatus;
			int mSizeStatus;
			T *mpPointerToStack;

		public:
			MyStack(int);
			~MyStack();

			bool IsEmpty();
			int Size();
			T Top();
			int Push(T);
			int Pop();


	};
	
	template<class T>
	MyStack<T>::MyStack(int rSize)
	{
		mTopStatus = -1;
		mSizeStatus = 0;

		mpPointerToStack = new T[rSize];
		
	}
	
	template<class T>
	MyStack<T>::~MyStack()
	{
		if(mpPointerToStack)
			delete []mpPointerToStack;

	}

	template<class T>
	int MyStack<T>::Push(T rObject)
	{
		if(mTopStatus < mSizeStatus)
		{	
			mpPointerToStack[mTopStatus++] = rObject;
			return 0;
		}
		else
		{
			return 1;
		}
	}

	template<class T>
	int MyStack<T>::Pop()
	{
		if(mTopStatus >= 0 )
		{
			mTopStatus--;
			return 0;	
		}
		else
		{
			return 1;
		}

	}

		template<class T>
	T  MyStack<T>::Top()
	{
		if(mTopStatus >= 0 )
		{

			return	mpPointerToStack[mTopStatus];
				
		}
		else
		{
			return 1;
		}

	}


}
