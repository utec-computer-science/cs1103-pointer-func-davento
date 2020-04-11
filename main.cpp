#include <iostream>
using namespace std;

void	*_bubblesort_(void *_array_, void (*_puntero_) (void *, int _i, int _k), int _tam_)
{
	int	_k = 0;
	for (int i = 0; i < _tam_; i++)
		for(int k = 0; k < _tam_ - 1; k++)
			_puntero_(_array_, k, _k);
	return _array_;
}

void	_b_int_(void *_vector_, int _i, int _k)
{
	a = (int)_vector_[_i];
	b = (int)_vector_[_i + 1];
	if (a > b && _i + _k < _tam_ - 1)
	{
		int temp = a;
		_vector_[_i] = b;
		_vector_[_i + 1] = temp;
		_k++;
	}
}

void	_b_float_(void *_vector_, int _i, int _k)
{
	a = (float)_vector_[_i];
	b = (float)_vector_[_i + 1];
	if (a > b && _i + _k < _tam_ - 1)
	{
		float temp = a;
		_vector_[_i] = b;
		_vector_[_i + 1] = temp;
		_k++;
	}
}

void	_b_double_(void *_vector_, int _i, int _k)
{
	a = (double)_vector_[_i];
	b = (double)_vector_[_i + 1];
	if (a > b && _i + _k < _tam_ - 1)
	{
		double temp = a;
		_vector_[_i] = b;
		_vector_[_i + 1] = temp;
		_k++;
	}
}

void	_b_char_(void *_vector_, int _i, int _k)
{
	a = (char)_vector_[_i];
	b = (char)_vector_[_i + 1];
	if (a > b && _i + _k < _tam_ - 1)
	{
		char temp = a;
		_vector_[_i] = b;
		_vector_[_i + 1] = temp;
		_k++;
	}
}

template <typename T>
void	printAr(T *ar, int s)
{
	for (int i = 0; i < s; i++)
		cout<<ar[i];
}

int	main()
{
	int	i = 0;
	int	_array_1 [5] = {2, 20, 7, 108, 9};
	float	_array_2 [5] = {4.4, 5.4, 9.1, 7.4, 2.2};
	double	_array_3 [5] = {3.0, 8.0, 2.0, 4.0, 15.0};
	char	_array_4 [6] = {'k', 'a', 'r', 'l', 'o', 's'};

	_bubblesort_(_array_1, _b_int_, 5);
	printAr(_array_1, 5);
	_bubblesort_(_array_2, _b_float_, 5);
	printAr(_array_2, 5);
	_bubblesort_(_array_3, _b_double_, 5);
	printAr(_array_3, 5);
	_bubblesort_(_array_4_, _b_char_, 6);
	printAr(_array_4, 6);
	return 0;
}
