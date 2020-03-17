 //HOME FUNCTION-ENCRYPTION DECRYPTION
    static byte[] encryptDecrypt(byte[] inputString){

        char xorKey = 'P';
        String outputString = "";
        int len = inputString.length;
        for (int i = 0; i < len; i++){
            outputString = outputString + Character.toString((char) (inputString[i] ^ xorKey));
        }
        System.out.println(outputString);
        byte[] retVal=outputString.getBytes();
        return retVal;
    }