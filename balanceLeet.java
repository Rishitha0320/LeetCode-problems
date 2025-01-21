import java.util.*;

public class balanceLeet {
    boolean balance(String s){

        Stack<Character>st=new Stack<>();
        for(int i=0;i<s.length();i++){
          if(s.charAt(i)=='{' ||
            s.charAt(i)=='(' ||
            s.charAt(i)=='[' )
         {
             st.push(s.charAt(i));
          }
          else{
             if(
                !st.isEmpty() && //check stack not empty
                
                ((st.peek()=='('&& s.charAt(i)==')') ||
                (st.peek()=='{'&& s.charAt(i)=='}') ||
                (st.peek()=='['&& s.charAt(i)==']')
                )
                ){
                st.pop();
             }
             else{ //for extra close /open braces 
                return false;
             }

          }
        
        }
        if(st.isEmpty()){
            return true;
          }
          return false;
    }
    
    public static void main(String[] args) {
        balanceLeet bl = new balanceLeet();
    System.out.println( bl.balance("[{()}]"));

    }
}

