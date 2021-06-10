using System;
public class Program{
public static void Main(){

int i;

Console.WriteLine("Digite dois números para definir o intervalo:");

int min = Convert.ToInt32(Console.ReadLine());
int max = Convert.ToInt32(Console.ReadLine());

for (i = min; i <= max; i++) {
var num = i%2;
if (num%2 == 0){
    
Console.WriteLine("Número par: {i}" + i);
   }
  }
 }
}