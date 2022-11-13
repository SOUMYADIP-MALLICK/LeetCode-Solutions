class Solution {
public:
    string reverseWords(string s) {
     string reverse; 
     int i=0;
    while (i <s.length())
    {   
        //for counting the spaces in the string
        while(i<s.length() && s[i]==' ')
        {
            i=i+1;
        }
        // for counting the non space char in the string
        int j=i+1;
        while(j<s.length() && s[j]!=' ')
        {
            j=j+1;
        }
        if(i>=s.length())
            break;
         string finall = s.substr(i,j-i); //for finding the substring
        
        //for making the string reverse
         if(reverse.length()==0)
             reverse=finall;
            else 
                reverse=finall+' '+reverse;
        i=j+1;
         
    }
        return reverse;
    }
};
