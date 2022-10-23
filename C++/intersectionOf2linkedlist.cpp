#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *nxt;
    node (int x) {
        data = x;
        nxt = NULL;
    }
};


int main() {
    node *joint = new node(10);
    joint->nxt = new node(12);
    joint->nxt->nxt = new node(15);

    node *head1 = new node(5);
    head1->nxt = new node(8);
    head1->nxt->nxt = new node(7);
    head1->nxt->nxt->nxt = joint;

    node *head2 = new node(9);
    head2->nxt = joint;

    
    // find this joint node by only using head1 and head2


    // Method1 : hash table of address  ((  here the time and space complexity are O(m+n) & O(m) ))
    //                                          here m and n are the length of LL 1 and LL 2
    // so here we'll create a hash table (or unordered set) of all nodes starting from head 1 till null and then 
    // we'll start traversing each node from head 2 , and as soon as we'll see if any node's address matches with 
    // any  address present in hash table then we'll return that node 



    // Method2 : 
    // 1) count nodes in both the linked list . let count be C1 and C2
    // 2) traverse the bigger LL by abs(c1 - c2) times
    // 3) traverse both the lists symultaneosly until we see a common node 

    node *c1 = head1,*c2 = head2,*which = NULL,*other = NULL;
    int cnt1=0,cnt2=0;
    while (c1 != NULL) {
        cnt1++;
        c1 = c1->nxt;
    }
    while (c2 != NULL) {
        cnt2 ++;
        c2 = c2->nxt;
    }
    int diff = abs(cnt1 - cnt2);
    if (cnt1 > cnt2) {
        which = head1;
        other = head2;
    } else {
        which = head2;
        other = head1;
    }
    while (diff >= 0) {
        which = which->nxt;
        diff --;
    }
    while (which == other) {
        which = which->nxt;
        other = other->nxt;
    }



    cout<<(which->data)<<endl;


    //printing the linked list 
    // node *pri = head2;
    // while (pri != NULL) {
    //     cout<<(pri->data)<<endl;
    //     pri = pri->nxt;
    // }

}
