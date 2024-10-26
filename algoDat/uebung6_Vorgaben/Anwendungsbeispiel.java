public class Anwendungsbeispiel {
   public static void main(String[] args) {
      Zahlungsmittel geld[]= {new USD_Muenze(0.10), new USD_Schein(20),   new SFR_Schein(5),
                              new SFR_Muenze(0.50), new USD_Muenze(0.50), new EUR_Schein(50),
                              new USD_Schein(100),  new USD_Muenze(0.2),  new USD_Muenze(0.25),
                              new EUR_Muenze(0.01), new SFR_Schein(200),  new USD_Schein(100),
                              new EUR_Muenze(2),    new EUR_Schein(5),    new USD_Muenze(0.25),
                              new SFR_Muenze(0.10), new SFR_Muenze(0.01), new USD_Muenze(0.50),
                              new USD_Schein(100),  new USD_Schein(100),  new USD_Muenze(0.2),
                              new USD_Muenze(0.01), new SFR_Schein(20),   new SFR_Muenze(0.50),
                              new USD_Muenze(0.50), new EUR_Schein(50),   new USD_Schein(5),
		              new EUR_Muenze(0.50), new EUR_Muenze(0.01), new SFR_Schein(10),
		              new SFR_Schein(20),   new SFR_Muenze(0.50), new SFR_Muenze(0.02)};
     int countUngueltig = 0;
     int i;
     int k = 0;
      for ( i = 0; i < geld.length;i++ ) { //gibt gueltige werte aus.
          if (geld[i].wertIstGueltig()) {
              System.out.print(geld[i].getWert() +geld[i].getWaehrung()+ " ");
          }
          else{
              countUngueltig++;
          }
      }
       System.out.println("Anzahl der gueltigen Eintraege: "+ (i - countUngueltig));//anzahl gueltiger Eintraege.
      Zahlungsmittel geldGueltig[] = new Zahlungsmittel[geld.length - countUngueltig];
      for (int j = 0; j < geld.length; j++){ //schreibt gueltige werte von geld in hilfsarray.
          if (geld[j].wertIstGueltig()){
              geldGueltig[k] = geld[j];
              k++;
          }
      }
      geld = geldGueltig; // ersetzt geld mit nur gueltigen eintraegen.
       double totalEUR = 0, totalUSD = 0 , totalSFR = 0;
       for (int j = 0; j<geld.length;j++){ // Gesamtwerte der verschiedenen Waehrungen.
           if (geld[j].getWaehrung() == "EUR"){
               totalEUR += geld[j].getWert();
           }
           if(geld[j].getWaehrung() == "USD"){
               totalUSD += geld[j].getWert();
           }
           if(geld[j].getWaehrung() == "SFR"){
               totalSFR += geld[j].getWert();
           }
       }
       System.out.println("Total EUR: " +totalEUR+" Total USD: "+ totalUSD+ " Total SFR: "+ totalSFR);
       double totalWeight = 0, totalArea = 0, coinTower = 0; // ermittelt gesamt Gewicht, gesamt Area, Muenzstapel
       for (int j = 0; j< geld.length;j++){
           if(geld[j] instanceof Muenze){
               totalWeight += ((Muenze)geld[j]).getGewicht();
               coinTower += (((Muenze) geld[j]).getDicke()) /10 ;
           } else if (geld[j] instanceof Schein) {
               totalArea += (((Schein) geld[j]).getBreite() /10) * (((Schein) geld[j]).getLaenge() / 10);
           }
       }
       System.out.println("Weight coins: "+ totalWeight+ " gramms. " + " Area notes: "+totalArea+ " squarecms.\n" + "Height coin tower: " + coinTower+" cm.");
       SortierungComparable.mergesort(geld);
       for(int j = 0; j< geld.length;j++){
           System.out.print(geld[j].getWert()+ " ");
       }
   }
}
