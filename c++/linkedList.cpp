#include<iostream.h>

class node
{
      int elem;
      node *next;
      
      friend class linked_list;
};

class linked_list
{
      private:
              node * start;
              
      public:
             linked_list(){start = NULL;}
             void append(int);
             void print();
             void reverse();
};

void linked_list::append(int n)
{
     node * curr = start;
     node * temp = new node;
     
     temp->elem = n;
     temp->next = NULL;
     
     if(curr == NULL)
     {
         start = temp;
     }
     else
     {
         while(curr->next != NULL)
              curr = curr->next;
              
         curr->next = temp;
     }
     print();
}

void linked_list::print()
{
     node * curr = start;
     
     while(curr != NULL)
     {
         cout<<curr->elem<<"->";
         curr = curr->next;
     }
     cout<<endl;
}

void linked_list::reverse()
{
     node * temp = NULL;
     node * curr = start;
     
     while(curr != NULL)
     {
             start = curr->next;
             curr->next = temp;
             temp = curr;
             curr = start;
             start = temp;
     }
     print();
}


int main()
{
    linked_list l;
    int option;
    int number;
        
    do
    {

    cout<<"\n****************************"<<endl;
    cout<<"1.append"<<endl;
    cout<<"2.print"<<endl;
    cout<<"3.reverse"<<endl;
    cout<<"0.exit"<<endl;
    cout<<"****************************"<<endl;
    cout<<"enter an option: ";
    cin>>option;
    
    switch(option)
    {
         // appending operation to linked list
         case 1:
              cout<<"enter the number to append = ";
              cin>>number;  
              l.append(number);
              break;

         case 2: 
              l.print();
              break;
         
         case 3:
              l.reverse();
              break;
              
         case 0:
         default:
              option = 0;
              break;
    } 
    
    }while(option != 0);
    
    return 0;
}
              
