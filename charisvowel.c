  #include<stdio.h>
  void main ()
  {
    char ch;
    printf("enter a character ");
    scanf("%c", ch);
    switch(ch)
    {
        case 1 :printf("A");
        break;
        case 2 :printf("E");
        break;
        case 3 :printf("I");
        break;
        case 4 :printf("O");
        break;
        case 5 :printf("U");
        break;
        case 6 :printf("a");
        break;
        case 7 :printf("e");
        break;
        case 8 :printf("i");
        break;
        case 9 :printf("o");
        break;
        case 10 :printf("u");
        break;
        default :printf("wrong choise");
    }
    if(ch>=0 && ch<=9){
      printf("the character %c is digit \n", ch);
    }
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))  
          {
      printf("the character is %c is constant \n", ch);
    }
    else {
      printf("the character is %c is not a constant,vowel and nor digit \n", ch);
    }
}