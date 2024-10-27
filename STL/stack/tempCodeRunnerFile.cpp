vector<int>area;
for(int n=0;n<left.size();n++){
area.push_back(arr[n]*width[n]);
}

int z=*max_element(area.begin(),area.end());

cout<<"area: "<<z;
