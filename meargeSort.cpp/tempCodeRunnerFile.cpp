void combinesort(int a[],int x[],int y[],int s,int e){

int mid=(s+e)/2;
int i =s;
int j=mid+1;
int k=s;

while(i<=mid && j<=e){
if(x[i]<y[j]){
    a[k]=x[i];
    k++;
    i++;
}else{
    a[k]=y[j];
    k++;
    j++;
}

}
while(i<=mid){
       a[k]=x[i];
    k++;
    i++;
}
while(j<=e){
     a[k]=y[j];
    k++;
    j++;

}

}