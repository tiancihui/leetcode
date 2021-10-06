struct LRUNode{
    LRUNode(std::string key, std::string value)
    :_pre(NULL), _next(NULL),_value(value),_key(key)   {

    }
	pLRUNode _pre;
	pLRUNode _next;
	std::string _value;
	std::string _key;
}LRUNode, *pLRUNode;


class LRUCache {
  public:

  LRUCache(int length):_length(length),_head(NULL){
     
  } 

  ~LRUCache(){
  
  }

  void put(std::string key, std::string value){
      unorder_map<int, pLRUNode>::iterator it = Cache.find(key);
      if (it != Cache.end()){
         it->second._value = value ;
         deleteFromList(it->second);
         addToListHead(it->second);
         return;
      }

      if (Cache.length() > _length ){
         deleteTailFromList();
      }

       pLRUNode now = new LRUNode(key, value);
       addToListHead(it->second);
       return;
  } 

  std::string get(std::string key){
      std::string value = "";

      unorder_map<int, pLRUNode>::iterator it = Cache.find(key);
      if (it == Cache.end()){
          return value;
      }

      deleteFromList(it->second);
      addToListHead(it->second);
  } 

  void deleteFromList(pLRUNode pNode){
     pLRUNode pre = pNode->_pre;
     pLRUNode next = pNode->_next;
     pre->next = next;
     next->pre = pre;
  }

  void deleteTailFromList(){
     pLRUNode pre = _tail->_pre;
     pre->_next = NULL;
     delete _tail;
     _tail = pre;
  }

  void addToListHead(pLRUNode pNode){
     pNode->_pre = NULL;
     pNode->_next = _head;
     _head = pNode;
  }

  private:
  unorder_map<std::string, pLRUNode> Cache;
  pLRUNode _head;
  pLRUNode _tail;
  int _length;
}
