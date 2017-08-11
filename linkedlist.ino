#include "LinkedList.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  randomSeed(analogRead(0));
  linkedList myList;
  for(int i=0;i<10;i++){
    addLast(myList,random(10));
  }
  listExplorer(myList); 
  node* found=findNode(myList,2);
  if(found==NULL){
    Serial.println("NODE NOT FOUND");
  }
  else{
    Serial.println("NODE FOUND");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
