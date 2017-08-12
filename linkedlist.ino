#include "LinkedList.h"

linkedList myList;

void testLinkedList(){
  initLinkedList(myList);
  randomSeed(analogRead(0));
  for(int i=0;i<10;i++){
    addLast(myList,random(10));
  }
  listExplorer(myList); 
  node* found=findNode(myList,2);
  Serial.println("FOUND NODE DATA = 2");
  if(found==NULL){
    Serial.println("NODE NOT FOUND");
  }
  else{
    Serial.println("NODE FOUND");
    Serial.print("Data = ");
    Serial.println(found->data);
  }
  found = findMax(myList);
  Serial.println("FOUND MAX DATA NODE");
  if(found==NULL){
    Serial.println("NODE NOT FOUND");
  }
  else{
    Serial.println("NODE FOUND");
    Serial.print("Data = ");
    Serial.println(found->data);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  testLinkedList();
  delay(10000);
}
