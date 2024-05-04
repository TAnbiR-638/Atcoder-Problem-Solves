//link: https://toph.co/arena?practice=6635e5793339b2e425ad4aa7#!/p/662a757e8c6fcaa158110f69

//Code: 

string s,s2="";
    
    getline(cin,s);
    
    s2+=s;
    
    
    string s3="";
    s3+=" I love you!";
    
    
    n=s2.size();
    
    for(i=1;i<=26;i++){
        
        for(j=0;j<n;j++){
            
            if(islower(s2[j]) || isupper(s2[j])){
            
                   s2[j]++;
                   
                   if(islower(s2[j])==0 && isupper(s2[j])==0){
                        s2[j]-=26;
                   }
               
               
            }
            
        }
        
        //cout<<s2<<endl;
        
        m=0;
        
        for(ll ii=0;ii<n-11;ii++){
        
            string s4="";
       
            for(ll jj=ii;jj<=ii+11;jj++){
           
                s4+=s2[jj]; 
            }
       
            if(s4==s3){
                m++;
            }
        }
        
        if(m==1){
           cout<<s2<<endl; return; 
        }
        
    }
