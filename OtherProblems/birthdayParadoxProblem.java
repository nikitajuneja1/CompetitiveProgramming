//Birthday Paradox Problem
public class birthdayParadoxProblem{
    static double solve(double p){
        return Math.ceil(Math.sqrt(2*365*Math.log(1/(1-p))));
    }
    public static void main(String args[]){
        System.out.println(solve(1));
    }
}
