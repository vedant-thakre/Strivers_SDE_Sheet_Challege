void markrow(vector<vector<int>>&v , int col ,int a){
    for(int i=0;i<col;i++){
        if(v[a][i] != 0){
            v[a][i] = -1;
        }
    }
}

void markcol(vector<vector<int>>&v , int row ,int b){
    for(int i=0;i<row;i++){
        if(v[i][b] != 0){
            v[i][b] = -1;
        }
    }
}

void setZeros(vector<vector<int>> &v)
{
	int row = v.size();
    int col = v[0].size();
	for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(v[i][j] == 0){
            markrow(v,col,i);
            markcol(v,row,j);
			}
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(v[i][j] == -1){
				v[i][j] = 0;
			}
		}
	}
}