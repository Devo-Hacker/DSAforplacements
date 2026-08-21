class Solution {
    public int elevatorRequests(int n, int[] requests) {
        int previous = 0, count = 0;
        for(int i = 0; i<requests.length; i++){
            count+=Math.abs(requests[i] - previous);
            previous = requests[i];
        }
        return count;
    }
}

