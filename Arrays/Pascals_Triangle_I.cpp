int pascalTriangleI(int r, int c) {
    vector<int> pascal = {1, 1, 1};
    if (r<3)
        return 1;
    else {
        for (int i=3; i<=r; i++){
            int last = ((i*(i-1))/2) - 1;
            for (int j=1; j<=i; j++){
                if (j==1 || j==i)
                    pascal.push_back(1);
                else
                    pascal.push_back(pascal[last+j-i] + pascal[last+j-i+1]);
            }
        }
    }
    return pascal[((r*(r-1))/2) - 1 + c];
}