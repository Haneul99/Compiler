void main()
{
	float list[100];
	float element;
	float total, top, temp;
	int i;
	i = 1;

	read(element);
	while(element != 0){	// read a list
		list[i] = element;
		++i;
		read(element);
	}

	top = total = i - 1;
	while (top > 1) {
		i = 1;
		while (i < top) {
			if (list[i] > list[i+1]) {
				temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
			++i;
		}
		top--;
	}

	i = 1;
	while (i <= total) {	// print the sorted list
		write(list[i]);
		++i;
	}
}