#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int T, N, K, i, j, val, left, right, copy;
	vector<int> A;
	
	cin>>T;
	//cout<<T<<endl;
	while(T--)
	{
	    cin>>N;
	    for(i=0; i<N; i++)
	    {
	        cin>>val;
	        A.push_back(val);
	    }
	    cin>>K;
	    K--;
	    copy=K;

	    val=A[0];
	    left=0;
	    right=N-1;
	    j=0;
        while(true)
	    {
	        cout<<left<<" "<<right<<" "<<K<<endl;
	        for(auto it: A)
	            cout<<it<<" ";
	        cout<<endl;
	        
	        for(i=left; i<=right; i++)
	        {
	            if(A[i]<val)
	            {
	                j++;
	                //cout<<j<<" "<<i<<endl;
	                swap(A[j], A[i]);
	            }
	        }
	        //j++;
	        swap(A[left], A[j]);
	        cout<<j<<endl;


	        if(j== left+ K)
	        {
	            cout<<A[j]<<endl;
	            break;
	        }
	        else if(j> left+ K)
	        {
	            right=j-1;
                val=A[left];
            }
            else
	        {
	            left= j+1;
	            K=copy-j-1;
	            val= A[left];
	        }
	        j=left;
	    }
	    A.clear();
	}
	return 0;
}