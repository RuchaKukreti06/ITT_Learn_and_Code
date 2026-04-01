import java.sql.Connection;

public class Database {

  public static void main(String[] args) {
    Connection connection = ConnectionProvider.openConnection();

    try {
      System.out.println("Executing database operation");
    } finally {
      ConnectionCloser.close(connection);
    }
  }
}