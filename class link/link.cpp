#include <iostream>

template <class T>
class link
{
	struct node
	{
		T dato; 
		node * p_next; 
		//nullptr para c++11, en vez poner 0 o NULL
		node(const T & d, node *n= NULL)
		{
			dato = d; 
			p_next = n; 
		}
	};
	
	public: 
	class iterator
	{
		private: 
			node * n; 
		public: 
		
			iterator(node * _n = NULL)		//constructor
			{
				n = _n; 
			}
			
			~iterator() = default;
			
			T & operator *() 				//contenido
			{
				return n->dato; 
			}
			
			iterator & operator ++()			//mueve el sgnte
			{
				n = n->p_next; 
				return * this; 
			}
			
			iterator & operator --()			//mueve el sgnte
			{
			//	node * temp =p_head;
			//	temp = p_head->p_next; 
			//	node  * p_befor; 
			//	n = n<-p_befor;
			//	n--;
				//return * this; 
			}
			
			bool operator != (const iterator & it)
			{
				return n!= it.n; 
			}
	};
	

	private:
		node * p_head; 
	
	public: 
		link():p_head(NULL){	}
		~link()
		{
			//node * del = p_head; 
			//while(del)
			//{ p_head = del->p_next; 
			//	delete del; 
			//	del = p_head; 
			//}
			while(p_head) remove_front(); 
		}
		void push_front( const T & d)
		{
			p_head = new node (d, p_head);
		}
		
		void push_back(const T & d)
		{
		
			if(p_head==NULL)
			{
				p_head=new node(d,NULL);
				return;
			}			
			
			node *temp= p_head;
			while(temp->p_next != NULL)
			{
				temp=temp->p_next;
			}
			temp->p_next=new node(d,NULL);
			
		}
		
		void find ( const T & d)
		{
			node *temp= p_head;
			while(temp != NULL)
			{
				if (temp->dato == d){
					std::cout<< "si existe"<<std::endl;
					return;
				}
				
				temp=temp->p_next;
				
			}
			std::cout<<" no exite";
		}
		
		void remove_front()
		{
			if(!p_head) return; 
			node * del = p_head; 
			p_head = p_head ->p_next;
			delete del; 
		}
		
		iterator begin()
		{
			return iterator (p_head);
		}
		
		iterator end()
		{
			return iterator(NULL);
		}
	
};

int main()
{
	link <int> li; 
	li.push_front(4);
	li.push_front(8);
	li.push_front(0);
	li.push_front(29);
	li.push_front(41);	
	li.remove_front();
	li.remove_front();
	
	for(link<int>::iterator it = li.begin(); it!= li.end(); ++ it)
	{
		std::cout<< *it<<" ";
	}
	std::cout<<std::endl;
	
	li.push_back(13);
	for(link<int>::iterator it = li.begin(); it!= li.end(); ++ it)
	{
		std::cout<< *it<<" ";
	}
	std::cout<<std::endl;
	li.find(9) ;
	
	for(link<int>::iterator it = li.end(); it!= li.begin(); -- it)
	{
		std::cout<< *it<<" ";
	}
	std::cout<<std::endl;
}
