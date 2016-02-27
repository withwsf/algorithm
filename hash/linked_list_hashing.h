#ifndef LINKED_LIST_HASHING
#define LINKED_LIST_HASHING
struct ListNode;
struct HashTable;
typedef HashTable* ptrHash;
typedef ListNode* ptrNode;
typedef ptrNode* ptrLists;
ptrHash initHash(int tableSize);
void destroyHash(ptrHash H);
ptrNode findHash(char* key,ptrHash H);
void insertHash(char* key,ptrHash H);
bool deleteHash(char* key,ptrHash H);
int hashFunction(char* key,int tableSize);
#endif // LINKED_LIST_HASHING

