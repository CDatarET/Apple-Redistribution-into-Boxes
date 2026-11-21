class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
        int apl = 0;
        for(int i = 0; i < apple.length; i++){
            apl += apple[i];
        }

        Arrays.sort(capacity);
        int s = 0;
        int ret = 1;
        for(int i = capacity.length - 1; i >= 0; i--){
            s += capacity[i];
            if(s >= apl){
                return ret;
            }

            ret++;
        }

        return -1;
    }
}
