#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h> 

typedef struct{
  char data[1024]; 
  int prevHash; 
  int hash; 
  int nonce;  
}Block;

int hash(char data[]){
  
  int hash = 0; 
  
  for (int i = 0; i < strlen(data); i++){
    hash = hash ^ data[1]; 
    hash = hash + 0x12312323233432;      
  }
 
 return hash; 
}


int main(){
  
  Block genesis; 
  strcpy(genesis.data, "cryptoboy's first block"); //buffer overflow prone
  prevHash = 0; 
  char dataToHash[1024]; 
  sprintf(dataToHash,"%s%d", genesis.data, genesis.prevHash);  

  genesis.hash = hash(dataToHash); 

  return 0; 
 
  } 
