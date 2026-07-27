/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {
    if(head==null || head.next==null)return head;
    let curr=head;
    let st=[];
    while(curr!=null){
        st.push(curr);
        curr=curr.next;

    }
    curr=head;
    let Next=curr.next;
    const total=Math.floor(st.length/2);
   for(let i=0;i<total;i++){

        let ste=st.pop();
        curr.next=ste;
        if(ste!=null)ste.next=Next;
        curr=Next;
       if(Next!=null) Next=Next.next;
        
    }
    curr.next=null;
 
    
};