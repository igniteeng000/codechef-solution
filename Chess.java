import java.util.Scanner;

class Chess
{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        String[][] str = new String[N][6];

        for (int i = 0; i < N; i++)
        {
            for(int j=0;j<6;j++) {
                str[i][j] =sc.next();
            }
        }

        for(int i=0;i<N;i++)
        {
            if(str[i][4]=="rated"&&str[i][5]=="random")
            {
                for(int j=i+1;j<N;j++)
                {

                }
            }
        }
    }
}
