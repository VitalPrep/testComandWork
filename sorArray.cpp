#include <iostream>
#include <cstring>
#define N 15
using namespace std;

int main() {
	float arr[N], copy[N],temp;
	int i,j;
	cout<<"Input "<<N<<" numbers\n";
	for(i=0;i<N;++i)
	  cin>>arr[i];
	
	//создаем копию элементов массива
	memcpy(copy,arr,N*sizeof(float));
	/*аналог memcpy
	for(i=0;i<N;i++)
	  copy[i]=arr[i];
	*/
	
	cout<<"Array:\n";
	  for(i=0;i<N;i++)
	    cout<<copy[i]<<"  ";
	
	//пузырьковая сортировка - классичекий вариант
	
	for(i=0;i<N;++i)
	  for(j=0;j<N-1-i;j++){
	  	if(copy[j]>copy[j+1]){
	  		temp=copy[j];
	  		copy[j]=copy[j+1];
	  		copy[j+1]=temp;
	  	}
	  }
	  
	  cout<<"\nSort array:\n";
	  for(i=0;i<N;i++)
	    cout<<copy[i]<<"  ";
	  
	memcpy(copy,arr,N*sizeof(float));
	//пузырьковая сортировка - улучшенный вариант
 
    int flag;
    i=0;
	do{
		flag=0;
	   for(j=0;j<N-1-i;j++){
	  	if(copy[j]>copy[j+1]){
	  		temp=copy[j];
	  		copy[j]=copy[j+1];
	  		copy[j+1]=temp;
	  		flag++;
	  	}
	  }
	  i++;
	}while(flag);
 
	  cout<<"\nSort array:\n";
	  for(i=0;i<N;i++)
	    cout<<copy[i]<<"  ";
	    
	 memcpy(copy,arr,N*sizeof(float));
	 
	 // линейные сортировки
	 //сортировка со вставками
	 
	 for( i=1;i<N;i++){
		for( j=i; j>0 && copy[j-1]>copy[j];j--){
			
			temp=copy[j-1];
			copy[j-1]=copy[j];
			copy[j]=temp;
		}
	}
	 
	 cout<<"\nSort array:\n";
	  for(i=0;i<N;i++)
	    cout<<copy[i]<<"  ";
	    
	 memcpy(copy,arr,N*sizeof(float));
	 
	 //сортировка со вставками - еще один вариант
	 
	 for( i=0;i<N;i++){
		for( j=i+1; j<N;j++){
		if(copy[i]>copy[j]){	
			temp=copy[i];
			copy[i]=copy[j];
			copy[j]=temp;
		    }
	    }
	 }
	 
	 cout<<"\nSort array:\n";
	  for(i=0;i<N;i++)
	    cout<<copy[i]<<"  ";
	return 0;
}
