class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxCount = 0;
        for(int i = 0; i < sentences.length; i++){
            int count = 0;
            for(int j = 0; j < sentences[i].length(); j++){
                if(j == 0 || sentences[i].charAt(j - 1) == ' '){
                    count++; 
                }
            }
            if(count > maxCount){
                maxCount = count; 
            }
        }
        return maxCount;
    }
}