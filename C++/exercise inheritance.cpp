 #include<iostream>
 using namespace std ;
class cricketer
 {
 	public :
		int c_id,run[5],i;
		char name[20];
		
		void inputdata()
	    	{
	    			cout<<"ENTER cricketer id ";
	    			cin>>c_id;
	    			cout <<"ENTER NAME ";
	    			cin>>name;
	    			cout<<"Enter runs of 5 matches ";
	    			for(i=0 ,i < 5,i++)
	    			{
	    				cout<<"match"<<i+1<<" = "
	    				cin>>run[i];
	    				
					}
			}
 	
 };
 
class batsman : public cricketer
 {
 	int total_run = 0,avg_run,best_p;
 	public :
 		void avg()
 		{
 				for(i=0,i<5,i++)
 				{
 					total_run = total_run + run[i];
 				
				}
				avg_run = total_run/5;
				
				
		}
		void best()
		{
			best_p = run[0];
			for(i=0,i<5,i++)
			{
				if ()best_p < run[i])
				{
					best_p = run [i];
					
				}
			}
			
		}
		void display ()
		avg();
		best();
		cout<<"cricketer id = "<<c_id ;
		cout<<"\nName = "<<name;
		cout<<"average "<<avg_run;
		cout<<"best perform"<<best_P
		}
 	
 };
 main()
 {
 	batsman obj;
 	obj.inputbata();
 	obj.display();
 }