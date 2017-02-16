//Class task
#include <iostream>
#include <string>

using namespace std;

class cube
{
private:
	unsigned size;
	char color;
	short material;
public:
	cube():size(0), color(' '), material(0){};
	cube(unsigned s, char c, short m):size(s), color(c), material(m){};
	void set_cube()
	{
		cout<<"Input size: ";
		cin>>this->size;
		cout<<"Input color(r - red, b - blue, g - green): ";
		cin>>this->color;
		cout<<"Input material(1 - wooden, 2 - plasmastic, 3 - cardboard): ";
		cin>>this->material;
	}
    unsigned get_size()
	{
		return this->size;
	}
	string get_color()
	{
		if(color == 'r')
		{
			return "red";
		}
		else if(color == 'b')
		{
			return "blue";
		}
		else if(color == 'g')
		{
			return "green";
		}
		
	}
	short get_material()
	{
		return this->material;
	}
};

cube *input(cube *arr, int s);

void output(cube *arr, int s);

unsigned count_tower_height(cube *arr, int s);

int main()
{
	const int n = 3;
	cube *arr = new cube[n];
	input (arr, n);
	output(arr, n);
	cout<<"Height of tower: "<<count_tower_height (arr, n);
	return 0;
}

cube *input(cube *arr, int s)
{
	for(int i = 0; i < s; i++)
	{
		arr[i].set_cube ();
		
	}
	return arr;
}

void output(cube *arr, int s)
{
	cout<<"size\t colour\t material"<<endl;
	for(int i = 0; i < s; i++)
	{
		cout<<arr[i].get_size ()<<"\t "
			<<arr[i].get_color ()<<"\t "
			<<arr[i].get_material ()<<endl;
	}
}

unsigned count_tower_height(cube *arr, int s)
{
	short m;
	cout<<"Input material: ";
	cin>>m;
	int tower_height = 0;
	for(int i = 0; i < s; i++)
	{
		if(arr[i].get_material () == m)
		{
			tower_height += arr[i].get_size ();
		}
	}
	return tower_height;
}












