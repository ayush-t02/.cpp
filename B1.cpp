long long MaxPairwiseProductFast(const vector<int>& numbers) {
  int n = numbers.size();
  long long product = 0;
  // find the max element in the collection 'numbers'
  int max_index1 = -1;
  for (int i = 0; i < n; i++) {
    if ((max_index1 == -1) || (numbers[i] > max_index1)) {
	  max_index1 = i; // largest number in the list
	  }
  }
	
  int max_index2 = -1;
  for (int j = 0; j < n; j++) {
    if ((numbers[j] != numbers[max_index1]) && ((max_index2 == -1) ||
	  (numbers[j] > max_index2))) {
	    max_index2 = j; // second largest number in the list
	  }
  }
	
  product = numbers[max_index1] * numbers[max_index2];
  return ((long long) product);
}