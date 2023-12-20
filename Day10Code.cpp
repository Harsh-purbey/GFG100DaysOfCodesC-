vector<int> valueEqualToIndex(int arr[], int n) {
        std::vector<int>result;
        for(int i=1;i<=n;i++){
            if(arr[i-1]==i){
                result.push_back(arr[i-1]);
            }
        }
        return result;
    }

