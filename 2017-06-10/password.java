import java.math.BigDecimal;
import java.util.*;
import java.io.*;

public class password {
  public static void main(String args[]) {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    BufferedWriter log = new BufferedWriter(new OutputStreamWriter(System.out));
    int t = 0;
    try {
      t =  Integer.parseInt(br.readLine());
    } catch(IOException ioe) {
      //Handle exception here, most of the time you will just log it.
    }
    for (int i = 0; i < t; i++) {
      BigDecimal uno = new BigDecimal("1");
      int numero = 0;
      try {
        numero = Integer.parseInt(br.readLine());
      } catch(IOException ioe){
        //Handle exception here, most of the time you will just log it.
      }
      BigDecimal decimalB = new BigDecimal(numero);
      if(numero < 10000)
      uno = uno.divide(decimalB, 1000, BigDecimal.ROUND_HALF_UP);
      else if(numero < 30000)
      uno = uno.divide(decimalB, 50000, BigDecimal.ROUND_HALF_UP);
      else if(numero < 90000)
      uno = uno.divide(decimalB, 100000, BigDecimal.ROUND_HALF_UP);
      else
      uno = uno.divide(decimalB, 196000, BigDecimal.ROUND_HALF_UP);
      String tex = uno.toString().substring(2);
      int posEnc = 0, posBus = 1;


      posEnc = tex.indexOf(tex.charAt(0), posBus);
      for (int j = 1; ; j++) {
        if(tex.charAt(posBus) == tex.charAt(posEnc + j)) {
          //System.out.println("V");
          if(posBus == posEnc && posBus != 1)
          break;
          posBus++;
        } else {
          //System.out.println("F");
          posEnc = tex.indexOf(tex.charAt(0), posEnc + 1);
          posBus = 1;
          j = 0;
        }
      }
      try {
        log.write("0.");
        //System.out.println(posEnc);
        log.write(tex.substring(0,posEnc));
        log.write("\n");
        log.flush();
      } catch(IOException ioe){
        //Handle exception here, most of the time you will just log it.
      }
    }
  }
}
