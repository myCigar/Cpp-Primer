/*
 * 当容器内元素值都一致时，第一种方法更加简洁。 
 * 1. vector<int> vec(10, 42);
 * 2. vector<int> vec{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
 * 3. vector<int> vec;
      for (int i = 0; i != 10; ++i)
	      vec.push_back(i);
 *
 */
