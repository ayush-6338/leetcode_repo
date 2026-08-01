class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder sb = new StringBuilder();
        Arrays.sort(strs,Comparator.comparingInt(String::length));
        System.out.println(Arrays.toString(strs));
        int i = 0;
        int len = strs[0].length();

        while(i<len){
            char ch = strs[0].charAt(i);
            boolean flag = false;
            for(String st : strs){
                if(ch == st.charAt(i)){
                    flag = true;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                sb.append(ch);
            }
            else{
                return sb.toString();
            } 
            i++;

        }

        return sb.toString();    
    }
}