
        int n=matrix.size();
        int m=matrix[0].size();
        int lo=0;
        int hi=(n*m)-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(matrix[mid/m][mid%m]==target)
                return true;
                else if(matrix[mid/m][mid%m]<target)
                    lo=mid+1;
            else
                hi=mid-1;
        }
        return false;