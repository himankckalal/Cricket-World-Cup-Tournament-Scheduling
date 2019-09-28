    #include<bits/stdc++.h>
    using namespace std;
    void fun(int arr[],int first,int second,int count,int *result, int prev1, int prev2)
    {
    	if(count>45)
    		return ;
    	if(count % 7==0 || count>41)
    		first = 10;
    	//for 
        
    	if  (count<41  && (first==second || ((first==prev1 || first==prev2 )||( second == prev1 || second ==prev2)) || ( *((result+first*10)+second) ==1 || *((result+second*10)+first) ==1   )))
    	{
    		while(first==second || ((first==prev1 || first==prev2 )||( second == prev1 || second ==prev2)) ||  (  *((result+first*10)+second) ==1 || *((result+second*10)+first) ==1 ) )
    		{
    			first = rand()%9 +1 ;  
    			second = rand() % 9 +1 ;
    		}
    	}
        string days[] ={"SUNDAY","MON","TUE","WED","THRU","FRI","SAT"};
        string s[] = {"Australia" , "New Zealand", "Kenya", "Bangladesh","Pakistan","Afganistan","England","South Africa","Sri Lanka","India"};
    	cout<<"Match Between"<<setw(15)<<s[first-1]<<setw(15)<<s[second-1]<<setw(10)<<" ON "<<setw(10)<<days[count%7]<<" "<<count<<endl;
        *((result+first*10)+second) ==1;
    	*((result+second*10)+first) ==1;
    	prev1 = first;
    	prev2 = second;
    	fun(arr , rand()%9+1 , rand()%9+1 , count+1 , (int*)result,prev1,prev2);
    }
    
    int main()
    {
        int arr[] = {6,8,1,4,5,3,7,2,9,10};
    	int count=1;
    	int result[10][10] = {0};
    	for(int i=0;i<10;i++)
    	{
    		for(int j=0;j<10;j++)
    		{
    			if(i==j)
    			{
    				result[i][j]=1;
    				result[j][i]=1;
    				
    			}
    		}
    	}
    	int first = 6;
    	int prev1 = 0;
    	int prev2 = 0;
    	int second = 8;
        fun(arr,first,second,count,(int*)result,prev1,prev2);
    return 0;
    }