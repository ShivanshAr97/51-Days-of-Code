import java.io.*; // for handling input/output
import java.util.*; // contains Collections framework

class Main{
    static boolean helper(int x,int val){
        while(x>0){
            if(x%val==7){
                return false;
            }
            x/=val;
        }
        return true;
    }
    public static void main (String[] args) {
        // Your code here
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int ans=0;
        for(int i=1;i<=N;i++){
            if(helper(i,10)&&helper(i,8)){
                ans++;
            }
        }
        System.out.print(ans);
}
}