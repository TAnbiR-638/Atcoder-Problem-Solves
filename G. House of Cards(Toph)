//https://toph.co/arena?practice=66361e72191c41e5db526633#!/p/662a758e8c6fcaa158110f6c

....................................................

vector<ll>v;

void calc(){
    
    p=2; q=2;
    
    v.push_back(2);
    
    for(i=1;;i++){ //i<=25819888
        
        q=q+3;
        
        ll h=p+q;
        
        if(h>1000000000000000){
            break;
        }
        
        v.push_back(h);
        
        //cout<<v[v.size()-1]<<" ";
        
        p=h;

    }
    
    //cout<<v.size()<<" "<<v[v.size()-1]<<endl;


};

void solve(){
    
    
    cin>>n;
    
    ans=lower_bound(v.begin(),v.end(),n)-v.begin();
    
    if(v[ans]==n){
        cout<<ans+1<<endl; return;
    }
    
    cout<<ans<<endl;
    
    
       
};

...................................................................
