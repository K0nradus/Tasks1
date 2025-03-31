import java.io.*;
import java.net.InetAddress;
import java.net.Socket;
import java.net.UnknownHostException;

public class Main {
    public Main() throws UnknownHostException {
    }
    public static void main(String[] args) throws IOException {
        InetAddress adresse = InetAddress.getByName("www.google.de");
        Socket socket = new Socket(adresse, 80);
        PrintWriter pw = new PrintWriter(socket.getOutputStream());
        pw.println("GET / HTTP/1.0");
        pw.println("Host: www.google.de");
        pw.println("");
        pw.flush();
        BufferedReader br = new BufferedReader(new InputStreamReader(socket.getInputStream()));
        String str = "";
        String answer = "";
        String setCookieString = "Set-Cookie:";
        while ((str=br.readLine())!=null) {
            answer = answer + str;
            if (str.contains(setCookieString)) {
                System.out.println("Cookie-Zeile: " + str);
            }
        }
    }
}