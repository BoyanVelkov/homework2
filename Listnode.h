#ifndef LISTNODE_H_INCLUDED
#define LISTNODE_H_INCLUDED

template< typename NODETYPE > class List;

template< typename NODETYPE>
class ListNode
{

    friend class List< NODETYPE >;

public:

    ListNode( const NODETYPE & );

    NODETYPE getData() const;
private:

    NODETYPE data;
    ListNode< NODETYPE > *nextPtr;
};

template< typename NODETYPE>
ListNode< NODETYPE >::ListNode( const NODETYPE &info )
    : data( info ), nextPtr( 0 ) {}


template< typename NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const
{
    return data;
}

#endif // LISTNODE_H_INCLUDED
