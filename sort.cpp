#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn insertionSort
\brief Sort data passed in parameter
\param [in] data The data set that will be sorted

*/
/*void insertionSort(auto& data);//prototype

void insertionSort(auto& data)
{
	
	
	int passes=0;
	for(int i=0; i<data.size()-1; i++)
		{
			int j=i+1;
			while (j>0 and data[j-1]>data[j])
				{
					swap (data[j],data[j-1]);
					j=j-1;
				}
			passes=passes+1;
		
			if (passes%20000==0)
				{
					cout << "You have completed " << passes << " passes.";
				}
				
		}

}*/

void selectionSort (auto& data)
{
int passes = 0;
	for (int i=0; i<data.size(); i++)
	{
		int min=i;
		for (int j=i+1; j<data.size(); j++)
			{
				if (data[j]<data[min])
					min=j;
			}
			swap (data[i],data[min]);
                        passes = passes+1;
		if (passes % 20000 == 0)
				{
					cout << "You have completed " << passes << " passes.";
				}
				

	}
}
		



int main()
{
  vector<string>inputs;
  string input;
  
   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the # (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
  selectionSort(inputs);
  /*for (int i=0; i<inputs.size();i++)	
		{
			cout << inputs[i] << " ";
		}*/
 /* cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
    cout<<"Enter a value to search for: ";


   cin>>search_key;
 
    while(search_key != "#")//perform searches until sentinel entered
    {
        result = linearSearch(inputs,search_key);

        cout<<"  '"<<search_key<<"' was ";

        if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;


        cout<<endl<<endl<<"Enter a value to search for: ";
        cin>>search_key; 
    }

   cout<<endl<<"Program \"search it\" is now finished."<<endl<<endl;*/

    return 0;
}
