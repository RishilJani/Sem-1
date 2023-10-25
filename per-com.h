//nCr - nPr
int nCr(int n,int r){
	int i=1,nf=1,nr=1,rf=1;
	int ans;
	//n!
	while(i<=n){
		nf=nf*i;
		i++;
	}
	//(n-r)!
	for(i=1;i<=(n-r);i++){
		nr=nr*i;
	}
	//r!
	i=1;
	while(i<=r){
		rf=rf*i;
		i++;
	}
	
	ans =nf/(nr*rf);
	return ans;
}
int nPr(int n,int r){
	int i=1,nf=1,nr=1;
	int ans;
	//n!
	while(i<=n){
		nf=nf*i;
		i++;
	}	
	//(n-r)!
	for(i=1;i<=(n-r);i++){
		nr=nr*i;
	}
	ans = nf/nr;
	return ans;
}
