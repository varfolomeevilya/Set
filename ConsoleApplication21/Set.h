#pragma once
class Set
{
 private:
	
	int size;
	int* array;
	int temp;
	bool isInSet(int a) 
	{
		for (int i = 0; i < size; i++) 
		{
			if (array[i] = true) 
			{
				temp = array[i];
			}
		}
	}
	
public:
    istream in;
	ostream out;
	void AddSet(Set& s1,Set& s2){}
    const Set operator+(Set);
	const Set operator-(Set);
	const Set operator*(Set);
	const Set operator/(Set);
	const Set operator+=(Set);
	const Set operator -=(Set);
	const Set operator==(Set);
	const Set operator*=(Set);
	const Set operator=(Set);
	const Set operator >=(Set);
	const Set operator>(Set);
	friend istream& operator>> (istream& input, Set& set){}
	friend ostream operator<<(ostream& input, Set& set ){}
	Set(const Set& a) : 
	int AddSet(int a) {
		if (isInSet(a))
		{
			
		}
		else
		{
			int* temp = new int[size+1];
				array[size + 1]
		}
	}
	int AddSet(int b,Set s1)
	{
		for(int i =0; i < b ; i++)
		if( b)
		{
			temp ;
		}
	}
	void DeleteSet(const int size_t) 
	{
		size = size;
		
		array = new int [size];
		return;
	}
	
	Set(const int& _size)
	{
		size = _size;
		array = new int[_size];
		for (int i = 0; i < size; i++) 
		{
			array[i] = rand() % 20;
			if (isInSet) 
			{
				i--;
			}
			else 
			{
				int* temp = new int[size + 1];
			    array[size +1];
			}
		}
	}
	Set(size_t);
	~Set() 
	{
		
		delete[] array;
		
	};
     void EqualeSet(int a , int b) 
     {
	   for (int i = 0; i < a; i++)
	   {
		  for (int i = 0; i < b; i++) 
		  {
			  return Set(a == b);
		  }

	   }
			
     }
	 
	
	
	
	


};

