import java.io.*;
class FileDemo
{
  public static void main(String args[])
  {
   BufferedReader reader=null;  
   try
   {
    int linescnt=0,charscnt=0,wordscnt=0;
   
    FileInputStream fis=new FileInputStream("sample.txt");
    reader=new BufferedReader(new FileReader("sample.txt"));
    String currentline = reader.readLine();
    while(currentline !=null)
    {
	linescnt++;
	String[] words = currentline.split(" ");
 	wordscnt=wordscnt + words.length;
 	for(String word: words)
	{
		charscnt=charscnt + word.length();
  	}	
	currentline=reader.readLine();
    }
    
    System.out.println("No. of characters : "+charscnt);
    System.out.println("No. of Words: "+wordscnt);
    System.out.println("No. of lines: "+linescnt);
    fis.close();
   }
   catch(FileNotFoundException e)
   {
     System.out.println("Cannot find the specified file...");
   }
   catch(IOException i)
   {
     System.out.println("Cannot read file...");
   }
   
  }
}





/*while(fis.available()!=0)
    {
      code=fis.read();
      if(code!=10)
       chars++;
      if(code==32)
        words++;
      if(code==13)
      {
        lines++;
        words++;
      }  
    }*/
