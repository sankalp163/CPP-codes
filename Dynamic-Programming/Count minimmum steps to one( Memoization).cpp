int minStepsHelper(int n, int *ans) {
	// Base case
	if(n <= 1) {
		return 0;
	}

	// Check if output already exists (This condition avoids overlapping of sub-problems)
	if(ans[n] != -1) {
		return ans[n];
	}

	// Calculate output
	int x = minStepsHelper(n - 1, ans);

	int y = INT_MAX, z = INT_MAX;
	if(n % 2 == 0) {
		y = minStepsHelper(n/2, ans);
	}

	if(n % 3 == 0) {
		z = minStepsHelper(n/3, ans);
	}

	int output = min(x, min(y, z)) + 1;

	// Save output for future use(Memoization)
	ans[n] = output;

	return output;

}

int misSteps_2(int n) {
	int *ans = new int[n+1];
	//Initialzing the array to avoid garbage values
	for(int i = 0; i <= n; i++) {
		ans[i] = -1;
	}

	return minStepsHelper(n, ans);
}

