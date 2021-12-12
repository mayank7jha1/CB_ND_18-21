class vector {
	int current_size;
	int total_size;
	int *arr;
public:
	vector() {
		current_size = 0;
		total_size = 1;
		arr = new int[total_size];
	}
	void push_back(const int d) {
		// If the current_size==total_size that means the array is full
		if (current_size == total_size) {
			int *oldArr = arr;
			arr = new int[total_size * 2];
			total_size = 2 * total_size;
			for (int i = 0; i < current_size; i++) {
				arr[i] = oldArr[i];
			}
			delete [] oldArr;
		}
		arr[current_size] = d;
		current_size++;
	}
	void pop_back()  {
		current_size--;
	}
	int front() const {
		return arr[0];
	}
	int back() const {
		return arr[current_size - 1];
	}
	bool empty() const {
		return current_size == 0;
	}
	int capacity() const {
		return total_size;
	}
	int size() const {
		return current_size;
	}
	int at(int i) const {
		return arr[i];
	}

	int operator[](const int i) {
		return arr[i];
	}
};


/*We can make all the functions here as constants
as we are changing any data members.*/