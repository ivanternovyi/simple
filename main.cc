//String task
#include <iostream>
#include <string>

using namespace std;

void input_digits(string &digits);

int count_commas(string str);

double *transform_to_double_array(string str, int digits);

double get_product(double *arr, int size);

int main()
{
	cout<<"Input digits, separated by commas(input '!' to stop): ";
	string digits;
	input_digits (digits);
	int num_of_digits = count_commas(digits) + 1;
	double *arr = transform_to_double_array (digits, num_of_digits);
	cout<<"Product is: "<<get_product (arr, num_of_digits)<<endl;
	return 0;
}

void input_digits(string &digits)
{
	getline(cin, digits, '!');
}

int count_commas(string str)
{
	int counter = 0;
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]==',')
		{
			counter++;
		}
	}
	return counter;
}

double *transform_to_double_array(string str, int digits)
{
	int k=-1, q=0;
	string a;
	double *arr = new double[digits]; 
	for(int i=0; i<digits; i++)
	{
		a.clear();
		k++;
		while(str[k]!=',')
		{
			a+=str[k];
			k++;
			if(k==str.length())
			{
				break;
			}
		}
		arr[q]=stod(a);
		q++;
	}	
	return arr;
}

double get_product(double *arr, int size)
{   
	double product=1;
	for(int i=0; i<size; i++)
	{
		product*=arr[i];
	}
	return product;
}













