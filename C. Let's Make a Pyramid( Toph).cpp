//Link: https://toph.co/arena?practice=6635e5793339b2e425ad4aa7#!/p/662a753e8c6fcaa158110f52

//Code:
''''''''''''''''''''''''''''''''''''''''''''''''
 cin>>n;
    
    ll a[n+5];
    
    map<ll,ll>mp;
    set<ll>st;
    
    vector<pair<ll,ll>>vp;
    
    for(i=0;i<n;i++){
        
        cin>>a[i];
        
        st.insert(a[i]);
        
        mp[a[i]]++;
    }
    
    vector<ll>v(st.begin(),st.end());
    
    for(i=0;i<v.size();i++){
        vp.push_back({mp[v[i]],v[i]});
    }
    
    sort(vp.begin(),vp.end());
    
    for(i=0;i<vp.size();i++){
        cout<<vp[i].second<<" ";
    }
    
    cout<<endl;

..............................................................
    
