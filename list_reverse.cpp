struct ListNode {
   pListNode _next;
   int _data;
}ListNode,*pListNode;

pListNode RevertList(pListNode head){
	if (head == NULL || head->_next == NULL) {
	    return head;
	}

	pListNode now = head;
	now->next = NULL;

	pListNode next = head->next;
	while (next != NULL) {
        pListNode temp = next->_next;
        next->_next = now;
        now = next;
        next = temp;
	}

	return now;
}
