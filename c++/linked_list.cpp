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
             void merge(linked_list);
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

void linked_list::merge(linked_list l)
{
     node * temp1 = start;
     node * temp2 = l.start;
     cout<<"l.start = "<<l.start->elem<<endl;    
 
     print();
}

int main()
{
    linked_list l1,l2;
    int option;
    int number;
        
    do
    {

    cout<<"\n****************************"<<endl;
    cout<<"1.append"<<endl;
    cout<<"2.append one more list"<<endl;
    cout<<"3.print"<<endl;
    cout<<"4.reverse"<<endl;
    cout<<"5.merge"<<endl;    
    cout<<"0.exit"<<endl;
    cout<<"****************************"<<endl;
    cout<<"enter an option: ";
    cin>>option;
    
    switch(option)
    {
         case 1:
              cout<<"enter the number to append = ";
              cin>>number;  
              l1.append(number);
              break;

         case 2:
              cout<<"enter the number to append = ";
              cin>>number;  
              l2.append(number); 
              break;

         case 3: 
              l1.print();
              l2.print();
              break;
         
         case 4:
              l1.reverse();
              break;
              
         case 5:
              l1.merge(l2);
              break;
              
         case 0:
         default:
              option = 0;
              break;
    } 
    
    }while(option != 0);
    
    return 0;
}
              
