#include <iostream>
#include <cstdlib>

using namespace std;

class vector
{
private:
	double *array;
	unsigned size;
	double p;
	unsigned k;
public:
	vector() :array(0), size(0), p(0), k(0) {};

	vector(double *a, unsigned s, double p1, unsigned k1) :size(s), p(p1), k(k1)
	{
		array = new double[size];
		for(int i = 0; i < size; i++)
		{
			array[i] = a[i];
		}
	}

	vector(const vector &v)
	{
		size = v.size;
		array = new double[size];
		for (int i = 0; i < size; i++)
		{
			array[i] = v.array[i];

		}
	}

	vector& operator=(const vector& v)
	{
		if (this != &v)
		{
			if (array != 0)
			{
				delete[] array;
			}
			array = new double[size = v.size];
			for (int i = 0; i < size; i++)
			{
				array[i] = v.array[i];
			}
		}
		return *this;
	}

	void input()
	{
		cout<<"Input size of array: ";
		cin >> size;
		array = new double[size];
 		for (int i = 0; i < size; i++)
		{
			cout << "Input arr[" << i + 1 << "]: ";
			cin >> array[i];
		}
		cout << "Input p: ";
		cin >> p;
		cout << "Input k( k >= 0 && k < size ): ";
		cin >> k;
		if(k >= size || k < 0)
		{
			cout << "You have entered wrong data!";
			exit(EXIT_SUCCESS);
		}
	}

	void output()
	{
		cout << "Array: ";
		for(int i = 0; i < size; i++)
		{
			cout << array[i] << " ";
		}
		cout << endl;
	}

	void delete_by_index()
	{
		array[k] = 0;
	}

	void input_element_by_order()
	{
		double temp;
		array[k] = p;
		for(int i = 0; i < size;)
		{
			if(i == 0 || array[i-1] <= array[i])
			{
				i++;
			}
			else
			{
				temp = array[i];
				array[i] = array[i-1];
				array[i-1] = temp;
				i--;
			}
		}
	}

	double& operator[](size_t pos);

	~vector()
	{
		if (array != 0)
		{
			delete[] array;
		}
	}
};

int main()
{
	vector v1;
  	v1.input();
	v1.delete_by_index ();
  	v1.output ();
	v1.input_element_by_order ();
	v1.output ();
	return 0;
}
