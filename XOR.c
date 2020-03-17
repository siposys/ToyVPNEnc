#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* XORCipher(char* data, char key, int dataLen) {
	char* output = (char*)malloc(sizeof(char) * dataLen);

	for (int i = 0; i < dataLen; ++i) {
		//output[i] = data[i] ^ key[i % keyLen];
		output[i] = data[i] ^ key;
	}

	return output;
}
int main(int argc, char** argv){
	
	char* text = (char*)"GeeksforGeeks";
	char key = 'P';
	int dataLen = strlen(text);
	
	char* cipherText = XORCipher(text, key, dataLen);
	printf("Encoded String: %s\n", cipherText);
	char* plainText = XORCipher(cipherText, key, dataLen);
	printf("Decoded String: %s\n", plainText);
	return 0;
	}

