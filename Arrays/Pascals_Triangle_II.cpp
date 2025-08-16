vector<int> pascalTriangleII(int r) {
    vector<int> pascal;
    int last;
    for (int i=1; i<=r; i++){
        last = ((i*(i-1))/2) - 1;
        for (int j=1; j<=i; j++){
            if (j==1 || j==i)
                pascal.push_back(1);
            else
                pascal.push_back(pascal[last+j-i] + pascal[last+j-i+1]);
        }
    }
    vector<int> res(pascal.begin()+last+1, pascal.begin()+last+1+r);
    return res;
}