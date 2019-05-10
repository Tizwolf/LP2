template <class T>
int Vector<T>::delta_cap = 10;

template <class T>
Vector<T>::Vector(int size): size(size)
{
	maxcap = size + delta_cap;
	dat = new T[maxcap];
}

template <class T>
Vector<T>::Vector(const Vector<T> & v)
{
	size = v.size;
	maxcap = v.maxcap;
	dat = new T[maxcap];
	memcpy(dat, v.dat, size * sizeof(T));
}

template <class T>
Vector<T>::~Vector()
{
	delete[]dat;
}

template <class T>
void Vector<T>::push_back(const T & a)
{
	if (size == maxcap)
		reserve(maxcap + delta_cap);
		dat[size++] = a;
}

template <class T>
void Vector<T>::reserve(int cap)
{
	assert(cap > size);
	T * old_data = dat;
	maxcap = cap;
	dat = new T[maxcap];
	for (int i = 0; i < size; i++)
		dat[i] = old_data[i];
}

template <class T>
T & Vector<T> :: operator[](int i)
{
	return dat[i];
}

template <class T>
int Vector<T>::get_size()
{
	return size;
}
