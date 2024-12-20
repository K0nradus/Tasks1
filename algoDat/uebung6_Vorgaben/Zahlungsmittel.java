
public abstract class Zahlungsmittel implements  Comparable<Zahlungsmittel>{
  private String waehrung;
  private double wert;
  protected Zahlungsmittel(String waehrung, double wert) {
	  this.waehrung = waehrung;
      this.wert = wert;
  }
  public String getWaehrung() {return waehrung;}
  public double getWert() {return wert;}
  public abstract boolean wertIstGueltig();
  public int compareTo(Zahlungsmittel zahlungsmittelToCompare) {
    if (wert > zahlungsmittelToCompare.getWert()) {
      return 1;
    }
    if (wert == zahlungsmittelToCompare.getWert()) {
      return 0;
    }
    else
      return -1;
    }

  public String toString() {
    return (wert + " " + waehrung);
  }
}

