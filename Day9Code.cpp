//User function template for C++
class Solution{
public:
bool fascinating(int n)
{
    int temp[10] = {0};
    int x=n;
    
    
    
    for(int i = 1; i<=3; i++,n=x*i){
            int num=n;
            
        while(num>0){
            int r=num%10;
            if(temp[r]!=0)
            return false;
            temp[r]++;
            num=num/10;
           
        }
        
    }
    
    for(int i =1; i<10; i++)
    {
        if(temp[i]==0)
        return false;
    
    }
    return true;
   


}
	
};