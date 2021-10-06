int find_path_count() {
	int m = 8;
	int n = 9;
	int array[m][n] = {0};
	for(int i = 0; i < n; i++) {
	    array[0][i] = 1;
	}

	for(int j = 0; j < m; j++) {
	    array[j][0] = 1;
	}

	for( int i = 1; i <n; i++){
	    for( int j = 1; j <m; j++){
            array[i][j] =  array[i-1][j] +  array[i][j-1]
	    }
	}

	return array[m][n]
}
