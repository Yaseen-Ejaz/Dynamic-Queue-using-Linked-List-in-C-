#include <iostream>
using namespace std;

class node
{
	private:
    int data;
    node* next;
    node* head;
    node* ptr;
    
    public:
    void enqueue(int value)
    {
        node *temp = new node();
        temp->data=value;
        temp->next=NULL;

        if(head==NULL)
        {
            head=temp;
        }

        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
    }

    void dequeue()
    {
        node *temp=head;
        head=temp->next;
        delete temp;
    }

    bool Empty()
    {
        if(head==NULL)
        return true;

        else
        return false;
    }

    int show()
    {
        if(head!=NULL)
    	{
    		ptr=head;
            while(ptr->next!=NULL)
            {
                cout<<"\t"<<ptr->data;
                ptr=ptr->next;
            }
            cout<<"\t"<<ptr->data;
		}
        
        else return 0; 
        
    }
};

int main()
{
	cout<<"\t\t\tQUEUE";
    node n;
    int value,opt;

    do
    {
        cout<<"\n\nWould you like to\n1.Enqueue\n2.Dequeue\n3.Exit\nEnter the number : ";
        cin>>opt;

        if(opt==1)
        {
            cout<<"\n\nEnter a value : ";
            cin>>value;
            n.enqueue(value);
            cout<<endl<<endl;
            n.show();
        }

        else if(opt==2)
        {
            cout<<endl<<endl;
            
            if(n.Empty())
            {
                cout<<"QUEUE IS EMPTY";  
            }

            else
            n.dequeue();
            
            n.show();
        }

    } while (opt != 3);
    
}
